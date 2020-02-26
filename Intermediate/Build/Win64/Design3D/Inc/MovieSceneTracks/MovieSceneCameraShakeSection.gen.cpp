// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneCameraShakeSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAnimPlaySpace();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FMovieSceneCameraShakeSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSectionData"), sizeof(FMovieSceneCameraShakeSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSectionData>()
{
	return FMovieSceneCameraShakeSectionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraShakeSectionData(FMovieSceneCameraShakeSectionData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraShakeSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraShakeSectionData")),new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSectionData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionData;
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDefinedPlaySpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDefinedPlaySpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSectionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_UserDefinedPlaySpace_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_UserDefinedPlaySpace = { "UserDefinedPlaySpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, UserDefinedPlaySpace), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_UserDefinedPlaySpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_UserDefinedPlaySpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, PlaySpace), Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlayScale_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
		{ "ToolTip", "Scalar that affects shake intensity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, PlayScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlayScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_ShakeClass_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
		{ "ToolTip", "Class of the camera shake to play" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, ShakeClass), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_ShakeClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_ShakeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_UserDefinedPlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlayScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_ShakeClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneCameraShakeSectionData",
		sizeof(FMovieSceneCameraShakeSectionData),
		alignof(FMovieSceneCameraShakeSectionData),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraShakeSectionData"), sizeof(FMovieSceneCameraShakeSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Hash() { return 1898444437U; }
	void UMovieSceneCameraShakeSection::StaticRegisterNativesUMovieSceneCameraShakeSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister()
	{
		return UMovieSceneCameraShakeSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDefinedPlaySpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDefinedPlaySpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShakeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneCameraShakeSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_UserDefinedPlaySpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_UserDefinedPlaySpace = { "UserDefinedPlaySpace", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraShakeSection, UserDefinedPlaySpace_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_UserDefinedPlaySpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_UserDefinedPlaySpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraShakeSection, PlaySpace_DEPRECATED), Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlayScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraShakeSection, PlayScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlayScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000020000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraShakeSection, ShakeClass_DEPRECATED), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeData_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeData = { "ShakeData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraShakeSection, ShakeData), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_UserDefinedPlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlayScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::ClassParams = {
		&UMovieSceneCameraShakeSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCameraShakeSection, 597823756);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeSection>()
	{
		return UMovieSceneCameraShakeSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraShakeSection(Z_Construct_UClass_UMovieSceneCameraShakeSection, &UMovieSceneCameraShakeSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraShakeSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

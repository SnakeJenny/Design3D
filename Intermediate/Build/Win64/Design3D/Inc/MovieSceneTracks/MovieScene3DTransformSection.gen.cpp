// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieScene3DTransformSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
// End Cross Module References
#if WITH_EDITORONLY_DATA
	static UEnum* EShow3DTrajectory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EShow3DTrajectory"));
		}
		return Singleton;
	}
	template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EShow3DTrajectory>()
	{
		return EShow3DTrajectory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShow3DTrajectory(EShow3DTrajectory_StaticEnum, TEXT("/Script/MovieSceneTracks"), TEXT("EShow3DTrajectory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Hash() { return 1741734711U; }
	UEnum* Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShow3DTrajectory"), 0, Get_Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShow3DTrajectory::EST_OnlyWhenSelected", (int64)EShow3DTrajectory::EST_OnlyWhenSelected },
				{ "EShow3DTrajectory::EST_Always", (int64)EShow3DTrajectory::EST_Always },
				{ "EShow3DTrajectory::EST_Never", (int64)EShow3DTrajectory::EST_Never },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EST_Always.DisplayName", "Always" },
				{ "EST_Never.DisplayName", "Never" },
				{ "EST_OnlyWhenSelected.DisplayName", "Only When Selected" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Visibility options for 3d trajectory." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				"EShow3DTrajectory",
				"EShow3DTrajectory",
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
#endif // WITH_EDITORONLY_DATA
class UScriptStruct* FMovieSceneTransformMask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTransformMask_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTransformMask, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneTransformMask"), sizeof(FMovieSceneTransformMask), Get_Z_Construct_UScriptStruct_FMovieSceneTransformMask_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneTransformMask>()
{
	return FMovieSceneTransformMask::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTransformMask(FMovieSceneTransformMask::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneTransformMask"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneTransformMask
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneTransformMask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTransformMask")),new UScriptStruct::TCppStructOps<FMovieSceneTransformMask>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneTransformMask;
	struct Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTransformMask>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTransformMask, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewProp_Mask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewProp_Mask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewProp_Mask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneTransformMask",
		sizeof(FMovieSceneTransformMask),
		alignof(FMovieSceneTransformMask),
		Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTransformMask_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTransformMask"), sizeof(FMovieSceneTransformMask), Get_Z_Construct_UScriptStruct_FMovieSceneTransformMask_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTransformMask_Hash() { return 2494049645U; }
class UScriptStruct* FMovieScene3DTransformKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DTransformKeyStruct"), sizeof(FMovieScene3DTransformKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DTransformKeyStruct>()
{
	return FMovieScene3DTransformKeyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DTransformKeyStruct(FMovieScene3DTransformKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DTransformKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DTransformKeyStruct")),new UScriptStruct::TCppStructOps<FMovieScene3DTransformKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformKeyStruct;
	struct Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Proxy structure for 3D transform section key data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DTransformKeyStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's scale value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's rotation value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's translation value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieScene3DTransformKeyStruct",
		sizeof(FMovieScene3DTransformKeyStruct),
		alignof(FMovieScene3DTransformKeyStruct),
		Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DTransformKeyStruct"), sizeof(FMovieScene3DTransformKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Hash() { return 1454165005U; }
class UScriptStruct* FMovieScene3DScaleKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DScaleKeyStruct"), sizeof(FMovieScene3DScaleKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DScaleKeyStruct>()
{
	return FMovieScene3DScaleKeyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DScaleKeyStruct(FMovieScene3DScaleKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DScaleKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DScaleKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DScaleKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DScaleKeyStruct")),new UScriptStruct::TCppStructOps<FMovieScene3DScaleKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DScaleKeyStruct;
	struct Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Proxy structure for translation keys in 3D transform sections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DScaleKeyStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DScaleKeyStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's scale value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DScaleKeyStruct, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieScene3DScaleKeyStruct",
		sizeof(FMovieScene3DScaleKeyStruct),
		alignof(FMovieScene3DScaleKeyStruct),
		Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DScaleKeyStruct"), sizeof(FMovieScene3DScaleKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Hash() { return 471544336U; }
class UScriptStruct* FMovieScene3DRotationKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DRotationKeyStruct"), sizeof(FMovieScene3DRotationKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DRotationKeyStruct>()
{
	return FMovieScene3DRotationKeyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DRotationKeyStruct(FMovieScene3DRotationKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DRotationKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DRotationKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DRotationKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DRotationKeyStruct")),new UScriptStruct::TCppStructOps<FMovieScene3DRotationKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DRotationKeyStruct;
	struct Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Proxy structure for translation keys in 3D transform sections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DRotationKeyStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DRotationKeyStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's rotation value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DRotationKeyStruct, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Rotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieScene3DRotationKeyStruct",
		sizeof(FMovieScene3DRotationKeyStruct),
		alignof(FMovieScene3DRotationKeyStruct),
		Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DRotationKeyStruct"), sizeof(FMovieScene3DRotationKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Hash() { return 709974974U; }
class UScriptStruct* FMovieScene3DLocationKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DLocationKeyStruct"), sizeof(FMovieScene3DLocationKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DLocationKeyStruct>()
{
	return FMovieScene3DLocationKeyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DLocationKeyStruct(FMovieScene3DLocationKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DLocationKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DLocationKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DLocationKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DLocationKeyStruct")),new UScriptStruct::TCppStructOps<FMovieScene3DLocationKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DLocationKeyStruct;
	struct Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Proxy structure for translation keys in 3D transform sections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DLocationKeyStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DLocationKeyStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's translation value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DLocationKeyStruct, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieScene3DLocationKeyStruct",
		sizeof(FMovieScene3DLocationKeyStruct),
		alignof(FMovieScene3DLocationKeyStruct),
		Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DLocationKeyStruct"), sizeof(FMovieScene3DLocationKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Hash() { return 1716394685U; }
	void UMovieScene3DTransformSection::StaticRegisterNativesUMovieScene3DTransformSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister()
	{
		return UMovieScene3DTransformSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DTransformSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Show3DTrajectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Show3DTrajectory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Show3DTrajectory_Underlying;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseQuaternionInterpolation_MetaData[];
#endif
		static void NewProp_bUseQuaternionInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseQuaternionInterpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManualWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DTransformSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieScene3DTransformSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A 3D transform section" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory_MetaData[] = {
		{ "Category", "Transform" },
		{ "DisplayName", "Show 3D Trajectory" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Whether to show the 3d trajectory" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory = { "Show3DTrajectory", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DTransformSection, Show3DTrajectory), Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "DisplayName", "Use Quaternion Interpolation" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Whether to use a quaternion linear interpolation between keys. This finds the 'shortest' distance between keys" },
	};
#endif
	void Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation_SetBit(void* Obj)
	{
		((UMovieScene3DTransformSection*)Obj)->bUseQuaternionInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation = { "bUseQuaternionInterpolation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieScene3DTransformSection), &Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_ManualWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Manual weight curve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_ManualWeight = { "ManualWeight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DTransformSection, ManualWeight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_ManualWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_ManualWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Scale curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Scale, UMovieScene3DTransformSection), STRUCT_OFFSET(UMovieScene3DTransformSection, Scale), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Rotation curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Rotation, UMovieScene3DTransformSection), STRUCT_OFFSET(UMovieScene3DTransformSection, Rotation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Translation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Translation curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Translation, UMovieScene3DTransformSection), STRUCT_OFFSET(UMovieScene3DTransformSection, Translation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_TransformMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_TransformMask = { "TransformMask", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DTransformSection, TransformMask), Z_Construct_UScriptStruct_FMovieSceneTransformMask, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_TransformMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_TransformMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DTransformSection_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory_Underlying,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_ManualWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_TransformMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DTransformSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DTransformSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::ClassParams = {
		&UMovieScene3DTransformSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene3DTransformSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DTransformSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene3DTransformSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene3DTransformSection, 3632867180);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DTransformSection>()
	{
		return UMovieScene3DTransformSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DTransformSection(Z_Construct_UClass_UMovieScene3DTransformSection, &UMovieScene3DTransformSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DTransformSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DTransformSection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScene3DTransformSection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieScene3DAttachTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
// End Cross Module References
class UScriptStruct* FMovieScene3DAttachSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DAttachSectionTemplate"), sizeof(FMovieScene3DAttachSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DAttachSectionTemplate>()
{
	return FMovieScene3DAttachSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DAttachSectionTemplate(FMovieScene3DAttachSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DAttachSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DAttachSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DAttachSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DAttachSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieScene3DAttachSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DAttachSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentScaleRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentScaleRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentScaleRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentRotationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentRotationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentRotationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentLocationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentLocationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentLocationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentScaleRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentScaleRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentScaleRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentRotationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentRotationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentRotationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentLocationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentLocationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentLocationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachBindingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DAttachSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentScaleRule_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
		{ "ToolTip", "The detachment scale rule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentScaleRule = { "DetachmentScaleRule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, DetachmentScaleRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentScaleRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentScaleRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentRotationRule_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
		{ "ToolTip", "The detachment rotation rule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentRotationRule = { "DetachmentRotationRule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, DetachmentRotationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentRotationRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentRotationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentLocationRule_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
		{ "ToolTip", "The detachment location rule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentLocationRule = { "DetachmentLocationRule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, DetachmentLocationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentLocationRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentLocationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentScaleRule_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
		{ "ToolTip", "The attachment scale rule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentScaleRule = { "AttachmentScaleRule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachmentScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentScaleRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentScaleRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentRotationRule_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
		{ "ToolTip", "The attachment rotation rule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentRotationRule = { "AttachmentRotationRule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachmentRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentRotationRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentRotationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentLocationRule_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
		{ "ToolTip", "The attachment location rule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentLocationRule = { "AttachmentLocationRule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachmentLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentLocationRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentLocationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachComponentName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
		{ "ToolTip", "Name of the component to attach to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachComponentName = { "AttachComponentName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachComponentName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
		{ "ToolTip", "Name of the socket to attach to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachSocketName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachBindingID_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
		{ "ToolTip", "The object binding ID we should attach to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachBindingID = { "AttachBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachBindingID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachBindingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentRotationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentRotationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentLocationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_DetachmentLocationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentRotationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentRotationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentLocationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachmentLocationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::NewProp_AttachBindingID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieScene3DAttachSectionTemplate",
		sizeof(FMovieScene3DAttachSectionTemplate),
		alignof(FMovieScene3DAttachSectionTemplate),
		Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DAttachSectionTemplate"), sizeof(FMovieScene3DAttachSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_Hash() { return 3006735654U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_GameplayTags() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
// End Cross Module References
	void UEnvQueryTest_GameplayTags::StaticRegisterNativesUEnvQueryTest_GameplayTags()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags_NoRegister()
	{
		return UEnvQueryTest_GameplayTags::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagsToMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TagsToMatch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TagsToMatch_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatedToUseQuery_MetaData[];
#endif
		static void NewProp_bUpdatedToUseQuery_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatedToUseQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagQueryToMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagQueryToMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
		{ "ToolTip", "Deprecated property.  Used only to load old data into TagQueryToMatch." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_GameplayTags, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_GameplayTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
		{ "ToolTip", "Deprecated property.  Used only to load old data into TagQueryToMatch." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch = { "TagsToMatch", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_GameplayTags, TagsToMatch), Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
		{ "ToolTip", "Used to determine whether the file format needs to be updated to move data into TagQueryToMatch or not." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery_SetBit(void* Obj)
	{
		((UEnvQueryTest_GameplayTags*)Obj)->bUpdatedToUseQuery = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery = { "bUpdatedToUseQuery", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnvQueryTest_GameplayTags), &Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagQueryToMatch_MetaData[] = {
		{ "Category", "GameplayTagCheck" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagQueryToMatch = { "TagQueryToMatch", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_GameplayTags, TagQueryToMatch), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagQueryToMatch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagQueryToMatch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagQueryToMatch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_GameplayTags>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::ClassParams = {
		&UEnvQueryTest_GameplayTags::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest_GameplayTags, 93231889);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_GameplayTags>()
	{
		return UEnvQueryTest_GameplayTags::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_GameplayTags(Z_Construct_UClass_UEnvQueryTest_GameplayTags, &UEnvQueryTest_GameplayTags::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_GameplayTags"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_GameplayTags);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

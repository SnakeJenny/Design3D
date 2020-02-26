// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTools/Private/K2Node_GetSequenceBindings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetSequenceBindings() {}
// Cross Module References
	MOVIESCENETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FGetSequenceBindingGuidMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETOOLS_API uint32 Get_Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping, Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("GetSequenceBindingGuidMapping"), sizeof(FGetSequenceBindingGuidMapping), Get_Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<FGetSequenceBindingGuidMapping>()
{
	return FGetSequenceBindingGuidMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGetSequenceBindingGuidMapping(FGetSequenceBindingGuidMapping::StaticStruct, TEXT("/Script/MovieSceneTools"), TEXT("GetSequenceBindingGuidMapping"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTools_StaticRegisterNativesFGetSequenceBindingGuidMapping
{
	FScriptStruct_MovieSceneTools_StaticRegisterNativesFGetSequenceBindingGuidMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GetSequenceBindingGuidMapping")),new UScriptStruct::TCppStructOps<FGetSequenceBindingGuidMapping>);
	}
} ScriptStruct_MovieSceneTools_StaticRegisterNativesFGetSequenceBindingGuidMapping;
	struct Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/K2Node_GetSequenceBindings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetSequenceBindingGuidMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_GetSequenceBindings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetSequenceBindingGuidMapping, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_GetSequenceBindings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetSequenceBindingGuidMapping, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewProp_PinName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewProp_PinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::NewProp_PinName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		&NewStructOps,
		"GetSequenceBindingGuidMapping",
		sizeof(FGetSequenceBindingGuidMapping),
		alignof(FGetSequenceBindingGuidMapping),
		Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GetSequenceBindingGuidMapping"), sizeof(FGetSequenceBindingGuidMapping), Get_Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping_Hash() { return 3482809278U; }
	void UDEPRECATED_K2Node_GetSequenceBindings::StaticRegisterNativesUDEPRECATED_K2Node_GetSequenceBindings()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_NoRegister()
	{
		return UDEPRECATED_K2Node_GetSequenceBindings::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BindingGuids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingGuids_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSequenceBindings.h" },
		{ "ModuleRelativePath", "Private/K2Node_GetSequenceBindings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Private/K2Node_GetSequenceBindings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_K2Node_GetSequenceBindings, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_Sequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_BindingGuids_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_GetSequenceBindings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_BindingGuids = { "BindingGuids", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_K2Node_GetSequenceBindings, BindingGuids), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_BindingGuids_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_BindingGuids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_BindingGuids_Inner = { "BindingGuids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGetSequenceBindingGuidMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_BindingGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::NewProp_BindingGuids_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_K2Node_GetSequenceBindings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::ClassParams = {
		&UDEPRECATED_K2Node_GetSequenceBindings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::PropPointers),
		0,
		0x020802A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_K2Node_GetSequenceBindings, 2229031767);
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UDEPRECATED_K2Node_GetSequenceBindings>()
	{
		return UDEPRECATED_K2Node_GetSequenceBindings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_K2Node_GetSequenceBindings(Z_Construct_UClass_UDEPRECATED_K2Node_GetSequenceBindings, &UDEPRECATED_K2Node_GetSequenceBindings::StaticClass, TEXT("/Script/MovieSceneTools"), TEXT("UDEPRECATED_K2Node_GetSequenceBindings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_K2Node_GetSequenceBindings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

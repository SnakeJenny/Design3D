// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceBindingReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceBindingReference() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FLevelSequenceBindingReferences::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReferences"), sizeof(FLevelSequenceBindingReferences), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceBindingReferences>()
{
	return FLevelSequenceBindingReferences::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceBindingReferences(FLevelSequenceBindingReferences::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceBindingReferences"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceBindingReferences")),new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferences>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences;
	struct Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_AnimSequenceInstances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSequenceInstances_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingIdToReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BindingIdToReferences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingIdToReferences_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingIdToReferences_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferences>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "A set of object binding IDs that relate to anim sequence instances (must be a child of USkeletalMeshComponent)" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances = { "AnimSequenceInstances", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceBindingReferences, AnimSequenceInstances), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_ElementProp = { "AnimSequenceInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "The map from object binding ID to an array of references that pertain to that ID" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences = { "BindingIdToReferences", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceBindingReferences, BindingIdToReferences), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_Key_KeyProp = { "BindingIdToReferences_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_ValueProp = { "BindingIdToReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceBindingReferences",
		sizeof(FLevelSequenceBindingReferences),
		alignof(FLevelSequenceBindingReferences),
		Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceBindingReferences"), sizeof(FLevelSequenceBindingReferences), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Hash() { return 859072691U; }
class UScriptStruct* FLevelSequenceBindingReferenceArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReferenceArray"), sizeof(FLevelSequenceBindingReferenceArray), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceBindingReferenceArray>()
{
	return FLevelSequenceBindingReferenceArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceBindingReferenceArray(FLevelSequenceBindingReferenceArray::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceBindingReferenceArray"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceBindingReferenceArray")),new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferenceArray>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray;
	struct Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_References_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_References;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_References_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "An array of binding references" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferenceArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References = { "References", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceBindingReferenceArray, References), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_Inner = { "References", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLevelSequenceBindingReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceBindingReferenceArray",
		sizeof(FLevelSequenceBindingReferenceArray),
		alignof(FLevelSequenceBindingReferenceArray),
		Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceBindingReferenceArray"), sizeof(FLevelSequenceBindingReferenceArray), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Hash() { return 2327752147U; }
class UScriptStruct* FLevelSequenceBindingReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReference, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReference"), sizeof(FLevelSequenceBindingReference), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceBindingReference>()
{
	return FLevelSequenceBindingReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceBindingReference(FLevelSequenceBindingReference::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceBindingReference"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceBindingReference")),new UScriptStruct::TCppStructOps<FLevelSequenceBindingReference>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference;
	struct Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "An external reference to an level sequence object, resolvable through an arbitrary context.\n\nBindings consist of an optional package name, and the path to the object within that package.\nWhere package name is empty, the reference is a relative path from a specific outer (the context).\nCurrently, the package name should only ever be empty for component references, which must remain relative bindings to work correctly with spawnables and reinstanced actors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Object path relative to a passed in context object, this is used if ExternalObjectPath is invalid" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceBindingReference, ObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Path to a specific actor/component inside an external package" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath = { "ExternalObjectPath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceBindingReference, ExternalObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Replaced by ExternalObjectPath" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceBindingReference, PackageName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceBindingReference",
		sizeof(FLevelSequenceBindingReference),
		alignof(FLevelSequenceBindingReference),
		Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceBindingReference"), sizeof(FLevelSequenceBindingReference), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Hash() { return 2172804970U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

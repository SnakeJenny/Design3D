// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/BoneContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneContainer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType();
// End Cross Module References
class UScriptStruct* FBoneReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneReference, Z_Construct_UPackage__Script_Engine(), TEXT("BoneReference"), sizeof(FBoneReference), Get_Z_Construct_UScriptStruct_FBoneReference_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneReference>()
{
	return FBoneReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneReference(FBoneReference::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneReference
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneReference")),new UScriptStruct::TCppStructOps<FBoneReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneReference;
	struct Z_Construct_UScriptStruct_FBoneReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneReference_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "BoneReference" },
		{ "ModuleRelativePath", "Public/BoneContainer.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneReference_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneReference, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneReference_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReference_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneReference_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneReference",
		sizeof(FBoneReference),
		alignof(FBoneReference),
		Z_Construct_UScriptStruct_FBoneReference_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneReference_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneReference"), sizeof(FBoneReference), Get_Z_Construct_UScriptStruct_FBoneReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneReference_Hash() { return 429520508U; }
class UScriptStruct* FAnimCurveType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimCurveType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveType, Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveType"), sizeof(FAnimCurveType), Get_Z_Construct_UScriptStruct_FAnimCurveType_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimCurveType>()
{
	return FAnimCurveType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimCurveType(FAnimCurveType::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimCurveType"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimCurveType
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimCurveType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimCurveType")),new UScriptStruct::TCppStructOps<FAnimCurveType>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimCurveType;
	struct Z_Construct_UScriptStruct_FAnimCurveType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneContainer.h" },
		{ "ToolTip", "in the future if we need more bools, please convert to bitfield\nThese are not saved in asset but per skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveType>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCurveType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimCurveType",
		sizeof(FAnimCurveType),
		alignof(FAnimCurveType),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimCurveType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimCurveType"), sizeof(FAnimCurveType), Get_Z_Construct_UScriptStruct_FAnimCurveType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimCurveType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimCurveType_Hash() { return 1629981297U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

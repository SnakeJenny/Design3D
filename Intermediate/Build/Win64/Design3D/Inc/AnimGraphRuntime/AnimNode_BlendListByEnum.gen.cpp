// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListByEnum() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendListByEnum::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListByEnum"), sizeof(FAnimNode_BlendListByEnum), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendListByEnum>()
{
	return FAnimNode_BlendListByEnum::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendListByEnum(FAnimNode_BlendListByEnum::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendListByEnum"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByEnum
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByEnum()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendListByEnum")),new UScriptStruct::TCppStructOps<FAnimNode_BlendListByEnum>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByEnum;
	struct Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEnumValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveEnumValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumToPoseIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnumToPoseIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnumToPoseIndex_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByEnum.h" },
		{ "ToolTip", "Blend List by Enum, it changes based on enum input that enters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListByEnum>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_ActiveEnumValue_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByEnum.h" },
		{ "ToolTip", "The currently selected pose (as an enum value)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_ActiveEnumValue = { "ActiveEnumValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendListByEnum, ActiveEnumValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_ActiveEnumValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_ActiveEnumValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByEnum.h" },
		{ "ToolTip", "Mapping from enum value to BlendPose index; there will be one entry per entry in the enum; entries out of range always map to pose index 0" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex = { "EnumToPoseIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendListByEnum, EnumToPoseIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex_Inner = { "EnumToPoseIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_ActiveEnumValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
		&NewStructOps,
		"AnimNode_BlendListByEnum",
		sizeof(FAnimNode_BlendListByEnum),
		alignof(FAnimNode_BlendListByEnum),
		Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendListByEnum"), sizeof(FAnimNode_BlendListByEnum), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Hash() { return 3219279246U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_Slot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Slot() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Slot();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_Slot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Slot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Slot, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Slot"), sizeof(FAnimNode_Slot), Get_Z_Construct_UScriptStruct_FAnimNode_Slot_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Slot>()
{
	return FAnimNode_Slot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Slot(FAnimNode_Slot::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_Slot"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Slot
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Slot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Slot")),new UScriptStruct::TCppStructOps<FAnimNode_Slot>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Slot;
	struct Z_Construct_UScriptStruct_FAnimNode_Slot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUpdateSourcePose_MetaData[];
#endif
		static void NewProp_bAlwaysUpdateSourcePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUpdateSourcePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "An animation slot node normally acts as a passthru, but a montage or PlaySlotAnimation call from\ngame code can cause an animation to blend in and be played on the slot temporarily, overriding the\nSource input." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Slot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "Whether we should continue to update the source pose regardless of whether it would be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_SetBit(void* Obj)
	{
		((FAnimNode_Slot*)Obj)->bAlwaysUpdateSourcePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose = { "bAlwaysUpdateSourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_Slot), &Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Settings" },
		{ "CustomizeProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "The name of this slot, exposed to gameplay code, etc..." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Slot, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "The source input, passed thru to the output unless a montage or slot animation is currently playing" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Slot, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_Slot",
		sizeof(FAnimNode_Slot),
		alignof(FAnimNode_Slot),
		Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Slot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Slot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Slot"), sizeof(FAnimNode_Slot), Get_Z_Construct_UScriptStruct_FAnimNode_Slot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Slot_Hash() { return 3567128235U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

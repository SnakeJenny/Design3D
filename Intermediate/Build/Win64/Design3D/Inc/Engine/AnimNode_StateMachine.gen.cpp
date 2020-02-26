// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_StateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_StateMachine() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationPotentialTransition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_StateMachine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_StateMachine_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateMachine, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_StateMachine"), sizeof(FAnimNode_StateMachine), Get_Z_Construct_UScriptStruct_FAnimNode_StateMachine_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_StateMachine>()
{
	return FAnimNode_StateMachine::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_StateMachine(FAnimNode_StateMachine::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_StateMachine"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_StateMachine
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_StateMachine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_StateMachine")),new UScriptStruct::TCppStructOps<FAnimNode_StateMachine>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_StateMachine;
	struct Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReinitializeOnBecomingRelevant_MetaData[];
#endif
		static void NewProp_bReinitializeOnBecomingRelevant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReinitializeOnBecomingRelevant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipFirstUpdateTransition_MetaData[];
#endif
		static void NewProp_bSkipFirstUpdateTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipFirstUpdateTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTransitionsPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTransitionsPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineIndexInClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateMachineIndexInClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "State machine node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_StateMachine>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Reinitialize the state machine if we have become relevant to the graph\nafter not being ticked on the previous frame(s)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_SetBit(void* Obj)
	{
		((FAnimNode_StateMachine*)Obj)->bReinitializeOnBecomingRelevant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant = { "bReinitializeOnBecomingRelevant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_StateMachine), &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "When the state machine becomes relevant, it is initialized into the Entry state.\nIt then tries to take any valid transitions to possibly end up in a different state on that same frame.\n- if true, that new state starts full weight.\n- if false, a blend is created between the entry state and that new state.\nIn either case all visited State notifications (Begin/End) will be triggered." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_SetBit(void* Obj)
	{
		((FAnimNode_StateMachine*)Obj)->bSkipFirstUpdateTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition = { "bSkipFirstUpdateTransition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_StateMachine), &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "The maximum number of transitions that can be taken by this machine 'simultaneously' in a single frame" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame = { "MaxTransitionsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_StateMachine, MaxTransitionsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Index into the BakedStateMachines array in the owning UAnimBlueprintGeneratedClass" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass = { "StateMachineIndexInClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_StateMachine, StateMachineIndexInClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_StateMachine",
		sizeof(FAnimNode_StateMachine),
		alignof(FAnimNode_StateMachine),
		Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_StateMachine_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_StateMachine"), sizeof(FAnimNode_StateMachine), Get_Z_Construct_UScriptStruct_FAnimNode_StateMachine_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_StateMachine_Hash() { return 4030041551U; }
class UScriptStruct* FAnimationPotentialTransition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationPotentialTransition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationPotentialTransition, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationPotentialTransition"), sizeof(FAnimationPotentialTransition), Get_Z_Construct_UScriptStruct_FAnimationPotentialTransition_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationPotentialTransition>()
{
	return FAnimationPotentialTransition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationPotentialTransition(FAnimationPotentialTransition::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationPotentialTransition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationPotentialTransition
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationPotentialTransition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationPotentialTransition")),new UScriptStruct::TCppStructOps<FAnimationPotentialTransition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationPotentialTransition;
	struct Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationPotentialTransition>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationPotentialTransition",
		sizeof(FAnimationPotentialTransition),
		alignof(FAnimationPotentialTransition),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationPotentialTransition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationPotentialTransition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationPotentialTransition"), sizeof(FAnimationPotentialTransition), Get_Z_Construct_UScriptStruct_FAnimationPotentialTransition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationPotentialTransition_Hash() { return 3135018904U; }
class UScriptStruct* FAnimationActiveTransitionEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationActiveTransitionEntry"), sizeof(FAnimationActiveTransitionEntry), Get_Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationActiveTransitionEntry>()
{
	return FAnimationActiveTransitionEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationActiveTransitionEntry(FAnimationActiveTransitionEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationActiveTransitionEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationActiveTransitionEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationActiveTransitionEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationActiveTransitionEntry")),new UScriptStruct::TCppStructOps<FAnimationActiveTransitionEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationActiveTransitionEntry;
	struct Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Information about an active transition on the transition stack" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationActiveTransitionEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Blend profile to use for this transition. Specifying this will make the transition evaluate per-bone" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationActiveTransitionEntry, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationActiveTransitionEntry",
		sizeof(FAnimationActiveTransitionEntry),
		alignof(FAnimationActiveTransitionEntry),
		Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationActiveTransitionEntry"), sizeof(FAnimationActiveTransitionEntry), Get_Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Hash() { return 1849768715U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

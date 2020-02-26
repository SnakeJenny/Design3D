// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimStateTransitionNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateTransitionNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateTransitionNode_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateTransitionNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionLogicType();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionBlendMode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	void UAnimStateTransitionNode::StaticRegisterNativesUAnimStateTransitionNode()
	{
	}
	UClass* Z_Construct_UClass_UAnimStateTransitionNode_NoRegister()
	{
		return UAnimStateTransitionNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateTransitionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedCrossfadeIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SharedCrossfadeIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedCrossfadeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedCrossfadeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedCrossfadeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SharedCrossfadeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedRulesGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedRulesGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedRulesName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SharedRulesName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSharedCrossfade_MetaData[];
#endif
		static void NewProp_bSharedCrossfade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSharedCrossfade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSharedRules_MetaData[];
#endif
		static void NewProp_bSharedRules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSharedRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bidirectional_MetaData[];
#endif
		static void NewProp_Bidirectional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bidirectional;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionInterrupt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionInterrupt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogicType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogicType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticRuleBasedOnSequencePlayerInState_MetaData[];
#endif
		static void NewProp_bAutomaticRuleBasedOnSequencePlayerInState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticRuleBasedOnSequencePlayerInState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossfadeMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CrossfadeMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossfadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrossfadeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriorityOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTransitionGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTransitionGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateTransitionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimStateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimStateTransitionNode.h" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeIdx_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeIdx = { "SharedCrossfadeIdx", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, SharedCrossfadeIdx), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeIdx_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeGuid = { "SharedCrossfadeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, SharedCrossfadeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeName = { "SharedCrossfadeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, SharedCrossfadeName), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "Color we draw in the editor as if we are shared" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedColor = { "SharedColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, SharedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "Shared rules guid useful when copying between different state machines" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesGuid = { "SharedRulesGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, SharedRulesGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "What we call this transition if we are shared ('Transition X to Y' can't be used since its used in multiple places)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesName = { "SharedRulesName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, SharedRulesName), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "The cross-fade settings of this node may be shared" },
	};
#endif
	void Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade_SetBit(void* Obj)
	{
		((UAnimStateTransitionNode*)Obj)->bSharedCrossfade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade = { "bSharedCrossfade", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimStateTransitionNode), &Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "The rules for this transition may be shared with other transition nodes" },
	};
#endif
	void Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules_SetBit(void* Obj)
	{
		((UAnimStateTransitionNode*)Obj)->bSharedRules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules = { "bSharedRules", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimStateTransitionNode), &Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "This transition can go both directions" },
	};
#endif
	void Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional_SetBit(void* Obj)
	{
		((UAnimStateTransitionNode*)Obj)->Bidirectional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional = { "Bidirectional", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimStateTransitionNode), &Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionInterrupt_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionInterrupt = { "TransitionInterrupt", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, TransitionInterrupt), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionInterrupt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionInterrupt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionEnd_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionEnd = { "TransitionEnd", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, TransitionEnd), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionStart_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionStart = { "TransitionStart", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, TransitionStart), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_LogicType_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "What transition logic to use" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_LogicType = { "LogicType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, LogicType), Z_Construct_UEnum_Engine_ETransitionLogicType, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_LogicType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_LogicType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "Try setting the rule automatically based on most relevant player node's remaining time and the CrossfadeDuration of the transition, ignoring the internal time" },
	};
#endif
	void Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState_SetBit(void* Obj)
	{
		((UAnimStateTransitionNode*)Obj)->bAutomaticRuleBasedOnSequencePlayerInState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState = { "bAutomaticRuleBasedOnSequencePlayerInState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimStateTransitionNode), &Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "The blend profile to use to evaluate this transition per-bone" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomBlendCurve_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomBlendCurve = { "CustomBlendCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomBlendCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, BlendMode), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "The type of blending to use in the crossfade" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeMode = { "CrossfadeMode", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, CrossfadeMode_DEPRECATED), Z_Construct_UEnum_Engine_ETransitionBlendMode, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeDuration_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "The duration to cross-fade for" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeDuration = { "CrossfadeDuration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, CrossfadeDuration), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_PriorityOrder_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "The priority order of this transition. If multiple transitions out of a state go\ntrue at the same time, the one with the smallest priority order will take precedent" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_PriorityOrder = { "PriorityOrder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, PriorityOrder), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_PriorityOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_PriorityOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomTransitionGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "The animation graph for this transition if it uses custom blending (returning a pose)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomTransitionGraph = { "CustomTransitionGraph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, CustomTransitionGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomTransitionGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomTransitionGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateTransitionNode.h" },
		{ "ToolTip", "The transition logic graph for this transition (returning a boolean)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateTransitionNode, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BoundGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BoundGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimStateTransitionNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionInterrupt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_LogicType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_PriorityOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomTransitionGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BoundGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateTransitionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateTransitionNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::ClassParams = {
		&UAnimStateTransitionNode::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimStateTransitionNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateTransitionNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimStateTransitionNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimStateTransitionNode, 1849753694);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimStateTransitionNode>()
	{
		return UAnimStateTransitionNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimStateTransitionNode(Z_Construct_UClass_UAnimStateTransitionNode, &UAnimStateTransitionNode::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimStateTransitionNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateTransitionNode);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateTransitionNode)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

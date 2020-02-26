// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimationStateMachineSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationStateMachineSchema() {}
// Cross Module References
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineSchema_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FEdGraphSchemaAction_NewStateComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment, Z_Construct_UPackage__Script_AnimGraph(), TEXT("EdGraphSchemaAction_NewStateComment"), sizeof(FEdGraphSchemaAction_NewStateComment), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_NewStateComment>()
{
	return FEdGraphSchemaAction_NewStateComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_NewStateComment(FEdGraphSchemaAction_NewStateComment::StaticStruct, TEXT("/Script/AnimGraph"), TEXT("EdGraphSchemaAction_NewStateComment"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraph_StaticRegisterNativesFEdGraphSchemaAction_NewStateComment
{
	FScriptStruct_AnimGraph_StaticRegisterNativesFEdGraphSchemaAction_NewStateComment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_NewStateComment")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewStateComment>);
	}
} ScriptStruct_AnimGraph_StaticRegisterNativesFEdGraphSchemaAction_NewStateComment;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AnimationStateMachineSchema.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewStateComment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_NewStateComment",
		sizeof(FEdGraphSchemaAction_NewStateComment),
		alignof(FEdGraphSchemaAction_NewStateComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_NewStateComment"), sizeof(FEdGraphSchemaAction_NewStateComment), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Hash() { return 3841286551U; }
class UScriptStruct* FEdGraphSchemaAction_NewStateNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode, Z_Construct_UPackage__Script_AnimGraph(), TEXT("EdGraphSchemaAction_NewStateNode"), sizeof(FEdGraphSchemaAction_NewStateNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_NewStateNode>()
{
	return FEdGraphSchemaAction_NewStateNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_NewStateNode(FEdGraphSchemaAction_NewStateNode::StaticStruct, TEXT("/Script/AnimGraph"), TEXT("EdGraphSchemaAction_NewStateNode"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraph_StaticRegisterNativesFEdGraphSchemaAction_NewStateNode
{
	FScriptStruct_AnimGraph_StaticRegisterNativesFEdGraphSchemaAction_NewStateNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_NewStateNode")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewStateNode>);
	}
} ScriptStruct_AnimGraph_StaticRegisterNativesFEdGraphSchemaAction_NewStateNode;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AnimationStateMachineSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewStateNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_NewStateNode",
		sizeof(FEdGraphSchemaAction_NewStateNode),
		alignof(FEdGraphSchemaAction_NewStateNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_NewStateNode"), sizeof(FEdGraphSchemaAction_NewStateNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Hash() { return 4164537330U; }
	void UAnimationStateMachineSchema::StaticRegisterNativesUAnimationStateMachineSchema()
	{
	}
	UClass* Z_Construct_UClass_UAnimationStateMachineSchema_NoRegister()
	{
		return UAnimationStateMachineSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationStateMachineSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationStateMachineSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationStateMachineSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationStateMachineSchema.h" },
		{ "ModuleRelativePath", "Classes/AnimationStateMachineSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationStateMachineSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationStateMachineSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationStateMachineSchema_Statics::ClassParams = {
		&UAnimationStateMachineSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationStateMachineSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationStateMachineSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationStateMachineSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationStateMachineSchema, 1470522430);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationStateMachineSchema>()
	{
		return UAnimationStateMachineSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationStateMachineSchema(Z_Construct_UClass_UAnimationStateMachineSchema, &UAnimationStateMachineSchema::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimationStateMachineSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationStateMachineSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

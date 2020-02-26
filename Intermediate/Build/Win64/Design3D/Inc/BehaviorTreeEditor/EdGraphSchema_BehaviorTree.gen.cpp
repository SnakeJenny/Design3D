// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeEditor/Classes/EdGraphSchema_BehaviorTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_BehaviorTree() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	BEHAVIORTREEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphSchema();
// End Cross Module References
class UScriptStruct* FBehaviorTreeSchemaAction_AddComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BEHAVIORTREEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment, Z_Construct_UPackage__Script_BehaviorTreeEditor(), TEXT("BehaviorTreeSchemaAction_AddComment"), sizeof(FBehaviorTreeSchemaAction_AddComment), Get_Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Hash());
	}
	return Singleton;
}
template<> BEHAVIORTREEEDITOR_API UScriptStruct* StaticStruct<FBehaviorTreeSchemaAction_AddComment>()
{
	return FBehaviorTreeSchemaAction_AddComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment(FBehaviorTreeSchemaAction_AddComment::StaticStruct, TEXT("/Script/BehaviorTreeEditor"), TEXT("BehaviorTreeSchemaAction_AddComment"), false, nullptr, nullptr);
static struct FScriptStruct_BehaviorTreeEditor_StaticRegisterNativesFBehaviorTreeSchemaAction_AddComment
{
	FScriptStruct_BehaviorTreeEditor_StaticRegisterNativesFBehaviorTreeSchemaAction_AddComment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BehaviorTreeSchemaAction_AddComment")),new UScriptStruct::TCppStructOps<FBehaviorTreeSchemaAction_AddComment>);
	}
} ScriptStruct_BehaviorTreeEditor_StaticRegisterNativesFBehaviorTreeSchemaAction_AddComment;
	struct Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTree.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviorTreeSchemaAction_AddComment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"BehaviorTreeSchemaAction_AddComment",
		sizeof(FBehaviorTreeSchemaAction_AddComment),
		alignof(FBehaviorTreeSchemaAction_AddComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BehaviorTreeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BehaviorTreeSchemaAction_AddComment"), sizeof(FBehaviorTreeSchemaAction_AddComment), Get_Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AddComment_Hash() { return 208585607U; }
class UScriptStruct* FBehaviorTreeSchemaAction_AutoArrange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BEHAVIORTREEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange, Z_Construct_UPackage__Script_BehaviorTreeEditor(), TEXT("BehaviorTreeSchemaAction_AutoArrange"), sizeof(FBehaviorTreeSchemaAction_AutoArrange), Get_Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Hash());
	}
	return Singleton;
}
template<> BEHAVIORTREEEDITOR_API UScriptStruct* StaticStruct<FBehaviorTreeSchemaAction_AutoArrange>()
{
	return FBehaviorTreeSchemaAction_AutoArrange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange(FBehaviorTreeSchemaAction_AutoArrange::StaticStruct, TEXT("/Script/BehaviorTreeEditor"), TEXT("BehaviorTreeSchemaAction_AutoArrange"), false, nullptr, nullptr);
static struct FScriptStruct_BehaviorTreeEditor_StaticRegisterNativesFBehaviorTreeSchemaAction_AutoArrange
{
	FScriptStruct_BehaviorTreeEditor_StaticRegisterNativesFBehaviorTreeSchemaAction_AutoArrange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BehaviorTreeSchemaAction_AutoArrange")),new UScriptStruct::TCppStructOps<FBehaviorTreeSchemaAction_AutoArrange>);
	}
} ScriptStruct_BehaviorTreeEditor_StaticRegisterNativesFBehaviorTreeSchemaAction_AutoArrange;
	struct Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTree.h" },
		{ "ToolTip", "Action to auto arrange the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviorTreeSchemaAction_AutoArrange>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"BehaviorTreeSchemaAction_AutoArrange",
		sizeof(FBehaviorTreeSchemaAction_AutoArrange),
		alignof(FBehaviorTreeSchemaAction_AutoArrange),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BehaviorTreeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BehaviorTreeSchemaAction_AutoArrange"), sizeof(FBehaviorTreeSchemaAction_AutoArrange), Get_Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Hash() { return 2695484297U; }
	void UEdGraphSchema_BehaviorTree::StaticRegisterNativesUEdGraphSchema_BehaviorTree()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree_NoRegister()
	{
		return UEdGraphSchema_BehaviorTree::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphSchema_BehaviorTree.h" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTree.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_BehaviorTree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::ClassParams = {
		&UEdGraphSchema_BehaviorTree::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraphSchema_BehaviorTree, 1469359912);
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UEdGraphSchema_BehaviorTree>()
	{
		return UEdGraphSchema_BehaviorTree::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphSchema_BehaviorTree(Z_Construct_UClass_UEdGraphSchema_BehaviorTree, &UEdGraphSchema_BehaviorTree::StaticClass, TEXT("/Script/BehaviorTreeEditor"), TEXT("UEdGraphSchema_BehaviorTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_BehaviorTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

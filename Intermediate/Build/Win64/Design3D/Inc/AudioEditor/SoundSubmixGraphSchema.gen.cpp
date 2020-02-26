// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/SoundSubmixGraph/SoundSubmixGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixGraphSchema() {}
// Cross Module References
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraphSchema_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FSoundSubmixGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundSubmixGraphSchemaAction_NewNode"), sizeof(FSoundSubmixGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundSubmixGraphSchemaAction_NewNode>()
{
	return FSoundSubmixGraphSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode(FSoundSubmixGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/AudioEditor"), TEXT("SoundSubmixGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_AudioEditor_StaticRegisterNativesFSoundSubmixGraphSchemaAction_NewNode
{
	FScriptStruct_AudioEditor_StaticRegisterNativesFSoundSubmixGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundSubmixGraphSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FSoundSubmixGraphSchemaAction_NewNode>);
	}
} ScriptStruct_AudioEditor_StaticRegisterNativesFSoundSubmixGraphSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SoundSubmixGraph/SoundSubmixGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixGraphSchemaAction_NewNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SoundSubmixGraphSchemaAction_NewNode",
		sizeof(FSoundSubmixGraphSchemaAction_NewNode),
		alignof(FSoundSubmixGraphSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundSubmixGraphSchemaAction_NewNode"), sizeof(FSoundSubmixGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Hash() { return 4254863237U; }
	void USoundSubmixGraphSchema::StaticRegisterNativesUSoundSubmixGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_USoundSubmixGraphSchema_NoRegister()
	{
		return USoundSubmixGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundSubmixGraph/SoundSubmixGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/SoundSubmixGraph/SoundSubmixGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixGraphSchema_Statics::ClassParams = {
		&USoundSubmixGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundSubmixGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSubmixGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSubmixGraphSchema, 720366628);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSubmixGraphSchema>()
	{
		return USoundSubmixGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSubmixGraphSchema(Z_Construct_UClass_USoundSubmixGraphSchema, &USoundSubmixGraphSchema::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundSubmixGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

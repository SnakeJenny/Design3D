// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/SoundClassGraph/SoundClassGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundClassGraphSchema() {}
// Cross Module References
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassGraphSchema_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FSoundClassGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundClassGraphSchemaAction_NewNode"), sizeof(FSoundClassGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundClassGraphSchemaAction_NewNode>()
{
	return FSoundClassGraphSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode(FSoundClassGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/AudioEditor"), TEXT("SoundClassGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_AudioEditor_StaticRegisterNativesFSoundClassGraphSchemaAction_NewNode
{
	FScriptStruct_AudioEditor_StaticRegisterNativesFSoundClassGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundClassGraphSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FSoundClassGraphSchemaAction_NewNode>);
	}
} ScriptStruct_AudioEditor_StaticRegisterNativesFSoundClassGraphSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SoundClassGraph/SoundClassGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassGraphSchemaAction_NewNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SoundClassGraphSchemaAction_NewNode",
		sizeof(FSoundClassGraphSchemaAction_NewNode),
		alignof(FSoundClassGraphSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundClassGraphSchemaAction_NewNode"), sizeof(FSoundClassGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Hash() { return 2817936857U; }
	void USoundClassGraphSchema::StaticRegisterNativesUSoundClassGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_USoundClassGraphSchema_NoRegister()
	{
		return USoundClassGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USoundClassGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundClassGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClassGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundClassGraph/SoundClassGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/SoundClassGraph/SoundClassGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundClassGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundClassGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundClassGraphSchema_Statics::ClassParams = {
		&USoundClassGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundClassGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundClassGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundClassGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundClassGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundClassGraphSchema, 3697918555);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundClassGraphSchema>()
	{
		return USoundClassGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundClassGraphSchema(Z_Construct_UClass_USoundClassGraphSchema, &USoundClassGraphSchema::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundClassGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundClassGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

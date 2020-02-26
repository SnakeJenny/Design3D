// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/SoundCueGraph/SoundCueGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueGraphSchema() {}
// Cross Module References
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment();
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected();
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphSchema_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FSoundCueGraphSchemaAction_Paste::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste, Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundCueGraphSchemaAction_Paste"), sizeof(FSoundCueGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Hash());
	}
	return Singleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundCueGraphSchemaAction_Paste>()
{
	return FSoundCueGraphSchemaAction_Paste::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundCueGraphSchemaAction_Paste(FSoundCueGraphSchemaAction_Paste::StaticStruct, TEXT("/Script/AudioEditor"), TEXT("SoundCueGraphSchemaAction_Paste"), false, nullptr, nullptr);
static struct FScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_Paste
{
	FScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_Paste()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundCueGraphSchemaAction_Paste")),new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_Paste>);
	}
} ScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_Paste;
	struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_Paste>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SoundCueGraphSchemaAction_Paste",
		sizeof(FSoundCueGraphSchemaAction_Paste),
		alignof(FSoundCueGraphSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundCueGraphSchemaAction_Paste"), sizeof(FSoundCueGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Hash() { return 3549982301U; }
class UScriptStruct* FSoundCueGraphSchemaAction_NewComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment, Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundCueGraphSchemaAction_NewComment"), sizeof(FSoundCueGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Hash());
	}
	return Singleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundCueGraphSchemaAction_NewComment>()
{
	return FSoundCueGraphSchemaAction_NewComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment(FSoundCueGraphSchemaAction_NewComment::StaticStruct, TEXT("/Script/AudioEditor"), TEXT("SoundCueGraphSchemaAction_NewComment"), false, nullptr, nullptr);
static struct FScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_NewComment
{
	FScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_NewComment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundCueGraphSchemaAction_NewComment")),new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_NewComment>);
	}
} ScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_NewComment;
	struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_NewComment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SoundCueGraphSchemaAction_NewComment",
		sizeof(FSoundCueGraphSchemaAction_NewComment),
		alignof(FSoundCueGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundCueGraphSchemaAction_NewComment"), sizeof(FSoundCueGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Hash() { return 559636443U; }
class UScriptStruct* FSoundCueGraphSchemaAction_NewFromSelected::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected, Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundCueGraphSchemaAction_NewFromSelected"), sizeof(FSoundCueGraphSchemaAction_NewFromSelected), Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Hash());
	}
	return Singleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundCueGraphSchemaAction_NewFromSelected>()
{
	return FSoundCueGraphSchemaAction_NewFromSelected::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected(FSoundCueGraphSchemaAction_NewFromSelected::StaticStruct, TEXT("/Script/AudioEditor"), TEXT("SoundCueGraphSchemaAction_NewFromSelected"), false, nullptr, nullptr);
static struct FScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_NewFromSelected
{
	FScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_NewFromSelected()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundCueGraphSchemaAction_NewFromSelected")),new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_NewFromSelected>);
	}
} ScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_NewFromSelected;
	struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ToolTip", "Action to add nodes to the graph based on selected objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_NewFromSelected>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode,
		&NewStructOps,
		"SoundCueGraphSchemaAction_NewFromSelected",
		sizeof(FSoundCueGraphSchemaAction_NewFromSelected),
		alignof(FSoundCueGraphSchemaAction_NewFromSelected),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundCueGraphSchemaAction_NewFromSelected"), sizeof(FSoundCueGraphSchemaAction_NewFromSelected), Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Hash() { return 3069629798U; }
class UScriptStruct* FSoundCueGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundCueGraphSchemaAction_NewNode"), sizeof(FSoundCueGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundCueGraphSchemaAction_NewNode>()
{
	return FSoundCueGraphSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode(FSoundCueGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/AudioEditor"), TEXT("SoundCueGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_NewNode
{
	FScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundCueGraphSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_NewNode>);
	}
} ScriptStruct_AudioEditor_StaticRegisterNativesFSoundCueGraphSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundNodeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SoundNodeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewProp_SoundNodeClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ToolTip", "Class of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewProp_SoundNodeClass = { "SoundNodeClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundCueGraphSchemaAction_NewNode, SoundNodeClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewProp_SoundNodeClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewProp_SoundNodeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewProp_SoundNodeClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SoundCueGraphSchemaAction_NewNode",
		sizeof(FSoundCueGraphSchemaAction_NewNode),
		alignof(FSoundCueGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundCueGraphSchemaAction_NewNode"), sizeof(FSoundCueGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Hash() { return 3438780101U; }
	void USoundCueGraphSchema::StaticRegisterNativesUSoundCueGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_USoundCueGraphSchema_NoRegister()
	{
		return USoundCueGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundCueGraphSchema_Statics::ClassParams = {
		&USoundCueGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundCueGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundCueGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundCueGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundCueGraphSchema, 4097237616);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundCueGraphSchema>()
	{
		return USoundCueGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundCueGraphSchema(Z_Construct_UClass_USoundCueGraphSchema, &USoundCueGraphSchema::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundCueGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

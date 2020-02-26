// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialGraph/MaterialGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphSchema() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphSchema_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FMaterialGraphSchemaAction_Paste::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste, Z_Construct_UPackage__Script_UnrealEd(), TEXT("MaterialGraphSchemaAction_Paste"), sizeof(FMaterialGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMaterialGraphSchemaAction_Paste>()
{
	return FMaterialGraphSchemaAction_Paste::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialGraphSchemaAction_Paste(FMaterialGraphSchemaAction_Paste::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("MaterialGraphSchemaAction_Paste"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_Paste
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_Paste()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialGraphSchemaAction_Paste")),new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_Paste>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_Paste;
	struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_Paste>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MaterialGraphSchemaAction_Paste",
		sizeof(FMaterialGraphSchemaAction_Paste),
		alignof(FMaterialGraphSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialGraphSchemaAction_Paste"), sizeof(FMaterialGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Hash() { return 1639420009U; }
class UScriptStruct* FMaterialGraphSchemaAction_NewComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment, Z_Construct_UPackage__Script_UnrealEd(), TEXT("MaterialGraphSchemaAction_NewComment"), sizeof(FMaterialGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMaterialGraphSchemaAction_NewComment>()
{
	return FMaterialGraphSchemaAction_NewComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialGraphSchemaAction_NewComment(FMaterialGraphSchemaAction_NewComment::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("MaterialGraphSchemaAction_NewComment"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_NewComment
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_NewComment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialGraphSchemaAction_NewComment")),new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewComment>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_NewComment;
	struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Action to add a comment node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewComment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MaterialGraphSchemaAction_NewComment",
		sizeof(FMaterialGraphSchemaAction_NewComment),
		alignof(FMaterialGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialGraphSchemaAction_NewComment"), sizeof(FMaterialGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Hash() { return 3486422620U; }
class UScriptStruct* FMaterialGraphSchemaAction_NewFunctionCall::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall, Z_Construct_UPackage__Script_UnrealEd(), TEXT("MaterialGraphSchemaAction_NewFunctionCall"), sizeof(FMaterialGraphSchemaAction_NewFunctionCall), Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMaterialGraphSchemaAction_NewFunctionCall>()
{
	return FMaterialGraphSchemaAction_NewFunctionCall::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall(FMaterialGraphSchemaAction_NewFunctionCall::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("MaterialGraphSchemaAction_NewFunctionCall"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_NewFunctionCall
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_NewFunctionCall()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialGraphSchemaAction_NewFunctionCall")),new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewFunctionCall>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_NewFunctionCall;
	struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Action to add a Material Function call to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewFunctionCall>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewProp_FunctionPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Path to function that we want to call" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewProp_FunctionPath = { "FunctionPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialGraphSchemaAction_NewFunctionCall, FunctionPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewProp_FunctionPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewProp_FunctionPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewProp_FunctionPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MaterialGraphSchemaAction_NewFunctionCall",
		sizeof(FMaterialGraphSchemaAction_NewFunctionCall),
		alignof(FMaterialGraphSchemaAction_NewFunctionCall),
		Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialGraphSchemaAction_NewFunctionCall"), sizeof(FMaterialGraphSchemaAction_NewFunctionCall), Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Hash() { return 259730287U; }
class UScriptStruct* FMaterialGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("MaterialGraphSchemaAction_NewNode"), sizeof(FMaterialGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMaterialGraphSchemaAction_NewNode>()
{
	return FMaterialGraphSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialGraphSchemaAction_NewNode(FMaterialGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("MaterialGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_NewNode
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialGraphSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewNode>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFMaterialGraphSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MaterialExpressionClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Action to add an expression node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewProp_MaterialExpressionClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Class of expression we want to create" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewProp_MaterialExpressionClass = { "MaterialExpressionClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialGraphSchemaAction_NewNode, MaterialExpressionClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewProp_MaterialExpressionClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewProp_MaterialExpressionClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewProp_MaterialExpressionClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MaterialGraphSchemaAction_NewNode",
		sizeof(FMaterialGraphSchemaAction_NewNode),
		alignof(FMaterialGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialGraphSchemaAction_NewNode"), sizeof(FMaterialGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Hash() { return 1119094379U; }
	void UMaterialGraphSchema::StaticRegisterNativesUMaterialGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UMaterialGraphSchema_NoRegister()
	{
		return UMaterialGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphSchema_Statics::ClassParams = {
		&UMaterialGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialGraphSchema, 576503626);
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphSchema>()
	{
		return UMaterialGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialGraphSchema(Z_Construct_UClass_UMaterialGraphSchema, &UMaterialGraphSchema::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

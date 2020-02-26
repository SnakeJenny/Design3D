// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/EdGraphSchema_K2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_K2() {}
// Cross Module References
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FBlueprintCallableFunctionRedirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("BlueprintCallableFunctionRedirect"), sizeof(FBlueprintCallableFunctionRedirect), Get_Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FBlueprintCallableFunctionRedirect>()
{
	return FBlueprintCallableFunctionRedirect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintCallableFunctionRedirect(FBlueprintCallableFunctionRedirect::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("BlueprintCallableFunctionRedirect"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFBlueprintCallableFunctionRedirect
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFBlueprintCallableFunctionRedirect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintCallableFunctionRedirect")),new UScriptStruct::TCppStructOps<FBlueprintCallableFunctionRedirect>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFBlueprintCallableFunctionRedirect;
	struct Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlueprintParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OldFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
		{ "ToolTip", "Structure used to automatically convert blueprintcallable functions (that have blueprint parameter) calls (in bp graph)\ninto their never versions (with class param instead of blueprint)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCallableFunctionRedirect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassParamName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassParamName = { "ClassParamName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintCallableFunctionRedirect, ClassParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassParamName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_BlueprintParamName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_BlueprintParamName = { "BlueprintParamName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintCallableFunctionRedirect, BlueprintParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_BlueprintParamName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_BlueprintParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_NewFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_NewFunctionName = { "NewFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintCallableFunctionRedirect, NewFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_NewFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_NewFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_OldFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_OldFunctionName = { "OldFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintCallableFunctionRedirect, OldFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_OldFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_OldFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintCallableFunctionRedirect, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_BlueprintParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_NewFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_OldFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"BlueprintCallableFunctionRedirect",
		sizeof(FBlueprintCallableFunctionRedirect),
		alignof(FBlueprintCallableFunctionRedirect),
		Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintCallableFunctionRedirect"), sizeof(FBlueprintCallableFunctionRedirect), Get_Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Hash() { return 1288939177U; }
class UScriptStruct* FEdGraphSchemaAction_K2Struct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Struct"), sizeof(FEdGraphSchemaAction_K2Struct), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Struct>()
{
	return FEdGraphSchemaAction_K2Struct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2Struct(FEdGraphSchemaAction_K2Struct::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2Struct"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Struct
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Struct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2Struct")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Struct>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Struct;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
		{ "ToolTip", "Reference to an structure (only used in 'docked' palette)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Struct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2Struct",
		sizeof(FEdGraphSchemaAction_K2Struct),
		alignof(FEdGraphSchemaAction_K2Struct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2Struct"), sizeof(FEdGraphSchemaAction_K2Struct), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Hash() { return 2074509962U; }
	void UEdGraphSchema_K2::StaticRegisterNativesUEdGraphSchema_K2()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphSchema_K2_NoRegister()
	{
		return UEdGraphSchema_K2::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_K2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditoronlyBPFunctionRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditoronlyBPFunctionRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditoronlyBPFunctionRedirects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_K2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_K2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphSchema_K2.h" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects = { "EditoronlyBPFunctionRedirects", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphSchema_K2, EditoronlyBPFunctionRedirects), METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects_Inner = { "EditoronlyBPFunctionRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphSchema_K2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_K2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_K2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_K2_Statics::ClassParams = {
		&UEdGraphSchema_K2::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphSchema_K2_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_K2_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_K2_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_K2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_K2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraphSchema_K2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraphSchema_K2, 4112187346);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UEdGraphSchema_K2>()
	{
		return UEdGraphSchema_K2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphSchema_K2(Z_Construct_UClass_UEdGraphSchema_K2, &UEdGraphSchema_K2::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UEdGraphSchema_K2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_K2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

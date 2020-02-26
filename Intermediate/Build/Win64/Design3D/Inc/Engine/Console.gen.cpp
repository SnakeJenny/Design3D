// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Console.h"
#include "Engine/Classes/Engine/GameViewportClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsole() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UConsole();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
// End Cross Module References
class UScriptStruct* FAutoCompleteNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoCompleteNode, Z_Construct_UPackage__Script_Engine(), TEXT("AutoCompleteNode"), sizeof(FAutoCompleteNode), Get_Z_Construct_UScriptStruct_FAutoCompleteNode_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAutoCompleteNode>()
{
	return FAutoCompleteNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoCompleteNode(FAutoCompleteNode::StaticStruct, TEXT("/Script/Engine"), TEXT("AutoCompleteNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAutoCompleteNode
{
	FScriptStruct_Engine_StaticRegisterNativesFAutoCompleteNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutoCompleteNode")),new UScriptStruct::TCppStructOps<FAutoCompleteNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAutoCompleteNode;
	struct Z_Construct_UScriptStruct_FAutoCompleteNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteListIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoCompleteListIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AutoCompleteListIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexChar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Node for storing an auto-complete tree based on each char in the command." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoCompleteNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Indices into AutoCompleteList for commands that match to this level" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices = { "AutoCompleteListIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoCompleteNode, AutoCompleteListIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_Inner = { "AutoCompleteListIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Char for node in the tree" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar = { "IndexChar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoCompleteNode, IndexChar), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AutoCompleteNode",
		sizeof(FAutoCompleteNode),
		alignof(FAutoCompleteNode),
		Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoCompleteNode"), sizeof(FAutoCompleteNode), Get_Z_Construct_UScriptStruct_FAutoCompleteNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteNode_Hash() { return 3344459977U; }
	void UConsole::StaticRegisterNativesUConsole()
	{
	}
	UClass* Z_Construct_UClass_UConsole_NoRegister()
	{
		return UConsole::StaticClass();
	}
	struct Z_Construct_UClass_UConsole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistoryBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HistoryBuffer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HistoryBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_White_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture_White;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_Black_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture_Black;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleTargetPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsoleTargetPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsole_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Console.h" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "A basic command line console that accepts most commands." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Holds the history buffer, order is old to new" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer = { "HistoryBuffer", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsole, HistoryBuffer), METADATA_PARAMS(Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_Inner = { "HistoryBuffer", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White = { "DefaultTexture_White", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsole, DefaultTexture_White), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black = { "DefaultTexture_Black", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsole, DefaultTexture_Black), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "The player which the next console command should be executed in the context of.  If nullptr, execute in the viewport." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer = { "ConsoleTargetPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsole, ConsoleTargetPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConsole_Statics::ClassParams = {
		&UConsole::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConsole_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UConsole_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConsole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConsole, 3814654934);
	template<> ENGINE_API UClass* StaticClass<UConsole>()
	{
		return UConsole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsole(Z_Construct_UClass_UConsole, &UConsole::StaticClass, TEXT("/Script/Engine"), TEXT("UConsole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/EdGraphSchema_K2_Actions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_K2_Actions() {}
// Cross Module References
	BLUEPRINTGRAPH_API UEnum* Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_NoRegister();
// End Cross Module References
	static UEnum* EEdGraphSchemaAction_K2Graph_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EEdGraphSchemaAction_K2Graph"));
		}
		return Singleton;
	}
	template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<EEdGraphSchemaAction_K2Graph::Type>()
	{
		return EEdGraphSchemaAction_K2Graph_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEdGraphSchemaAction_K2Graph(EEdGraphSchemaAction_K2Graph_StaticEnum, TEXT("/Script/BlueprintGraph"), TEXT("EEdGraphSchemaAction_K2Graph"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Hash() { return 1375202764U; }
	UEnum* Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEdGraphSchemaAction_K2Graph"), 0, Get_Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEdGraphSchemaAction_K2Graph::Graph", (int64)EEdGraphSchemaAction_K2Graph::Graph },
				{ "EEdGraphSchemaAction_K2Graph::Subgraph", (int64)EEdGraphSchemaAction_K2Graph::Subgraph },
				{ "EEdGraphSchemaAction_K2Graph::Function", (int64)EEdGraphSchemaAction_K2Graph::Function },
				{ "EEdGraphSchemaAction_K2Graph::Interface", (int64)EEdGraphSchemaAction_K2Graph::Interface },
				{ "EEdGraphSchemaAction_K2Graph::Macro", (int64)EEdGraphSchemaAction_K2Graph::Macro },
				{ "EEdGraphSchemaAction_K2Graph::MAX", (int64)EEdGraphSchemaAction_K2Graph::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
				{ "ToolTip", "The graph type that the schema is" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintGraph,
				nullptr,
				"EEdGraphSchemaAction_K2Graph",
				"EEdGraphSchemaAction_K2Graph::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEdGraphSchemaAction_K2Delegate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Delegate"), sizeof(FEdGraphSchemaAction_K2Delegate), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Delegate>()
{
	return FEdGraphSchemaAction_K2Delegate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2Delegate(FEdGraphSchemaAction_K2Delegate::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2Delegate"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Delegate
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Delegate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2Delegate")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Delegate>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Delegate;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to a delegate" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Delegate>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase,
		&NewStructOps,
		"EdGraphSchemaAction_K2Delegate",
		sizeof(FEdGraphSchemaAction_K2Delegate),
		alignof(FEdGraphSchemaAction_K2Delegate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2Delegate"), sizeof(FEdGraphSchemaAction_K2Delegate), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Hash() { return 779727149U; }
class UScriptStruct* FEdGraphSchemaAction_K2InputAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2InputAction"), sizeof(FEdGraphSchemaAction_K2InputAction), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2InputAction>()
{
	return FEdGraphSchemaAction_K2InputAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2InputAction(FEdGraphSchemaAction_K2InputAction::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2InputAction"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2InputAction
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2InputAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2InputAction")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2InputAction>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2InputAction;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "A reference to a specific event (living inside a Blueprint graph)... intended\nto be used the 'docked' palette only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2InputAction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2InputAction",
		sizeof(FEdGraphSchemaAction_K2InputAction),
		alignof(FEdGraphSchemaAction_K2InputAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2InputAction"), sizeof(FEdGraphSchemaAction_K2InputAction), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Hash() { return 1137500200U; }
class UScriptStruct* FEdGraphSchemaAction_K2Event::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Event"), sizeof(FEdGraphSchemaAction_K2Event), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Event>()
{
	return FEdGraphSchemaAction_K2Event::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2Event(FEdGraphSchemaAction_K2Event::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2Event"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Event
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Event()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2Event")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Event>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Event;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "A reference to a specific event (living inside a Blueprint graph)... intended\nto be used the 'docked' palette only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Event>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2Event",
		sizeof(FEdGraphSchemaAction_K2Event),
		alignof(FEdGraphSchemaAction_K2Event),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2Event"), sizeof(FEdGraphSchemaAction_K2Event), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Hash() { return 1641943932U; }
class UScriptStruct* FEdGraphSchemaAction_K2Graph::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Graph"), sizeof(FEdGraphSchemaAction_K2Graph), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Graph>()
{
	return FEdGraphSchemaAction_K2Graph::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2Graph(FEdGraphSchemaAction_K2Graph::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2Graph"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Graph
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Graph()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2Graph")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Graph>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Graph;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to a function, macro, event graph, or timeline (only used in 'docked' palette)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Graph>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2Graph",
		sizeof(FEdGraphSchemaAction_K2Graph),
		alignof(FEdGraphSchemaAction_K2Graph),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2Graph"), sizeof(FEdGraphSchemaAction_K2Graph), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Hash() { return 3325179741U; }
class UScriptStruct* FEdGraphSchemaAction_K2LocalVar::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2LocalVar"), sizeof(FEdGraphSchemaAction_K2LocalVar), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2LocalVar>()
{
	return FEdGraphSchemaAction_K2LocalVar::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar(FEdGraphSchemaAction_K2LocalVar::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2LocalVar"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2LocalVar
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2LocalVar()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2LocalVar")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2LocalVar>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2LocalVar;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to a local variable (only used in 'docked' palette)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2LocalVar>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase,
		&NewStructOps,
		"EdGraphSchemaAction_K2LocalVar",
		sizeof(FEdGraphSchemaAction_K2LocalVar),
		alignof(FEdGraphSchemaAction_K2LocalVar),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2LocalVar"), sizeof(FEdGraphSchemaAction_K2LocalVar), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Hash() { return 563950466U; }
class UScriptStruct* FEdGraphSchemaAction_K2Var::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Var"), sizeof(FEdGraphSchemaAction_K2Var), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Var>()
{
	return FEdGraphSchemaAction_K2Var::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2Var(FEdGraphSchemaAction_K2Var::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2Var"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Var
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Var()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2Var")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Var>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Var;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to a variable (only used in 'docked' palette)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Var>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase,
		&NewStructOps,
		"EdGraphSchemaAction_K2Var",
		sizeof(FEdGraphSchemaAction_K2Var),
		alignof(FEdGraphSchemaAction_K2Var),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2Var"), sizeof(FEdGraphSchemaAction_K2Var), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Hash() { return 1320663619U; }
class UScriptStruct* FEdGraphSchemaAction_BlueprintVariableBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_BlueprintVariableBase"), sizeof(FEdGraphSchemaAction_BlueprintVariableBase), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_BlueprintVariableBase>()
{
	return FEdGraphSchemaAction_BlueprintVariableBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase(FEdGraphSchemaAction_BlueprintVariableBase::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_BlueprintVariableBase"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_BlueprintVariableBase
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_BlueprintVariableBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_BlueprintVariableBase")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_BlueprintVariableBase>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_BlueprintVariableBase;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to a variable (only used in 'My Blueprints' but used for member variables, local variables, delegates, etc...)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_BlueprintVariableBase>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_BlueprintVariableBase",
		sizeof(FEdGraphSchemaAction_BlueprintVariableBase),
		alignof(FEdGraphSchemaAction_BlueprintVariableBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_BlueprintVariableBase"), sizeof(FEdGraphSchemaAction_BlueprintVariableBase), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Hash() { return 3796958971U; }
class UScriptStruct* FEdGraphSchemaAction_K2Enum::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Enum"), sizeof(FEdGraphSchemaAction_K2Enum), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Enum>()
{
	return FEdGraphSchemaAction_K2Enum::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2Enum(FEdGraphSchemaAction_K2Enum::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2Enum"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Enum
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Enum()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2Enum")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Enum>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2Enum;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to an enumeration (only used in 'docked' palette)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Enum>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2Enum",
		sizeof(FEdGraphSchemaAction_K2Enum),
		alignof(FEdGraphSchemaAction_K2Enum),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2Enum"), sizeof(FEdGraphSchemaAction_K2Enum), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Hash() { return 569885677U; }
class UScriptStruct* FEdGraphSchemaAction_K2PasteHere::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2PasteHere"), sizeof(FEdGraphSchemaAction_K2PasteHere), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2PasteHere>()
{
	return FEdGraphSchemaAction_K2PasteHere::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere(FEdGraphSchemaAction_K2PasteHere::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2PasteHere"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2PasteHere
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2PasteHere()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2PasteHere")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2PasteHere>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2PasteHere;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to paste at this location on graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2PasteHere>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2PasteHere",
		sizeof(FEdGraphSchemaAction_K2PasteHere),
		alignof(FEdGraphSchemaAction_K2PasteHere),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2PasteHere"), sizeof(FEdGraphSchemaAction_K2PasteHere), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Hash() { return 4126291928U; }
class UScriptStruct* FEdGraphSchemaAction_K2TargetNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2TargetNode"), sizeof(FEdGraphSchemaAction_K2TargetNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2TargetNode>()
{
	return FEdGraphSchemaAction_K2TargetNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode(FEdGraphSchemaAction_K2TargetNode::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2TargetNode"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2TargetNode
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2TargetNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2TargetNode")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2TargetNode>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2TargetNode;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to target a specific node on graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2TargetNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2TargetNode",
		sizeof(FEdGraphSchemaAction_K2TargetNode),
		alignof(FEdGraphSchemaAction_K2TargetNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2TargetNode"), sizeof(FEdGraphSchemaAction_K2TargetNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Hash() { return 2158850990U; }
class UScriptStruct* FEdGraphSchemaAction_K2AddComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AddComment"), sizeof(FEdGraphSchemaAction_K2AddComment), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AddComment>()
{
	return FEdGraphSchemaAction_K2AddComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2AddComment(FEdGraphSchemaAction_K2AddComment::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2AddComment"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddComment
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddComment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2AddComment")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddComment>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddComment;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a 'comment' node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddComment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2AddComment",
		sizeof(FEdGraphSchemaAction_K2AddComment),
		alignof(FEdGraphSchemaAction_K2AddComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2AddComment"), sizeof(FEdGraphSchemaAction_K2AddComment), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Hash() { return 1972042541U; }
class UScriptStruct* FEdGraphSchemaAction_K2AddCallOnActor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AddCallOnActor"), sizeof(FEdGraphSchemaAction_K2AddCallOnActor), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AddCallOnActor>()
{
	return FEdGraphSchemaAction_K2AddCallOnActor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor(FEdGraphSchemaAction_K2AddCallOnActor::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2AddCallOnActor"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddCallOnActor
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddCallOnActor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2AddCallOnActor")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddCallOnActor>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddCallOnActor;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a 'call function on actor(s)' set of nodes to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddCallOnActor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Pointer to actors in level we want to call function on" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors = { "LevelActors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphSchemaAction_K2AddCallOnActor, LevelActors), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors_Inner = { "LevelActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2AddCallOnActor",
		sizeof(FEdGraphSchemaAction_K2AddCallOnActor),
		alignof(FEdGraphSchemaAction_K2AddCallOnActor),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2AddCallOnActor"), sizeof(FEdGraphSchemaAction_K2AddCallOnActor), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Hash() { return 3641618008U; }
class UScriptStruct* FEdGraphSchemaAction_K2AddCustomEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AddCustomEvent"), sizeof(FEdGraphSchemaAction_K2AddCustomEvent), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AddCustomEvent>()
{
	return FEdGraphSchemaAction_K2AddCustomEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent(FEdGraphSchemaAction_K2AddCustomEvent::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2AddCustomEvent"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddCustomEvent
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddCustomEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2AddCustomEvent")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddCustomEvent>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddCustomEvent;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a 'custom event' node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddCustomEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2AddCustomEvent",
		sizeof(FEdGraphSchemaAction_K2AddCustomEvent),
		alignof(FEdGraphSchemaAction_K2AddCustomEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2AddCustomEvent"), sizeof(FEdGraphSchemaAction_K2AddCustomEvent), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Hash() { return 2852620967U; }
class UScriptStruct* FEdGraphSchemaAction_K2AddEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AddEvent"), sizeof(FEdGraphSchemaAction_K2AddEvent), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AddEvent>()
{
	return FEdGraphSchemaAction_K2AddEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent(FEdGraphSchemaAction_K2AddEvent::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2AddEvent"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddEvent
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2AddEvent")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddEvent>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddEvent;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a 'event' node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2AddEvent",
		sizeof(FEdGraphSchemaAction_K2AddEvent),
		alignof(FEdGraphSchemaAction_K2AddEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2AddEvent"), sizeof(FEdGraphSchemaAction_K2AddEvent), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Hash() { return 3605885005U; }
class UScriptStruct* FEdGraphSchemaAction_K2AddComponent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AddComponent"), sizeof(FEdGraphSchemaAction_K2AddComponent), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AddComponent>()
{
	return FEdGraphSchemaAction_K2AddComponent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent(FEdGraphSchemaAction_K2AddComponent::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2AddComponent"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddComponent
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddComponent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2AddComponent")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddComponent>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AddComponent;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add an 'add component' node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddComponent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Option asset to assign to newly created component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentAsset = { "ComponentAsset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphSchemaAction_K2AddComponent, ComponentAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Class of component we want to add" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphSchemaAction_K2AddComponent, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2AddComponent",
		sizeof(FEdGraphSchemaAction_K2AddComponent),
		alignof(FEdGraphSchemaAction_K2AddComponent),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2AddComponent"), sizeof(FEdGraphSchemaAction_K2AddComponent), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Hash() { return 3645625083U; }
class UScriptStruct* FEdGraphSchemaAction_EventFromFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_EventFromFunction"), sizeof(FEdGraphSchemaAction_EventFromFunction), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_EventFromFunction>()
{
	return FEdGraphSchemaAction_EventFromFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction(FEdGraphSchemaAction_EventFromFunction::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_EventFromFunction"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_EventFromFunction
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_EventFromFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_EventFromFunction")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_EventFromFunction>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_EventFromFunction;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignatureFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SignatureFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_EventFromFunction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewProp_SignatureFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewProp_SignatureFunction = { "SignatureFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphSchemaAction_EventFromFunction, SignatureFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewProp_SignatureFunction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewProp_SignatureFunction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewProp_SignatureFunction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_EventFromFunction",
		sizeof(FEdGraphSchemaAction_EventFromFunction),
		alignof(FEdGraphSchemaAction_EventFromFunction),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_EventFromFunction"), sizeof(FEdGraphSchemaAction_EventFromFunction), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Hash() { return 3338391105U; }
class UScriptStruct* FEdGraphSchemaAction_K2AssignDelegate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AssignDelegate"), sizeof(FEdGraphSchemaAction_K2AssignDelegate), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AssignDelegate>()
{
	return FEdGraphSchemaAction_K2AssignDelegate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate(FEdGraphSchemaAction_K2AssignDelegate::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2AssignDelegate"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AssignDelegate
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AssignDelegate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2AssignDelegate")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AssignDelegate>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2AssignDelegate;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AssignDelegate>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2AssignDelegate",
		sizeof(FEdGraphSchemaAction_K2AssignDelegate),
		alignof(FEdGraphSchemaAction_K2AssignDelegate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2AssignDelegate"), sizeof(FEdGraphSchemaAction_K2AssignDelegate), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Hash() { return 3576080036U; }
class UScriptStruct* FEdGraphSchemaAction_K2ViewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2ViewNode"), sizeof(FEdGraphSchemaAction_K2ViewNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2ViewNode>()
{
	return FEdGraphSchemaAction_K2ViewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode(FEdGraphSchemaAction_K2ViewNode::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2ViewNode"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2ViewNode
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2ViewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2ViewNode")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2ViewNode>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2ViewNode;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodePtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodePtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to view a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2ViewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewProp_NodePtr_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "node we want to view" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewProp_NodePtr = { "NodePtr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphSchemaAction_K2ViewNode, NodePtr), Z_Construct_UClass_UK2Node_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewProp_NodePtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewProp_NodePtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewProp_NodePtr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2ViewNode",
		sizeof(FEdGraphSchemaAction_K2ViewNode),
		alignof(FEdGraphSchemaAction_K2ViewNode),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2ViewNode"), sizeof(FEdGraphSchemaAction_K2ViewNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Hash() { return 4065330889U; }
class UScriptStruct* FEdGraphSchemaAction_K2NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2NewNode"), sizeof(FEdGraphSchemaAction_K2NewNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2NewNode>()
{
	return FEdGraphSchemaAction_K2NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_K2NewNode(FEdGraphSchemaAction_K2NewNode::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("EdGraphSchemaAction_K2NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2NewNode
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_K2NewNode")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2NewNode>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFEdGraphSchemaAction_K2NewNode;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGotoNode_MetaData[];
#endif
		static void NewProp_bGotoNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGotoNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode_SetBit(void* Obj)
	{
		((FEdGraphSchemaAction_K2NewNode*)Obj)->bGotoNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode = { "bGotoNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEdGraphSchemaAction_K2NewNode), &Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphSchemaAction_K2NewNode, NodeTemplate), Z_Construct_UClass_UK2Node_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_NodeTemplate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_NodeTemplate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2NewNode",
		sizeof(FEdGraphSchemaAction_K2NewNode),
		alignof(FEdGraphSchemaAction_K2NewNode),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_K2NewNode"), sizeof(FEdGraphSchemaAction_K2NewNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Hash() { return 943248120U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

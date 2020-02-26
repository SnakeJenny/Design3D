// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_Tunnel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Tunnel() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Tunnel_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Tunnel();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata();
// End Cross Module References
	void UK2Node_Tunnel::StaticRegisterNativesUK2Node_Tunnel()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_Tunnel_NoRegister()
	{
		return UK2Node_Tunnel::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Tunnel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHaveOutputs_MetaData[];
#endif
		static void NewProp_bCanHaveOutputs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHaveOutputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHaveInputs_MetaData[];
#endif
		static void NewProp_bCanHaveInputs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHaveInputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputSinkNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputSinkNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputSourceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputSourceNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Tunnel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_EditablePinBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Tunnel.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_MetaData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
		{ "ToolTip", "The metadata for the function/subgraph associated with this tunnel node; it's only editable and used\non the tunnel entry node inside the subgraph or macro.  This structure is ignored on any other tunnel nodes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Tunnel, MetaData), Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_MetaData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
		{ "ToolTip", "Whether this node is allowed to have outputs" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs_SetBit(void* Obj)
	{
		((UK2Node_Tunnel*)Obj)->bCanHaveOutputs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs = { "bCanHaveOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Tunnel), &Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
		{ "ToolTip", "Whether this node is allowed to have inputs" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs_SetBit(void* Obj)
	{
		((UK2Node_Tunnel*)Obj)->bCanHaveInputs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs = { "bCanHaveInputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Tunnel), &Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_InputSinkNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
		{ "ToolTip", "The input pins of this tunnel go to the output pins of InputSinkNode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_InputSinkNode = { "InputSinkNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Tunnel, InputSinkNode), Z_Construct_UClass_UK2Node_Tunnel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_InputSinkNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_InputSinkNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_OutputSourceNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
		{ "ToolTip", "The output pins of this tunnel node came from the input pins of OutputSourceNode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_OutputSourceNode = { "OutputSourceNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Tunnel, OutputSourceNode), Z_Construct_UClass_UK2Node_Tunnel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_OutputSourceNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_OutputSourceNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Tunnel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_InputSinkNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_OutputSourceNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Tunnel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Tunnel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Tunnel_Statics::ClassParams = {
		&UK2Node_Tunnel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Tunnel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Tunnel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_Tunnel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_Tunnel, 1424311933);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Tunnel>()
	{
		return UK2Node_Tunnel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_Tunnel(Z_Construct_UClass_UK2Node_Tunnel, &UK2Node_Tunnel::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_Tunnel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Tunnel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
// End Cross Module References
	void USoundNode::StaticRegisterNativesUSoundNode()
	{
	}
	UClass* Z_Construct_UClass_USoundNode_NoRegister()
	{
		return USoundNode::StaticClass();
	}
	struct Z_Construct_UClass_USoundNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildNodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundNode.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNode.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNode_Statics::NewProp_GraphNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNode.h" },
		{ "ToolTip", "Node's Graph representation, used to get position." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNode_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNode, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNode_Statics::NewProp_GraphNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNode_Statics::NewProp_GraphNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNode_Statics::NewProp_ChildNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNode_Statics::NewProp_ChildNodes = { "ChildNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNode, ChildNodes), METADATA_PARAMS(Z_Construct_UClass_USoundNode_Statics::NewProp_ChildNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNode_Statics::NewProp_ChildNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNode_Statics::NewProp_ChildNodes_Inner = { "ChildNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNode_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNode_Statics::NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNode_Statics::NewProp_ChildNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNode_Statics::NewProp_ChildNodes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNode_Statics::ClassParams = {
		&USoundNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNode_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNode, 3541008976);
	template<> ENGINE_API UClass* StaticClass<USoundNode>()
	{
		return USoundNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNode(Z_Construct_UClass_USoundNode, &USoundNode::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNode);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNode)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

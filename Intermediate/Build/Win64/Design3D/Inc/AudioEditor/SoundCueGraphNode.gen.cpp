// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/SoundCueGraph/SoundCueGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueGraphNode() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode_NoRegister();
// End Cross Module References
	void USoundCueGraphNode::StaticRegisterNativesUSoundCueGraphNode()
	{
	}
	UClass* Z_Construct_UClass_USoundCueGraphNode_NoRegister()
	{
		return USoundCueGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundCueGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundCueGraph/SoundCueGraphNode.h" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGraphNode_Statics::NewProp_SoundNode_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphNode.h" },
		{ "ToolTip", "The SoundNode this represents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundCueGraphNode_Statics::NewProp_SoundNode = { "SoundNode", nullptr, (EPropertyFlags)0x00120000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundCueGraphNode, SoundNode), Z_Construct_UClass_USoundNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundCueGraphNode_Statics::NewProp_SoundNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCueGraphNode_Statics::NewProp_SoundNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCueGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueGraphNode_Statics::NewProp_SoundNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundCueGraphNode_Statics::ClassParams = {
		&USoundCueGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundCueGraphNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundCueGraphNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueGraphNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundCueGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundCueGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundCueGraphNode, 1477880379);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundCueGraphNode>()
	{
		return USoundCueGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundCueGraphNode(Z_Construct_UClass_USoundCueGraphNode, &USoundCueGraphNode::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundCueGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

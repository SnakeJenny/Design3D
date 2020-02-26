// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/SoundClassGraph/SoundClassGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundClassGraphNode() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassGraphNode_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	void USoundClassGraphNode::StaticRegisterNativesUSoundClassGraphNode()
	{
	}
	UClass* Z_Construct_UClass_USoundClassGraphNode_NoRegister()
	{
		return USoundClassGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_USoundClassGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundClassGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClassGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundClassGraph/SoundClassGraphNode.h" },
		{ "ModuleRelativePath", "Classes/SoundClassGraph/SoundClassGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClassGraphNode_Statics::NewProp_SoundClass_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SoundClassGraph/SoundClassGraphNode.h" },
		{ "ToolTip", "The SoundNode this represents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundClassGraphNode_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x00120000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundClassGraphNode, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundClassGraphNode_Statics::NewProp_SoundClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundClassGraphNode_Statics::NewProp_SoundClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundClassGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClassGraphNode_Statics::NewProp_SoundClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundClassGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundClassGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundClassGraphNode_Statics::ClassParams = {
		&USoundClassGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundClassGraphNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundClassGraphNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundClassGraphNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundClassGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundClassGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundClassGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundClassGraphNode, 2464487795);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundClassGraphNode>()
	{
		return USoundClassGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundClassGraphNode(Z_Construct_UClass_USoundClassGraphNode, &USoundClassGraphNode::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundClassGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundClassGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

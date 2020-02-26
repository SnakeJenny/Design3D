// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/SoundSubmixGraph/SoundSubmixGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixGraphNode() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraphNode_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
// End Cross Module References
	void USoundSubmixGraphNode::StaticRegisterNativesUSoundSubmixGraphNode()
	{
	}
	UClass* Z_Construct_UClass_USoundSubmixGraphNode_NoRegister()
	{
		return USoundSubmixGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundSubmixGraph/SoundSubmixGraphNode.h" },
		{ "ModuleRelativePath", "Classes/SoundSubmixGraph/SoundSubmixGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SoundSubmix_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SoundSubmixGraph/SoundSubmixGraphNode.h" },
		{ "ToolTip", "The SoundSubmix this represents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x00120000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmixGraphNode, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SoundSubmix_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SoundSubmix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmixGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SoundSubmix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixGraphNode_Statics::ClassParams = {
		&USoundSubmixGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSubmixGraphNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundSubmixGraphNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixGraphNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundSubmixGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSubmixGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSubmixGraphNode, 1860573490);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSubmixGraphNode>()
	{
		return USoundSubmixGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSubmixGraphNode(Z_Construct_UClass_USoundSubmixGraphNode, &USoundSubmixGraphNode::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundSubmixGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

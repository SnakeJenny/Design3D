// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/SoundCueGraph/SoundCueGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueGraph() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraph_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundCueGraph::StaticRegisterNativesUSoundCueGraph()
	{
	}
	UClass* Z_Construct_UClass_USoundCueGraph_NoRegister()
	{
		return USoundCueGraph::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundCueGraph/SoundCueGraph.h" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundCueGraph_Statics::ClassParams = {
		&USoundCueGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundCueGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundCueGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundCueGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundCueGraph, 3262785875);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundCueGraph>()
	{
		return USoundCueGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundCueGraph(Z_Construct_UClass_USoundCueGraph, &USoundCueGraph::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundCueGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

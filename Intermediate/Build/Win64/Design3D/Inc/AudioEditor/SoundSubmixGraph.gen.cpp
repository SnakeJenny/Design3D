// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/SoundSubmixGraph/SoundSubmixGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixGraph() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraph_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundSubmixGraph::StaticRegisterNativesUSoundSubmixGraph()
	{
	}
	UClass* Z_Construct_UClass_USoundSubmixGraph_NoRegister()
	{
		return USoundSubmixGraph::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundSubmixGraph/SoundSubmixGraph.h" },
		{ "ModuleRelativePath", "Classes/SoundSubmixGraph/SoundSubmixGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixGraph_Statics::ClassParams = {
		&USoundSubmixGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundSubmixGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSubmixGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSubmixGraph, 3385445649);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSubmixGraph>()
	{
		return USoundSubmixGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSubmixGraph(Z_Construct_UClass_USoundSubmixGraph, &USoundSubmixGraph::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundSubmixGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

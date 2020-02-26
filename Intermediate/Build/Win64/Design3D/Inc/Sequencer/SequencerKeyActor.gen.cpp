// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/Private/SequencerKeyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerKeyActor() {}
// Cross Module References
	SEQUENCER_API UClass* Z_Construct_UClass_ASequencerKeyActor_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_ASequencerKeyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASequencerKeyActor::StaticRegisterNativesASequencerKeyActor()
	{
	}
	UClass* Z_Construct_UClass_ASequencerKeyActor_NoRegister()
	{
		return ASequencerKeyActor::StaticClass();
	}
	struct Z_Construct_UClass_ASequencerKeyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KeyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASequencerKeyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerKeyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequencerKeyActor.h" },
		{ "ModuleRelativePath", "Private/SequencerKeyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/SequencerKeyActor.h" },
		{ "ToolTip", "The time this key is associated with in Sequencer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyTime = { "KeyTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASequencerKeyActor, KeyTime), METADATA_PARAMS(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_TrackSection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SequencerKeyActor.h" },
		{ "ToolTip", "The track section this key resides on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_TrackSection = { "TrackSection", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASequencerKeyActor, TrackSection), Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_TrackSection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_TrackSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_AssociatedActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/SequencerKeyActor.h" },
		{ "ToolTip", "The actor whose transform was used to build this key" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_AssociatedActor = { "AssociatedActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASequencerKeyActor, AssociatedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_AssociatedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_AssociatedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SequencerKeyActor.h" },
		{ "ToolTip", "The key mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyMeshComponent = { "KeyMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASequencerKeyActor, KeyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASequencerKeyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_TrackSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_AssociatedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASequencerKeyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASequencerKeyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASequencerKeyActor_Statics::ClassParams = {
		&ASequencerKeyActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASequencerKeyActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASequencerKeyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASequencerKeyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASequencerKeyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASequencerKeyActor, 4162295924);
	template<> SEQUENCER_API UClass* StaticClass<ASequencerKeyActor>()
	{
		return ASequencerKeyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASequencerKeyActor(Z_Construct_UClass_ASequencerKeyActor, &ASequencerKeyActor::StaticClass, TEXT("/Script/Sequencer"), TEXT("ASequencerKeyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASequencerKeyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

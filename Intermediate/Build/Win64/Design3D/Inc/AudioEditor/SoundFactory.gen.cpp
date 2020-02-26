// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/SoundFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundFactory::StaticRegisterNativesUSoundFactory()
	{
	}
	UClass* Z_Construct_UClass_USoundFactory_NoRegister()
	{
		return USoundFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuePackageSuffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CuePackageSuffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CueVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeModulatorNode_MetaData[];
#endif
		static void NewProp_bIncludeModulatorNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeModulatorNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeLoopingNode_MetaData[];
#endif
		static void NewProp_bIncludeLoopingNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeLoopingNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeAttenuationNode_MetaData[];
#endif
		static void NewProp_bIncludeAttenuationNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAttenuationNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCreateCue_MetaData[];
#endif
		static void NewProp_bAutoCreateCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCreateCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_CuePackageSuffix_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "If not empty, generated SoundCues will be placed in PackageCuePackageSuffix, but only if bAutoCreateCue is true" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_CuePackageSuffix = { "CuePackageSuffix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundFactory, CuePackageSuffix), METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_CuePackageSuffix_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_CuePackageSuffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_CueVolume_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "The volume of the created sound cue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_CueVolume = { "CueVolume", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundFactory, CueVolume), METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_CueVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_CueVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "If enabled, the created sound cue will include a modulator node" },
	};
#endif
	void Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode_SetBit(void* Obj)
	{
		((USoundFactory*)Obj)->bIncludeModulatorNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode = { "bIncludeModulatorNode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundFactory), &Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "If enabled, the created sound cue will include a looping node" },
	};
#endif
	void Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode_SetBit(void* Obj)
	{
		((USoundFactory*)Obj)->bIncludeLoopingNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode = { "bIncludeLoopingNode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundFactory), &Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "If enabled, the created sound cue will include a attenuation node" },
	};
#endif
	void Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode_SetBit(void* Obj)
	{
		((USoundFactory*)Obj)->bIncludeAttenuationNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode = { "bIncludeAttenuationNode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundFactory), &Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "If enabled, a sound cue will automatically be created for the sound" },
	};
#endif
	void Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue_SetBit(void* Obj)
	{
		((USoundFactory*)Obj)->bAutoCreateCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue = { "bAutoCreateCue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundFactory), &Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_CuePackageSuffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_CueVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundFactory_Statics::ClassParams = {
		&USoundFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundFactory, 3351043718);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundFactory>()
	{
		return USoundFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundFactory(Z_Construct_UClass_USoundFactory, &USoundFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

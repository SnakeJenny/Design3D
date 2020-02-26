// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimSequencerInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequencerInstance() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimSequencerInstance();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimCustomInstance();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	void UAnimSequencerInstance::StaticRegisterNativesUAnimSequencerInstance()
	{
	}
	UClass* Z_Construct_UClass_UAnimSequencerInstance_NoRegister()
	{
		return UAnimSequencerInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequencerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequencerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCustomInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequencerInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimSequencerInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AnimSequencerInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequencerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequencerInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequencerInstance_Statics::ClassParams = {
		&UAnimSequencerInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequencerInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimSequencerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequencerInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSequencerInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSequencerInstance, 3914571357);
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimSequencerInstance>()
	{
		return UAnimSequencerInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSequencerInstance(Z_Construct_UClass_UAnimSequencerInstance, &UAnimSequencerInstance::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UAnimSequencerInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequencerInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

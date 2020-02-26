// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Persona/Public/AnimationEditorPreviewActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationEditorPreviewActor() {}
// Cross Module References
	PERSONA_API UClass* Z_Construct_UClass_AAnimationEditorPreviewActor_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_AAnimationEditorPreviewActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void AAnimationEditorPreviewActor::StaticRegisterNativesAAnimationEditorPreviewActor()
	{
	}
	UClass* Z_Construct_UClass_AAnimationEditorPreviewActor_NoRegister()
	{
		return AAnimationEditorPreviewActor::StaticClass();
	}
	struct Z_Construct_UClass_AAnimationEditorPreviewActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationEditorPreviewActor.h" },
		{ "ModuleRelativePath", "Public/AnimationEditorPreviewActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimationEditorPreviewActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::ClassParams = {
		&AAnimationEditorPreviewActor::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnimationEditorPreviewActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnimationEditorPreviewActor, 3863790649);
	template<> PERSONA_API UClass* StaticClass<AAnimationEditorPreviewActor>()
	{
		return AAnimationEditorPreviewActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnimationEditorPreviewActor(Z_Construct_UClass_AAnimationEditorPreviewActor, &AAnimationEditorPreviewActor::StaticClass, TEXT("/Script/Persona"), TEXT("AAnimationEditorPreviewActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimationEditorPreviewActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

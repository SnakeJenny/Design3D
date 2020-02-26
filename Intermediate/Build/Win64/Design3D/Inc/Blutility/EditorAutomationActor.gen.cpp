// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blutility/Classes/EditorAutomationActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAutomationActor() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_AEditorAutomationActor_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_AEditorAutomationActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	void AEditorAutomationActor::StaticRegisterNativesAEditorAutomationActor()
	{
	}
	UClass* Z_Construct_UClass_AEditorAutomationActor_NoRegister()
	{
		return AEditorAutomationActor::StaticClass();
	}
	struct Z_Construct_UClass_AEditorAutomationActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEditorAutomationActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEditorAutomationActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditorAutomationActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EditorAutomationActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEditorAutomationActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEditorAutomationActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEditorAutomationActor_Statics::ClassParams = {
		&AEditorAutomationActor::StaticClass,
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
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AEditorAutomationActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEditorAutomationActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEditorAutomationActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEditorAutomationActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEditorAutomationActor, 1366294699);
	template<> BLUTILITY_API UClass* StaticClass<AEditorAutomationActor>()
	{
		return AEditorAutomationActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEditorAutomationActor(Z_Construct_UClass_AEditorAutomationActor, &AEditorAutomationActor::StaticClass, TEXT("/Script/Blutility"), TEXT("AEditorAutomationActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEditorAutomationActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

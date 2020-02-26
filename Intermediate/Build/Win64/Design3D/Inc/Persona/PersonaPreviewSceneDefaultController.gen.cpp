// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Persona/Private/PersonaPreviewSceneDefaultController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaPreviewSceneDefaultController() {}
// Cross Module References
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneDefaultController_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneDefaultController();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void UPersonaPreviewSceneDefaultController::StaticRegisterNativesUPersonaPreviewSceneDefaultController()
	{
	}
	UClass* Z_Construct_UClass_UPersonaPreviewSceneDefaultController_NoRegister()
	{
		return UPersonaPreviewSceneDefaultController::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonaPreviewSceneController,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Default" },
		{ "IncludePath", "PersonaPreviewSceneDefaultController.h" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDefaultController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaPreviewSceneDefaultController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::ClassParams = {
		&UPersonaPreviewSceneDefaultController::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaPreviewSceneDefaultController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPersonaPreviewSceneDefaultController, 3638590132);
	template<> PERSONA_API UClass* StaticClass<UPersonaPreviewSceneDefaultController>()
	{
		return UPersonaPreviewSceneDefaultController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPersonaPreviewSceneDefaultController(Z_Construct_UClass_UPersonaPreviewSceneDefaultController, &UPersonaPreviewSceneDefaultController::StaticClass, TEXT("/Script/Persona"), TEXT("UPersonaPreviewSceneDefaultController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaPreviewSceneDefaultController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

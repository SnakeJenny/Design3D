// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Persona/Public/PersonaPreviewSceneController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaPreviewSceneController() {}
// Cross Module References
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void UPersonaPreviewSceneController::StaticRegisterNativesUPersonaPreviewSceneController()
	{
	}
	UClass* Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister()
	{
		return UPersonaPreviewSceneController::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaPreviewSceneController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaPreviewSceneController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PersonaPreviewSceneController.h" },
		{ "ModuleRelativePath", "Public/PersonaPreviewSceneController.h" },
		{ "ToolTip", "Base class for preview scene controller (controls what the preview scene in persona does)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaPreviewSceneController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaPreviewSceneController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPersonaPreviewSceneController_Statics::ClassParams = {
		&UPersonaPreviewSceneController::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaPreviewSceneController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPersonaPreviewSceneController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPersonaPreviewSceneController, 750161889);
	template<> PERSONA_API UClass* StaticClass<UPersonaPreviewSceneController>()
	{
		return UPersonaPreviewSceneController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPersonaPreviewSceneController(Z_Construct_UClass_UPersonaPreviewSceneController, &UPersonaPreviewSceneController::StaticClass, TEXT("/Script/Persona"), TEXT("UPersonaPreviewSceneController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaPreviewSceneController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

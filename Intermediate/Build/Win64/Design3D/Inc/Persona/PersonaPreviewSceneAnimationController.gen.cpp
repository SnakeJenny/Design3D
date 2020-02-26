// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Persona/Private/PersonaPreviewSceneAnimationController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaPreviewSceneAnimationController() {}
// Cross Module References
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneAnimationController_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneAnimationController();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController();
	UPackage* Z_Construct_UPackage__Script_Persona();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	void UPersonaPreviewSceneAnimationController::StaticRegisterNativesUPersonaPreviewSceneAnimationController()
	{
	}
	UClass* Z_Construct_UClass_UPersonaPreviewSceneAnimationController_NoRegister()
	{
		return UPersonaPreviewSceneAnimationController::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonaPreviewSceneController,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Use Specific Animation" },
		{ "IncludePath", "PersonaPreviewSceneAnimationController.h" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneAnimationController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneAnimationController.h" },
		{ "ToolTip", "The preview animation to use" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaPreviewSceneAnimationController, Animation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::NewProp_Animation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::NewProp_Animation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaPreviewSceneAnimationController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::ClassParams = {
		&UPersonaPreviewSceneAnimationController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaPreviewSceneAnimationController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPersonaPreviewSceneAnimationController, 2895764785);
	template<> PERSONA_API UClass* StaticClass<UPersonaPreviewSceneAnimationController>()
	{
		return UPersonaPreviewSceneAnimationController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPersonaPreviewSceneAnimationController(Z_Construct_UClass_UPersonaPreviewSceneAnimationController, &UPersonaPreviewSceneAnimationController::StaticClass, TEXT("/Script/Persona"), TEXT("UPersonaPreviewSceneAnimationController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaPreviewSceneAnimationController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

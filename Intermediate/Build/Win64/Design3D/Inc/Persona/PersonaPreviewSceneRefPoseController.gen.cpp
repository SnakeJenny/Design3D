// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Persona/Private/PersonaPreviewSceneRefPoseController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaPreviewSceneRefPoseController() {}
// Cross Module References
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneRefPoseController();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void UPersonaPreviewSceneRefPoseController::StaticRegisterNativesUPersonaPreviewSceneRefPoseController()
	{
	}
	UClass* Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_NoRegister()
	{
		return UPersonaPreviewSceneRefPoseController::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetBoneTransforms_MetaData[];
#endif
		static void NewProp_bResetBoneTransforms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetBoneTransforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonaPreviewSceneController,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Reference Pose" },
		{ "IncludePath", "PersonaPreviewSceneRefPoseController.h" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneRefPoseController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneRefPoseController.h" },
		{ "ToolTip", "Whether to reset bone transforms when the refpose is set" },
	};
#endif
	void Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms_SetBit(void* Obj)
	{
		((UPersonaPreviewSceneRefPoseController*)Obj)->bResetBoneTransforms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms = { "bResetBoneTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPersonaPreviewSceneRefPoseController), &Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaPreviewSceneRefPoseController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::ClassParams = {
		&UPersonaPreviewSceneRefPoseController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaPreviewSceneRefPoseController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPersonaPreviewSceneRefPoseController, 282778029);
	template<> PERSONA_API UClass* StaticClass<UPersonaPreviewSceneRefPoseController>()
	{
		return UPersonaPreviewSceneRefPoseController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPersonaPreviewSceneRefPoseController(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController, &UPersonaPreviewSceneRefPoseController::StaticClass, TEXT("/Script/Persona"), TEXT("UPersonaPreviewSceneRefPoseController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaPreviewSceneRefPoseController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

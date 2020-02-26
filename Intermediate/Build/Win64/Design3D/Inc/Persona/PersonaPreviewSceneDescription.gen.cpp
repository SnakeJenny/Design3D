// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Persona/Private/PersonaPreviewSceneDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaPreviewSceneDescription() {}
// Cross Module References
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneDescription_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneDescription();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Persona();
	ENGINE_API UClass* Z_Construct_UClass_UPreviewMeshCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UPersonaPreviewSceneDescription::StaticRegisterNativesUPersonaPreviewSceneDescription()
	{
	}
	UClass* Z_Construct_UClass_UPersonaPreviewSceneDescription_NoRegister()
	{
		return UPersonaPreviewSceneDescription::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAdditionalMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultAdditionalMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AdditionalMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewControllerInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewControllerInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewControllerInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewControllerInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewControllerInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewController_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PreviewController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PersonaPreviewSceneDescription.h" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_DefaultAdditionalMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_DefaultAdditionalMeshes = { "DefaultAdditionalMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaPreviewSceneDescription, DefaultAdditionalMeshes), Z_Construct_UClass_UPreviewMeshCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_DefaultAdditionalMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_DefaultAdditionalMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_AdditionalMeshes_MetaData[] = {
		{ "Category", "Additional Meshes" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_AdditionalMeshes = { "AdditionalMeshes", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaPreviewSceneDescription, AdditionalMeshes), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_AdditionalMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_AdditionalMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
		{ "ToolTip", "The preview mesh to use" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaPreviewSceneDescription, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances_MetaData[] = {
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances = { "PreviewControllerInstances", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaPreviewSceneDescription, PreviewControllerInstances), METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances_Inner = { "PreviewControllerInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstance = { "PreviewControllerInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaPreviewSceneDescription, PreviewControllerInstance), Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewController_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
		{ "ToolTip", "The method by which the preview is animated" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewController = { "PreviewController", nullptr, (EPropertyFlags)0x0014000002000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaPreviewSceneDescription, PreviewController), Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_DefaultAdditionalMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_AdditionalMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaPreviewSceneDescription>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::ClassParams = {
		&UPersonaPreviewSceneDescription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaPreviewSceneDescription()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPersonaPreviewSceneDescription, 326475356);
	template<> PERSONA_API UClass* StaticClass<UPersonaPreviewSceneDescription>()
	{
		return UPersonaPreviewSceneDescription::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPersonaPreviewSceneDescription(Z_Construct_UClass_UPersonaPreviewSceneDescription, &UPersonaPreviewSceneDescription::StaticClass, TEXT("/Script/Persona"), TEXT("UPersonaPreviewSceneDescription"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaPreviewSceneDescription);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

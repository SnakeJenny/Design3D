// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SceneOutliner/Private/SceneOutlinerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneOutlinerSettings() {}
// Cross Module References
	SCENEOUTLINER_API UClass* Z_Construct_UClass_USceneOutlinerSettings_NoRegister();
	SCENEOUTLINER_API UClass* Z_Construct_UClass_USceneOutlinerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SceneOutliner();
// End Cross Module References
	void USceneOutlinerSettings::StaticRegisterNativesUSceneOutlinerSettings()
	{
	}
	UClass* Z_Construct_UClass_USceneOutlinerSettings_NoRegister()
	{
		return USceneOutlinerSettings::StaticClass();
	}
	struct Z_Construct_UClass_USceneOutlinerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowActorComponents_MetaData[];
#endif
		static void NewProp_bShowActorComponents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowActorComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOnlySelectedActors_MetaData[];
#endif
		static void NewProp_bShowOnlySelectedActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOnlySelectedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyActorsInCurrentLevel_MetaData[];
#endif
		static void NewProp_bShowOnlyActorsInCurrentLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyActorsInCurrentLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideTemporaryActors_MetaData[];
#endif
		static void NewProp_bHideTemporaryActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideTemporaryActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneOutlinerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SceneOutliner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneOutlinerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SceneOutlinerSettings.h" },
		{ "ModuleRelativePath", "Private/SceneOutlinerSettings.h" },
		{ "ToolTip", "Implements the settings for the Scene Outliner." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowActorComponents_MetaData[] = {
		{ "ModuleRelativePath", "Private/SceneOutlinerSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is only displaying Actor Components" },
	};
#endif
	void Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowActorComponents_SetBit(void* Obj)
	{
		((USceneOutlinerSettings*)Obj)->bShowActorComponents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowActorComponents = { "bShowActorComponents", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USceneOutlinerSettings), &Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowActorComponents_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowActorComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowActorComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlySelectedActors_MetaData[] = {
		{ "ModuleRelativePath", "Private/SceneOutlinerSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is only displaying selected Actors" },
	};
#endif
	void Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlySelectedActors_SetBit(void* Obj)
	{
		((USceneOutlinerSettings*)Obj)->bShowOnlySelectedActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlySelectedActors = { "bShowOnlySelectedActors", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USceneOutlinerSettings), &Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlySelectedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlySelectedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlySelectedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlyActorsInCurrentLevel_MetaData[] = {
		{ "ModuleRelativePath", "Private/SceneOutlinerSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is showing only Actors that exist in the current level" },
	};
#endif
	void Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlyActorsInCurrentLevel_SetBit(void* Obj)
	{
		((USceneOutlinerSettings*)Obj)->bShowOnlyActorsInCurrentLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlyActorsInCurrentLevel = { "bShowOnlyActorsInCurrentLevel", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USceneOutlinerSettings), &Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlyActorsInCurrentLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlyActorsInCurrentLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlyActorsInCurrentLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bHideTemporaryActors_MetaData[] = {
		{ "ModuleRelativePath", "Private/SceneOutlinerSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is hiding temporary/run-time Actors" },
	};
#endif
	void Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bHideTemporaryActors_SetBit(void* Obj)
	{
		((USceneOutlinerSettings*)Obj)->bHideTemporaryActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bHideTemporaryActors = { "bHideTemporaryActors", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USceneOutlinerSettings), &Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bHideTemporaryActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bHideTemporaryActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bHideTemporaryActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneOutlinerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowActorComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlySelectedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bShowOnlyActorsInCurrentLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneOutlinerSettings_Statics::NewProp_bHideTemporaryActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneOutlinerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneOutlinerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneOutlinerSettings_Statics::ClassParams = {
		&USceneOutlinerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USceneOutlinerSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USceneOutlinerSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USceneOutlinerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USceneOutlinerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneOutlinerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneOutlinerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneOutlinerSettings, 3895378308);
	template<> SCENEOUTLINER_API UClass* StaticClass<USceneOutlinerSettings>()
	{
		return USceneOutlinerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneOutlinerSettings(Z_Construct_UClass_USceneOutlinerSettings, &USceneOutlinerSettings::StaticClass, TEXT("/Script/SceneOutliner"), TEXT("USceneOutlinerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneOutlinerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

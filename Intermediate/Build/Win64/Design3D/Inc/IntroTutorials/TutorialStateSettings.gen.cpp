// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroTutorials/Private/TutorialStateSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialStateSettings() {}
// Cross Module References
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialProgress();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UTutorialStateSettings_NoRegister();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UTutorialStateSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FTutorialProgress::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTROTUTORIALS_API uint32 Get_Z_Construct_UScriptStruct_FTutorialProgress_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialProgress, Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialProgress"), sizeof(FTutorialProgress), Get_Z_Construct_UScriptStruct_FTutorialProgress_Hash());
	}
	return Singleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialProgress>()
{
	return FTutorialProgress::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialProgress(FTutorialProgress::StaticStruct, TEXT("/Script/IntroTutorials"), TEXT("TutorialProgress"), false, nullptr, nullptr);
static struct FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialProgress
{
	FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialProgress()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialProgress")),new UScriptStruct::TCppStructOps<FTutorialProgress>);
	}
} ScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialProgress;
	struct Z_Construct_UScriptStruct_FTutorialProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUserDismissed_MetaData[];
#endif
		static void NewProp_bUserDismissed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUserDismissed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentStage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tutorial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialProgress_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
		{ "ToolTip", "Track the progress of an individual tutorial" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialProgress>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed_MetaData[] = {
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed_SetBit(void* Obj)
	{
		((FTutorialProgress*)Obj)->bUserDismissed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed = { "bUserDismissed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTutorialProgress), &Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_CurrentStage_MetaData[] = {
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_CurrentStage = { "CurrentStage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialProgress, CurrentStage), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_CurrentStage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_CurrentStage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_Tutorial_MetaData[] = {
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_Tutorial = { "Tutorial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialProgress, Tutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_Tutorial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_Tutorial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_CurrentStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_Tutorial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialProgress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialProgress",
		sizeof(FTutorialProgress),
		alignof(FTutorialProgress),
		Z_Construct_UScriptStruct_FTutorialProgress_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialProgress_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialProgress_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialProgress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialProgress()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialProgress_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_IntroTutorials();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialProgress"), sizeof(FTutorialProgress), Get_Z_Construct_UScriptStruct_FTutorialProgress_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialProgress_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialProgress_Hash() { return 2264945822U; }
	void UTutorialStateSettings::StaticRegisterNativesUTutorialStateSettings()
	{
	}
	UClass* Z_Construct_UClass_UTutorialStateSettings_NoRegister()
	{
		return UTutorialStateSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialStateSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDismissedAllTutorials_MetaData[];
#endif
		static void NewProp_bDismissedAllTutorials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDismissedAllTutorials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialsProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TutorialsProgress;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TutorialsProgress_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialStateSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialStateSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TutorialStateSettings.h" },
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
		{ "ToolTip", "Tutorial settings used to track completion state" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials_MetaData[] = {
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
		{ "ToolTip", "Record if user has chosen to cancel all tutorials" },
	};
#endif
	void Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials_SetBit(void* Obj)
	{
		((UTutorialStateSettings*)Obj)->bDismissedAllTutorials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials = { "bDismissedAllTutorials", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTutorialStateSettings), &Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress_MetaData[] = {
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress = { "TutorialsProgress", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTutorialStateSettings, TutorialsProgress), METADATA_PARAMS(Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress_Inner = { "TutorialsProgress", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTutorialProgress, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTutorialStateSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialStateSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialStateSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialStateSettings_Statics::ClassParams = {
		&UTutorialStateSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTutorialStateSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTutorialStateSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialStateSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTutorialStateSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialStateSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialStateSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialStateSettings, 4092452737);
	template<> INTROTUTORIALS_API UClass* StaticClass<UTutorialStateSettings>()
	{
		return UTutorialStateSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialStateSettings(Z_Construct_UClass_UTutorialStateSettings, &UTutorialStateSettings::StaticClass, TEXT("/Script/IntroTutorials"), TEXT("UTutorialStateSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialStateSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

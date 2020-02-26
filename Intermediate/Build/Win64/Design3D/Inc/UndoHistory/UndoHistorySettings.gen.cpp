// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UndoHistory/Private/Classes/UndoHistorySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUndoHistorySettings() {}
// Cross Module References
	UNDOHISTORY_API UClass* Z_Construct_UClass_UUndoHistorySettings_NoRegister();
	UNDOHISTORY_API UClass* Z_Construct_UClass_UUndoHistorySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UndoHistory();
// End Cross Module References
	void UUndoHistorySettings::StaticRegisterNativesUUndoHistorySettings()
	{
	}
	UClass* Z_Construct_UClass_UUndoHistorySettings_NoRegister()
	{
		return UUndoHistorySettings::StaticClass();
	}
	struct Z_Construct_UClass_UUndoHistorySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowTransactionDetails_MetaData[];
#endif
		static void NewProp_bShowTransactionDetails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowTransactionDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUndoHistorySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UndoHistory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUndoHistorySettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/UndoHistorySettings.h" },
		{ "ModuleRelativePath", "Private/Classes/UndoHistorySettings.h" },
		{ "ToolTip", "Implements the settings for the UndoHistory." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails_MetaData[] = {
		{ "ModuleRelativePath", "Private/Classes/UndoHistorySettings.h" },
		{ "ToolTip", "True when the UndoHistory is showing transaction details." },
	};
#endif
	void Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails_SetBit(void* Obj)
	{
		((UUndoHistorySettings*)Obj)->bShowTransactionDetails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails = { "bShowTransactionDetails", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUndoHistorySettings), &Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUndoHistorySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUndoHistorySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUndoHistorySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUndoHistorySettings_Statics::ClassParams = {
		&UUndoHistorySettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUndoHistorySettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUndoHistorySettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUndoHistorySettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUndoHistorySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUndoHistorySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUndoHistorySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUndoHistorySettings, 172996004);
	template<> UNDOHISTORY_API UClass* StaticClass<UUndoHistorySettings>()
	{
		return UUndoHistorySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUndoHistorySettings(Z_Construct_UClass_UUndoHistorySettings, &UUndoHistorySettings::StaticClass, TEXT("/Script/UndoHistory"), TEXT("UUndoHistorySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUndoHistorySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

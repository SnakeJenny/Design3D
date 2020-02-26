// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/SlateSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateSettings() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_USlateSettings_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_USlateSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void USlateSettings::StaticRegisterNativesUSlateSettings()
	{
	}
	UClass* Z_Construct_UClass_USlateSettings_NoRegister()
	{
		return USlateSettings::StaticClass();
	}
	struct Z_Construct_UClass_USlateSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExplicitCanvasChildZOrder_MetaData[];
#endif
		static void NewProp_bExplicitCanvasChildZOrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExplicitCanvasChildZOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Slate" },
		{ "IncludePath", "SlateSettings.h" },
		{ "ModuleRelativePath", "Public/SlateSettings.h" },
		{ "ToolTip", "Settings that control Slate functionality" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_MetaData[] = {
		{ "Category", "ConstraintCanvas" },
		{ "ModuleRelativePath", "Public/SlateSettings.h" },
		{ "ToolTip", "Allow children of SConstraintCanvas to share render layers. Children must set explicit ZOrder on their slots to control render order.\nRecommendation: Enable for mobile platforms." },
	};
#endif
	void Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_SetBit(void* Obj)
	{
		((USlateSettings*)Obj)->bExplicitCanvasChildZOrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder = { "bExplicitCanvasChildZOrder", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlateSettings), &Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateSettings_Statics::ClassParams = {
		&USlateSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USlateSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USlateSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlateSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateSettings, 571818660);
	template<> SLATE_API UClass* StaticClass<USlateSettings>()
	{
		return USlateSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateSettings(Z_Construct_UClass_USlateSettings, &USlateSettings::StaticClass, TEXT("/Script/Slate"), TEXT("USlateSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

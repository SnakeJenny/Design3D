// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blutility/Classes/EditorUtilityWidgetBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityWidgetBlueprint() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	void UEditorUtilityWidgetBlueprint::StaticRegisterNativesUEditorUtilityWidgetBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister()
	{
		return UEditorUtilityWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidgetBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityWidgetBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::ClassParams = {
		&UEditorUtilityWidgetBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUtilityWidgetBlueprint, 546995588);
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityWidgetBlueprint>()
	{
		return UEditorUtilityWidgetBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUtilityWidgetBlueprint(Z_Construct_UClass_UEditorUtilityWidgetBlueprint, &UEditorUtilityWidgetBlueprint::StaticClass, TEXT("/Script/Blutility"), TEXT("UEditorUtilityWidgetBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityWidgetBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

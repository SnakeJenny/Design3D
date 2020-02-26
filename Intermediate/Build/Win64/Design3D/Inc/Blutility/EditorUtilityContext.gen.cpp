// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blutility/Private/EditorUtilityContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityContext() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityContext_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Blutility();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UEditorUtilityContext::StaticRegisterNativesUEditorUtilityContext()
	{
	}
	UClass* Z_Construct_UClass_UEditorUtilityContext_NoRegister()
	{
		return UEditorUtilityContext::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedUIs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadedUIs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadedUIs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityContext.h" },
		{ "ModuleRelativePath", "Private/EditorUtilityContext.h" },
		{ "ToolTip", "Expose editor utility functions to Blutilities" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityContext_Statics::NewProp_LoadedUIs_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorUtilityContext.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorUtilityContext_Statics::NewProp_LoadedUIs = { "LoadedUIs", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorUtilityContext, LoadedUIs), METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityContext_Statics::NewProp_LoadedUIs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityContext_Statics::NewProp_LoadedUIs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorUtilityContext_Statics::NewProp_LoadedUIs_Inner = { "LoadedUIs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUtilityContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityContext_Statics::NewProp_LoadedUIs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityContext_Statics::NewProp_LoadedUIs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityContext_Statics::ClassParams = {
		&UEditorUtilityContext::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorUtilityContext_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityContext_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityContext_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUtilityContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUtilityContext, 1898595877);
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityContext>()
	{
		return UEditorUtilityContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUtilityContext(Z_Construct_UClass_UEditorUtilityContext, &UEditorUtilityContext::StaticClass, TEXT("/Script/Blutility"), TEXT("UEditorUtilityContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

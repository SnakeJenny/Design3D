// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorSubsystem/Public/EditorSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem();
	UPackage* Z_Construct_UPackage__Script_EditorSubsystem();
// End Cross Module References
	void UEditorSubsystem::StaticRegisterNativesUEditorSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UEditorSubsystem_NoRegister()
	{
		return UEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorSubsystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/EditorSubsystem.h" },
		{ "ToolTip", "UEditorSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of the Editor\n\nUEditorSubsystems are dynamic and will be initialized when the module is loaded if necessary.\nThis means that after StartupModule() is called on the module containing a subsystem,\nthe subsystem collection with instantiate and initialize the subsystem automatically.\nIf the subsystem collection is created post module load then the instances will be created at\ncollection initialization time." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorSubsystem_Statics::ClassParams = {
		&UEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorSubsystem, 3161492856);
	template<> EDITORSUBSYSTEM_API UClass* StaticClass<UEditorSubsystem>()
	{
		return UEditorSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorSubsystem(Z_Construct_UClass_UEditorSubsystem, &UEditorSubsystem::StaticClass, TEXT("/Script/EditorSubsystem"), TEXT("UEditorSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

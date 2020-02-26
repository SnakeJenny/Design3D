// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blutility/Classes/EditorAutomationObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAutomationObject() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorAutomationObject_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorAutomationObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	void UEditorAutomationObject::StaticRegisterNativesUEditorAutomationObject()
	{
	}
	UClass* Z_Construct_UClass_UEditorAutomationObject_NoRegister()
	{
		return UEditorAutomationObject::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAutomationObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorAutomationObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAutomationObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditorAutomationObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EditorAutomationObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAutomationObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAutomationObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorAutomationObject_Statics::ClassParams = {
		&UEditorAutomationObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorAutomationObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorAutomationObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAutomationObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorAutomationObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorAutomationObject, 1753472702);
	template<> BLUTILITY_API UClass* StaticClass<UEditorAutomationObject>()
	{
		return UEditorAutomationObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorAutomationObject(Z_Construct_UClass_UEditorAutomationObject, &UEditorAutomationObject::StaticClass, TEXT("/Script/Blutility"), TEXT("UEditorAutomationObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAutomationObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

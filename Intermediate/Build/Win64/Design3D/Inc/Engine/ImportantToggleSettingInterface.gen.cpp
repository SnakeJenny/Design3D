// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ImportantToggleSettingInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportantToggleSettingInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UImportantToggleSettingInterface::StaticRegisterNativesUImportantToggleSettingInterface()
	{
	}
	UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister()
	{
		return UImportantToggleSettingInterface::StaticClass();
	}
	struct Z_Construct_UClass_UImportantToggleSettingInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportantToggleSettingInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportantToggleSettingInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Engine/ImportantToggleSettingInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportantToggleSettingInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IImportantToggleSettingInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImportantToggleSettingInterface_Statics::ClassParams = {
		&UImportantToggleSettingInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UImportantToggleSettingInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImportantToggleSettingInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportantToggleSettingInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImportantToggleSettingInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImportantToggleSettingInterface, 987725196);
	template<> ENGINE_API UClass* StaticClass<UImportantToggleSettingInterface>()
	{
		return UImportantToggleSettingInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImportantToggleSettingInterface(Z_Construct_UClass_UImportantToggleSettingInterface, &UImportantToggleSettingInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UImportantToggleSettingInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportantToggleSettingInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

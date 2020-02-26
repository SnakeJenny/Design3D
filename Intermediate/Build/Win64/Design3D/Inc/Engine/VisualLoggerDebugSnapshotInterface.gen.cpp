// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerDebugSnapshotInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVisualLoggerDebugSnapshotInterface::StaticRegisterNativesUVisualLoggerDebugSnapshotInterface()
	{
	}
	UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister()
	{
		return UVisualLoggerDebugSnapshotInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVisualLoggerDebugSnapshotInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::ClassParams = {
		&UVisualLoggerDebugSnapshotInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisualLoggerDebugSnapshotInterface, 853963960);
	template<> ENGINE_API UClass* StaticClass<UVisualLoggerDebugSnapshotInterface>()
	{
		return UVisualLoggerDebugSnapshotInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisualLoggerDebugSnapshotInterface(Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface, &UVisualLoggerDebugSnapshotInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UVisualLoggerDebugSnapshotInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerDebugSnapshotInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

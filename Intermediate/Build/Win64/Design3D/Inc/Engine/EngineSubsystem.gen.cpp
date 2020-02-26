// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Subsystems/EngineSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEngineSubsystem::StaticRegisterNativesUEngineSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UEngineSubsystem_NoRegister()
	{
		return UEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/EngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/EngineSubsystem.h" },
		{ "ToolTip", "UEngineSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of the Engine\n\nUEngineSubsystems are dynamic and will be initialized when the module is loaded if necessary.\nThis means that after StartupModule() is called on the module containing a subsystem,\nthe subsystem collection with instantiate and initialize the subsystem automatically.\nIf the subsystem collection is created post module load then the instances will be created at\ncollection initialization time." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEngineSubsystem_Statics::ClassParams = {
		&UEngineSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEngineSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEngineSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEngineSubsystem, 4192124234);
	template<> ENGINE_API UClass* StaticClass<UEngineSubsystem>()
	{
		return UEngineSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEngineSubsystem(Z_Construct_UClass_UEngineSubsystem, &UEngineSubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("UEngineSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

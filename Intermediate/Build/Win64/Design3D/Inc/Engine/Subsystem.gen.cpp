// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Subsystems/Subsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem();
// End Cross Module References
	void USubsystem::StaticRegisterNativesUSubsystem()
	{
	}
	UClass* Z_Construct_UClass_USubsystem_NoRegister()
	{
		return USubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/Subsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/Subsystem.h" },
		{ "ToolTip", "Subsystems are auto instanced classes that share the lifetime of certain engine constructs\n\n   Currently supported Subsystem lifetimes are:\n           Engine           -> inherit UEngineSubsystem\n           Editor           -> inherit UEditorSubsystem\n           GameInstance -> inherit UGameInstanceSubsystem\n           LocalPlayer      -> inherit ULocalPlayerSubsystem\n\n\n   Normal Example:\n           class UMySystem : public UGameInstanceSubsystem\n   Which can be accessed by:\n           UGameInstance* GameInstance = ...;\n           UMySystem* MySystem = GameInstance->GetSubsystem<UMySystem>();\n\n   or the following if you need protection from a null GameInstance\n           UGameInstance* GameInstance = ...;\n           UMyGameSubsystem* MySubsystem = UGameInstance::GetSubsystem<MyGameSubsystem>(GameInstance);\n\n\n   You can get also define interfaces that can have multiple implementations.\n   Interface Example :\n    MySystemInterface\n  With 2 concrete derivative classes:\n    MyA : public MySystemInterface\n    MyB : public MySystemInterface\n\n   Which can be accessed by:\n           UGameInstance* GameInstance = ...;\n           const TArray<UMyGameSubsystem*>& MySubsystems = GameInstance->GetSubsystemArray<MyGameSubsystem>();" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubsystem_Statics::ClassParams = {
		&USubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubsystem, 3577803559);
	template<> ENGINE_API UClass* StaticClass<USubsystem>()
	{
		return USubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubsystem(Z_Construct_UClass_USubsystem, &USubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("USubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubsystem);
	void UDynamicSubsystem::StaticRegisterNativesUDynamicSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UDynamicSubsystem_NoRegister()
	{
		return UDynamicSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/Subsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/Subsystem.h" },
		{ "ToolTip", "Dynamic Subsystems auto populate/depopulate existing collections when modules are loaded and unloaded\n\nOnly UEngineSubsystems and UEditorSubsystems allow for dynamic loading.\n\nIf instances of your subsystem aren't being created it maybe that the module they are in isn't being explicitly loaded,\nmake sure there is a LoadModule(\"ModuleName\") to load the module." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicSubsystem_Statics::ClassParams = {
		&UDynamicSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDynamicSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDynamicSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicSubsystem, 968238457);
	template<> ENGINE_API UClass* StaticClass<UDynamicSubsystem>()
	{
		return UDynamicSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicSubsystem(Z_Construct_UClass_UDynamicSubsystem, &UDynamicSubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("UDynamicSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

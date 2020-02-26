// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Subsystems/LocalPlayerSubsystem.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalPlayerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULocalPlayerSubsystem::StaticRegisterNativesULocalPlayerSubsystem()
	{
	}
	UClass* Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister()
	{
		return ULocalPlayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULocalPlayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalPlayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalPlayerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/LocalPlayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/LocalPlayerSubsystem.h" },
		{ "ToolTip", "ULocalPlayerSubsystem\nBase class for auto instanced and initialized subsystem that share the lifetime of local players" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalPlayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalPlayerSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalPlayerSubsystem_Statics::ClassParams = {
		&ULocalPlayerSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalPlayerSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalPlayerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalPlayerSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalPlayerSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalPlayerSubsystem, 2484132971);
	template<> ENGINE_API UClass* StaticClass<ULocalPlayerSubsystem>()
	{
		return ULocalPlayerSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalPlayerSubsystem(Z_Construct_UClass_ULocalPlayerSubsystem, &ULocalPlayerSubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("ULocalPlayerSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalPlayerSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

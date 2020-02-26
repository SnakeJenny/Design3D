// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/AISubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISubsystem() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UAISystem_NoRegister();
// End Cross Module References
	void UAISubsystem::StaticRegisterNativesUAISubsystem()
	{
	}
	UClass* Z_Construct_UClass_UAISubsystem_NoRegister()
	{
		return UAISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AISystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISubsystem.h" },
		{ "ModuleRelativePath", "Classes/AISubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class representing a common interface and behavior for AI subsystems" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem = { "AISystem", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISubsystem, AISystem), Z_Construct_UClass_UAISystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISubsystem_Statics::ClassParams = {
		&UAISubsystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISubsystem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISubsystem_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UAISubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISubsystem, 954575836);
	template<> AIMODULE_API UClass* StaticClass<UAISubsystem>()
	{
		return UAISubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISubsystem(Z_Construct_UClass_UAISubsystem, &UAISubsystem::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

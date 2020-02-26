// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TriggerCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerCapsule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerCapsule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerCapsule();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerCapsule::StaticRegisterNativesATriggerCapsule()
	{
	}
	UClass* Z_Construct_UClass_ATriggerCapsule_NoRegister()
	{
		return ATriggerCapsule::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerCapsule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TriggerCapsule.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerCapsule.h" },
		{ "ToolTip", "A capsule shaped trigger, used to generate overlap events in the level" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerCapsule_Statics::ClassParams = {
		&ATriggerCapsule::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerCapsule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATriggerCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerCapsule, 4139932754);
	template<> ENGINE_API UClass* StaticClass<ATriggerCapsule>()
	{
		return ATriggerCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerCapsule(Z_Construct_UClass_ATriggerCapsule, &ATriggerCapsule::StaticClass, TEXT("/Script/Engine"), TEXT("ATriggerCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

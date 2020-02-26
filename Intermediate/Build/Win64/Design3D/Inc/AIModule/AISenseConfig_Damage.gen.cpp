// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISenseConfig_Damage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Damage() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Damage_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Damage();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Damage_NoRegister();
// End Cross Module References
	void UAISenseConfig_Damage::StaticRegisterNativesUAISenseConfig_Damage()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Damage_NoRegister()
	{
		return UAISenseConfig_Damage::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Damage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Implementation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Damage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Damage_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Damage sense config" },
		{ "IncludePath", "Perception/AISenseConfig_Damage.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Damage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Damage_Statics::NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Damage.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Damage_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002014015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Damage, Implementation), Z_Construct_UClass_UAISense_Damage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Damage_Statics::NewProp_Implementation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Damage_Statics::NewProp_Implementation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Damage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Damage_Statics::NewProp_Implementation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Damage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Damage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Damage_Statics::ClassParams = {
		&UAISenseConfig_Damage::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_Damage_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Damage_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Damage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Damage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Damage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseConfig_Damage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseConfig_Damage, 3846726131);
	template<> AIMODULE_API UClass* StaticClass<UAISenseConfig_Damage>()
	{
		return UAISenseConfig_Damage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Damage(Z_Construct_UClass_UAISenseConfig_Damage, &UAISenseConfig_Damage::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseConfig_Damage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Damage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

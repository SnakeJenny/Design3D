// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISenseEvent_Damage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseEvent_Damage() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Damage_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Damage();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDamageEvent();
// End Cross Module References
	void UAISenseEvent_Damage::StaticRegisterNativesUAISenseEvent_Damage()
	{
	}
	UClass* Z_Construct_UClass_UAISenseEvent_Damage_NoRegister()
	{
		return UAISenseEvent_Damage::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseEvent_Damage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseEvent_Damage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseEvent_Damage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Perception/AISenseEvent_Damage.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseEvent_Damage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseEvent_Damage_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseEvent_Damage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseEvent_Damage_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseEvent_Damage, Event), Z_Construct_UScriptStruct_FAIDamageEvent, METADATA_PARAMS(Z_Construct_UClass_UAISenseEvent_Damage_Statics::NewProp_Event_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Damage_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseEvent_Damage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseEvent_Damage_Statics::NewProp_Event,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseEvent_Damage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseEvent_Damage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseEvent_Damage_Statics::ClassParams = {
		&UAISenseEvent_Damage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseEvent_Damage_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Damage_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseEvent_Damage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Damage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseEvent_Damage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseEvent_Damage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseEvent_Damage, 953517587);
	template<> AIMODULE_API UClass* StaticClass<UAISenseEvent_Damage>()
	{
		return UAISenseEvent_Damage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseEvent_Damage(Z_Construct_UClass_UAISenseEvent_Damage, &UAISenseEvent_Damage::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseEvent_Damage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseEvent_Damage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

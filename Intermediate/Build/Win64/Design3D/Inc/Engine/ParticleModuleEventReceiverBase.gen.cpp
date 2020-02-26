// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
// End Cross Module References
	void UParticleModuleEventReceiverBase::StaticRegisterNativesUParticleModuleEventReceiverBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister()
	{
		return UParticleModuleEventReceiverBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGeneratorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventGeneratorType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
		{ "ToolTip", "The name of the emitter of interest for generating the event." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleEventReceiverBase, EventName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
		{ "ToolTip", "The type of event that will generate the kill." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType = { "EventGeneratorType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleEventReceiverBase, EventGeneratorType), Z_Construct_UEnum_Engine_EParticleEventType, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventReceiverBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::ClassParams = {
		&UParticleModuleEventReceiverBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleEventReceiverBase, 2313259864);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleEventReceiverBase>()
	{
		return UParticleModuleEventReceiverBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventReceiverBase(Z_Construct_UClass_UParticleModuleEventReceiverBase, &UParticleModuleEventReceiverBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventReceiverBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

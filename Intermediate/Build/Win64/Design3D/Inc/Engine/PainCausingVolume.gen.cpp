// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/PainCausingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePainCausingVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APainCausingVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APainCausingVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	void APainCausingVolume::StaticRegisterNativesAPainCausingVolume()
	{
	}
	UClass* Z_Construct_UClass_APainCausingVolume_NoRegister()
	{
		return APainCausingVolume::StaticClass();
	}
	struct Z_Construct_UClass_APainCausingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BACKUP_bPainCausing_MetaData[];
#endif
		static void NewProp_BACKUP_bPainCausing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BACKUP_bPainCausing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEntryPain_MetaData[];
#endif
		static void NewProp_bEntryPain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntryPain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PainInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PainInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPainCausing_MetaData[];
#endif
		static void NewProp_bPainCausing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPainCausing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APainCausingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "GameFramework/PainCausingVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Volume that causes damage over time to any Actor that overlaps its collision." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Controller that gets credit for any damage caused by this volume" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator = { "DamageInstigator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APainCausingVolume, DamageInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator_MetaData, ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Checkpointed bPainCausing value" },
	};
#endif
	void Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_SetBit(void* Obj)
	{
		((APainCausingVolume*)Obj)->BACKUP_bPainCausing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing = { "BACKUP_bPainCausing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APainCausingVolume), &Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_MetaData, ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "if bPainCausing, cause pain when something enters the volume in addition to damage each second" },
	};
#endif
	void Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_SetBit(void* Obj)
	{
		((APainCausingVolume*)Obj)->bEntryPain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain = { "bEntryPain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APainCausingVolume), &Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_SetBit, METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_MetaData, ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "If pain causing, time between damage applications." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval = { "PainInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APainCausingVolume, PainInterval), METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Type of damage done" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APainCausingVolume, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Damage done per second to actors in this volume when bPainCausing=true" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec = { "DamagePerSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APainCausingVolume, DamagePerSec), METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec_MetaData, ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Whether volume currently causes damage." },
	};
#endif
	void Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_SetBit(void* Obj)
	{
		((APainCausingVolume*)Obj)->bPainCausing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing = { "bPainCausing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APainCausingVolume), &Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_MetaData, ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APainCausingVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APainCausingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APainCausingVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APainCausingVolume_Statics::ClassParams = {
		&APainCausingVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APainCausingVolume_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APainCausingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APainCausingVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APainCausingVolume, 1710679366);
	template<> ENGINE_API UClass* StaticClass<APainCausingVolume>()
	{
		return APainCausingVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APainCausingVolume(Z_Construct_UClass_APainCausingVolume, &APainCausingVolume::StaticClass, TEXT("/Script/Engine"), TEXT("APainCausingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APainCausingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

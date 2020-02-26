// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISense.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAISenseNotifyType();
// End Cross Module References
	void UAISense::StaticRegisterNativesUAISense()
	{
	}
	UClass* Z_Construct_UClass_UAISense_NoRegister()
	{
		return UAISense::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystemInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionSystemInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterAllPawnsAsSources_MetaData[];
#endif
		static void NewProp_bAutoRegisterAllPawnsAsSources_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterAllPawnsAsSources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsNewPawnNotification_MetaData[];
#endif
		static void NewProp_bWantsNewPawnNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsNewPawnNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NotifyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultExpirationAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultExpirationAge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::NewProp_PerceptionSystemInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_PerceptionSystemInstance = { "PerceptionSystemInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense, PerceptionSystemInstance), Z_Construct_UClass_UAIPerceptionSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::NewProp_PerceptionSystemInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::NewProp_PerceptionSystemInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
		{ "ToolTip", "If true all newly spawned pawns will get auto registered as source for this sense." },
	};
#endif
	void Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_SetBit(void* Obj)
	{
		((UAISense*)Obj)->bAutoRegisterAllPawnsAsSources = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources = { "bAutoRegisterAllPawnsAsSources", nullptr, (EPropertyFlags)0x0020080000014015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAISense), &Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
		{ "ToolTip", "whether this sense is interested in getting notified about new Pawns being spawned\n    this can be used for example for automated sense sources registration" },
	};
#endif
	void Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_SetBit(void* Obj)
	{
		((UAISense*)Obj)->bWantsNewPawnNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification = { "bWantsNewPawnNotification", nullptr, (EPropertyFlags)0x0020080000014015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAISense), &Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType = { "NotifyType", nullptr, (EPropertyFlags)0x0020080000014015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense, NotifyType), Z_Construct_UEnum_AIModule_EAISenseNotifyType, METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::NewProp_DefaultExpirationAge_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
		{ "ToolTip", "age past which stimulus of this sense are \"forgotten\"" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_DefaultExpirationAge = { "DefaultExpirationAge", nullptr, (EPropertyFlags)0x0020080000004015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense, DefaultExpirationAge), METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::NewProp_DefaultExpirationAge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::NewProp_DefaultExpirationAge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_PerceptionSystemInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_DefaultExpirationAge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Statics::ClassParams = {
		&UAISense::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISense_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::PropPointers),
		0,
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense, 2128770273);
	template<> AIMODULE_API UClass* StaticClass<UAISense>()
	{
		return UAISense::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense(Z_Construct_UClass_UAISense, &UAISense::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

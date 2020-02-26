// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsCollisionHandler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void UPhysicsCollisionHandler::StaticRegisterNativesUPhysicsCollisionHandler()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister()
	{
		return UPhysicsCollisionHandler::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsCollisionHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastImpactSoundTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastImpactSoundTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImpactSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactReFireDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactReFireDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsCollisionHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsCollisionHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "Time since last impact sound" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime = { "LastImpactSoundTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsCollisionHandler, LastImpactSoundTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "Sound to play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound = { "DefaultImpactSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsCollisionHandler, DefaultImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "Min time between effect/sound being triggered" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay = { "ImpactReFireDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsCollisionHandler, ImpactReFireDelay), METADATA_PARAMS(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "How hard an impact must be to trigger effect/sound" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold = { "ImpactThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsCollisionHandler, ImpactThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsCollisionHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsCollisionHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsCollisionHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::ClassParams = {
		&UPhysicsCollisionHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsCollisionHandler_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsCollisionHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsCollisionHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsCollisionHandler, 895849093);
	template<> ENGINE_API UClass* StaticClass<UPhysicsCollisionHandler>()
	{
		return UPhysicsCollisionHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsCollisionHandler(Z_Construct_UClass_UPhysicsCollisionHandler, &UPhysicsCollisionHandler::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsCollisionHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsCollisionHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

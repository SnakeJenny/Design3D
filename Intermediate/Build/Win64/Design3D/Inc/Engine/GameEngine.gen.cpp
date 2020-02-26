// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/GameEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEngine() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
	ENGINE_API UClass* Z_Construct_UClass_UEngine();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
// End Cross Module References
	void UGameEngine::StaticRegisterNativesUGameEngine()
	{
	}
	UClass* Z_Construct_UClass_UGameEngine_NoRegister()
	{
		return UGameEngine::StaticClass();
	}
	struct Z_Construct_UClass_UGameEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerFlushLogInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerFlushLogInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/GameEngine.h" },
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
		{ "ToolTip", "Engine that manages core systems that enable a game." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameEngine, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
		{ "ToolTip", "Maximium time (in seconds) between the flushes of the logs on the server (best effort). If 0, this will happen every tick." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval = { "ServerFlushLogInterval", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameEngine, ServerFlushLogInterval), METADATA_PARAMS(Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
		{ "ToolTip", "Maximium delta time the engine uses to populate FApp::DeltaTime. If 0, unbound." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime = { "MaxDeltaTime", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameEngine, MaxDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameEngine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameEngine_Statics::ClassParams = {
		&UGameEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameEngine_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::PropPointers),
		0,
		0x001000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UGameEngine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameEngine, 93524371);
	template<> ENGINE_API UClass* StaticClass<UGameEngine>()
	{
		return UGameEngine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameEngine(Z_Construct_UClass_UGameEngine, &UGameEngine::StaticClass, TEXT("/Script/Engine"), TEXT("UGameEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

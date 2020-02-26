// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DemoPendingNetGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoPendingNetGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDemoPendingNetGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoPendingNetGame();
	ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDemoPendingNetGame::StaticRegisterNativesUDemoPendingNetGame()
	{
	}
	UClass* Z_Construct_UClass_UDemoPendingNetGame_NoRegister()
	{
		return UDemoPendingNetGame::StaticClass();
	}
	struct Z_Construct_UClass_UDemoPendingNetGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemoPendingNetGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPendingNetGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoPendingNetGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DemoPendingNetGame.h" },
		{ "ModuleRelativePath", "Classes/Engine/DemoPendingNetGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemoPendingNetGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoPendingNetGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemoPendingNetGame_Statics::ClassParams = {
		&UDemoPendingNetGame::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDemoPendingNetGame_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDemoPendingNetGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemoPendingNetGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemoPendingNetGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemoPendingNetGame, 2355250093);
	template<> ENGINE_API UClass* StaticClass<UDemoPendingNetGame>()
	{
		return UDemoPendingNetGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemoPendingNetGame(Z_Construct_UClass_UDemoPendingNetGame, &UDemoPendingNetGame::StaticClass, TEXT("/Script/Engine"), TEXT("UDemoPendingNetGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoPendingNetGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

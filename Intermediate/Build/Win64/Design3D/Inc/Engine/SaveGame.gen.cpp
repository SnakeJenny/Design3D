// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/SaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USaveGame::StaticRegisterNativesUSaveGame()
	{
	}
	UClass* Z_Construct_UClass_USaveGame_NoRegister()
	{
		return USaveGame::StaticClass();
	}
	struct Z_Construct_UClass_USaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameFramework/SaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "This class acts as a base class for a save game object that can be used to save state about the game.\nWhen you create your own save game subclass, you would add member variables for the information that you want to save.\nThen when you want to save a game, create an instance of this object using CreateSaveGameObject, fill in the data, and use SaveGameToSlot, providing a slot name.\nTo load the game you then just use LoadGameFromSlot, and read the data from the resulting object.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/SaveGame" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGame_Statics::ClassParams = {
		&USaveGame::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGame_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGame, 1023025486);
	template<> ENGINE_API UClass* StaticClass<USaveGame>()
	{
		return USaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGame(Z_Construct_UClass_USaveGame, &USaveGame::StaticClass, TEXT("/Script/Engine"), TEXT("USaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

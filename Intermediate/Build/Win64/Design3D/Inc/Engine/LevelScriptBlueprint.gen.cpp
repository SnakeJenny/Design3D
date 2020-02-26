// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LevelScriptBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelScriptBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelScriptBlueprint::StaticRegisterNativesULevelScriptBlueprint()
	{
	}
	UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister()
	{
		return ULevelScriptBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_ULevelScriptBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelScriptBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelScriptBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/LevelScriptBlueprint.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptBlueprint.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "A level blueprint is a specialized type of blueprint. It is used to house\nglobal, level-wide logic. In a level blueprint, you can operate on specific\nlevel-actor instances through blueprint's node-based interface. UE3 users\nshould be familiar with this concept, as it is very similar to Kismet.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/UserGuide/Types/LevelBlueprint/index.html\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/index.html\n@see UBlueprint\n@see ALevelScriptActor" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptBlueprint.h" },
		{ "ToolTip", "The friendly name to use for UI" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelScriptBlueprint, FriendlyName), METADATA_PARAMS(Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelScriptBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelScriptBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelScriptBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelScriptBlueprint_Statics::ClassParams = {
		&ULevelScriptBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ULevelScriptBlueprint_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_ULevelScriptBlueprint_Statics::PropPointers), 0),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelScriptBlueprint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelScriptBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelScriptBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelScriptBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelScriptBlueprint, 56346448);
	template<> ENGINE_API UClass* StaticClass<ULevelScriptBlueprint>()
	{
		return ULevelScriptBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelScriptBlueprint(Z_Construct_UClass_ULevelScriptBlueprint, &ULevelScriptBlueprint::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelScriptBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelScriptBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

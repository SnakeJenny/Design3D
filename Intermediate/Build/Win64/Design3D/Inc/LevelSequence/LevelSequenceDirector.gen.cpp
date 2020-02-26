// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceDirector() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceDirector_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceDirector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequenceDirector_OnCreated();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
// End Cross Module References
	static FName NAME_ULevelSequenceDirector_OnCreated = FName(TEXT("OnCreated"));
	void ULevelSequenceDirector::OnCreated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceDirector_OnCreated),NULL);
	}
	void ULevelSequenceDirector::StaticRegisterNativesULevelSequenceDirector()
	{
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Called when this director is created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "OnCreated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_OnCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequenceDirector_NoRegister()
	{
		return ULevelSequenceDirector::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceDirector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceDirector_OnCreated, "OnCreated" }, // 1336256449
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceDirector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Cinematics" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Pointer to the player that's playing back this director's sequence" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceDirector, Player), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceDirector_Statics::ClassParams = {
		&ULevelSequenceDirector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceDirector, 875603707);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceDirector>()
	{
		return ULevelSequenceDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceDirector(Z_Construct_UClass_ULevelSequenceDirector, &ULevelSequenceDirector::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceDirector);
	void ULegacyLevelSequenceDirectorBlueprint::StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint()
	{
	}
	UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister()
	{
		return ULegacyLevelSequenceDirectorBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSequenceDirector.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegacyLevelSequenceDirectorBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::ClassParams = {
		&ULegacyLevelSequenceDirectorBlueprint::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULegacyLevelSequenceDirectorBlueprint, 246657692);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULegacyLevelSequenceDirectorBlueprint>()
	{
		return ULegacyLevelSequenceDirectorBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULegacyLevelSequenceDirectorBlueprint(Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint, &ULegacyLevelSequenceDirectorBlueprint::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULegacyLevelSequenceDirectorBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyLevelSequenceDirectorBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/FunctionalAITest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalAITest() {}
// Cross Module References
	FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnSet();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnInfo();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FPendingDelayedSpawn();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalAITest_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalAITest();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics
	{
		struct _Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms
		{
			AAIController* Controller;
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting, nullptr, "FunctionalTestAISpawned__DelegateSignature", sizeof(_Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAITestSpawnSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUNCTIONALTESTING_API uint32 Get_Z_Construct_UScriptStruct_FAITestSpawnSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITestSpawnSet, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("AITestSpawnSet"), sizeof(FAITestSpawnSet), Get_Z_Construct_UScriptStruct_FAITestSpawnSet_Hash());
	}
	return Singleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FAITestSpawnSet>()
{
	return FAITestSpawnSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAITestSpawnSet(FAITestSpawnSet::StaticStruct, TEXT("/Script/FunctionalTesting"), TEXT("AITestSpawnSet"), false, nullptr, nullptr);
static struct FScriptStruct_FunctionalTesting_StaticRegisterNativesFAITestSpawnSet
{
	FScriptStruct_FunctionalTesting_StaticRegisterNativesFAITestSpawnSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AITestSpawnSet")),new UScriptStruct::TCppStructOps<FAITestSpawnSet>);
	}
} ScriptStruct_FunctionalTesting_StaticRegisterNativesFAITestSpawnSet;
	struct Z_Construct_UScriptStruct_FAITestSpawnSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallbackSpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FallbackSpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnInfoContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnInfoContainer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnInfoContainer_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITestSpawnSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_FallbackSpawnLocation_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "location used for spawning if spawn info doesn't define one" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_FallbackSpawnLocation = { "FallbackSpawnLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnSet, FallbackSpawnLocation), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_FallbackSpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_FallbackSpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FAITestSpawnSet*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAITestSpawnSet), &Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "give the set a name to help identify it if need be" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnSet, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "what to spawn" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer = { "SpawnInfoContainer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnSet, SpawnInfoContainer), METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer_Inner = { "SpawnInfoContainer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAITestSpawnInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_FallbackSpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"AITestSpawnSet",
		sizeof(FAITestSpawnSet),
		alignof(FAITestSpawnSet),
		Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAITestSpawnSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AITestSpawnSet"), sizeof(FAITestSpawnSet), Get_Z_Construct_UScriptStruct_FAITestSpawnSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAITestSpawnSet_Hash() { return 185597848U; }
class UScriptStruct* FPendingDelayedSpawn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUNCTIONALTESTING_API uint32 Get_Z_Construct_UScriptStruct_FPendingDelayedSpawn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingDelayedSpawn, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("PendingDelayedSpawn"), sizeof(FPendingDelayedSpawn), Get_Z_Construct_UScriptStruct_FPendingDelayedSpawn_Hash());
	}
	return Singleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FPendingDelayedSpawn>()
{
	return FPendingDelayedSpawn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPendingDelayedSpawn(FPendingDelayedSpawn::StaticStruct, TEXT("/Script/FunctionalTesting"), TEXT("PendingDelayedSpawn"), false, nullptr, nullptr);
static struct FScriptStruct_FunctionalTesting_StaticRegisterNativesFPendingDelayedSpawn
{
	FScriptStruct_FunctionalTesting_StaticRegisterNativesFPendingDelayedSpawn()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PendingDelayedSpawn")),new UScriptStruct::TCppStructOps<FPendingDelayedSpawn>);
	}
} ScriptStruct_FunctionalTesting_StaticRegisterNativesFPendingDelayedSpawn;
	struct Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingDelayedSpawn>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		Z_Construct_UScriptStruct_FAITestSpawnInfo,
		&NewStructOps,
		"PendingDelayedSpawn",
		sizeof(FPendingDelayedSpawn),
		alignof(FPendingDelayedSpawn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPendingDelayedSpawn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPendingDelayedSpawn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PendingDelayedSpawn"), sizeof(FPendingDelayedSpawn), Get_Z_Construct_UScriptStruct_FPendingDelayedSpawn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPendingDelayedSpawn_Hash() { return 4102643186U; }
class UScriptStruct* FAITestSpawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUNCTIONALTESTING_API uint32 Get_Z_Construct_UScriptStruct_FAITestSpawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITestSpawnInfo, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("AITestSpawnInfo"), sizeof(FAITestSpawnInfo), Get_Z_Construct_UScriptStruct_FAITestSpawnInfo_Hash());
	}
	return Singleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FAITestSpawnInfo>()
{
	return FAITestSpawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAITestSpawnInfo(FAITestSpawnInfo::StaticStruct, TEXT("/Script/FunctionalTesting"), TEXT("AITestSpawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FunctionalTesting_StaticRegisterNativesFAITestSpawnInfo
{
	FScriptStruct_FunctionalTesting_StaticRegisterNativesFAITestSpawnInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AITestSpawnInfo")),new UScriptStruct::TCppStructOps<FAITestSpawnInfo>);
	}
} ScriptStruct_FunctionalTesting_StaticRegisterNativesFAITestSpawnInfo;
	struct Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreSpawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreSpawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITestSpawnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PreSpawnDelay_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "delay before attempting first spawn" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PreSpawnDelay = { "PreSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnInfo, PreSpawnDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PreSpawnDelay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PreSpawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_SpawnDelay_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "delay between consecutive spawn attempts" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_SpawnDelay = { "SpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnInfo, SpawnDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_SpawnDelay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_SpawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_NumberToSpawn_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_NumberToSpawn = { "NumberToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnInfo, NumberToSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_NumberToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_NumberToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "Where should AI be spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnInfo, SpawnLocation), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "if set will be applied to spawned AI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnInfo, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_BehaviorTree_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnInfo, TeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_TeamID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_TeamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_ControllerClass_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "class to override default pawn's controller class. If None the default will be used" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_ControllerClass = { "ControllerClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnInfo, ControllerClass), Z_Construct_UClass_AAIController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_ControllerClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_ControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PawnClass_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "Determines AI to be spawned" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITestSpawnInfo, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PawnClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PawnClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PreSpawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_SpawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_NumberToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_ControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PawnClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"AITestSpawnInfo",
		sizeof(FAITestSpawnInfo),
		alignof(FAITestSpawnInfo),
		Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAITestSpawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AITestSpawnInfo"), sizeof(FAITestSpawnInfo), Get_Z_Construct_UScriptStruct_FAITestSpawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAITestSpawnInfo_Hash() { return 4115933662U; }
	void AFunctionalAITest::StaticRegisterNativesAFunctionalAITest()
	{
		UClass* Class = AFunctionalAITest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsOneOfSpawnedPawns", &AFunctionalAITest::execIsOneOfSpawnedPawns },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics
	{
		struct FunctionalAITest_eventIsOneOfSpawnedPawns_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalAITest_eventIsOneOfSpawnedPawns_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FunctionalAITest_eventIsOneOfSpawnedPawns_Parms), &Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalAITest_eventIsOneOfSpawnedPawns_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalAITest, nullptr, "IsOneOfSpawnedPawns", sizeof(FunctionalAITest_eventIsOneOfSpawnedPawns_Parms), Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFunctionalAITest_NoRegister()
	{
		return AFunctionalAITest::StaticClass();
	}
	struct Z_Construct_UClass_AFunctionalAITest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugNavMeshOnTimeout_MetaData[];
#endif
		static void NewProp_bDebugNavMeshOnTimeout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugNavMeshOnTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForNavMesh_MetaData[];
#endif
		static void NewProp_bWaitForNavMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForNavMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshDebugExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavMeshDebugExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshDebugOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavMeshDebugOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAllAISPawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllAISPawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAISpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAISpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpawnSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentSpawnSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpawnSetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSpawnSetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingDelayedSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingDelayedSpawns;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingDelayedSpawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedPawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationRandomizationRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnLocationRandomizationRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnSets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnSets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFunctionalAITest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFunctionalAITest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFunctionalAITest_IsOneOfSpawnedPawns, "IsOneOfSpawnedPawns" }, // 3838411062
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "FunctionalAITest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bDebugNavMeshOnTimeout_MetaData[] = {
		{ "Category", "NavMeshDebug" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "if set, ftest will postpone start until navmesh is fully generated" },
	};
#endif
	void Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bDebugNavMeshOnTimeout_SetBit(void* Obj)
	{
		((AFunctionalAITest*)Obj)->bDebugNavMeshOnTimeout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bDebugNavMeshOnTimeout = { "bDebugNavMeshOnTimeout", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AFunctionalAITest), &Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bDebugNavMeshOnTimeout_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bDebugNavMeshOnTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bDebugNavMeshOnTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bWaitForNavMesh_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "if set, ftest will postpone start until navmesh is fully generated" },
	};
#endif
	void Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bWaitForNavMesh_SetBit(void* Obj)
	{
		((AFunctionalAITest*)Obj)->bWaitForNavMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bWaitForNavMesh = { "bWaitForNavMesh", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AFunctionalAITest), &Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bWaitForNavMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bWaitForNavMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bWaitForNavMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_NavMeshDebugExtent_MetaData[] = {
		{ "Category", "NavMeshDebug" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "navmesh debug: extent around NavMeshDebugOrigin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_NavMeshDebugExtent = { "NavMeshDebugExtent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFunctionalAITest, NavMeshDebugExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_NavMeshDebugExtent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_NavMeshDebugExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_NavMeshDebugOrigin_MetaData[] = {
		{ "Category", "NavMeshDebug" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "navmesh debug: log navoctree modifiers around this point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_NavMeshDebugOrigin = { "NavMeshDebugOrigin", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFunctionalAITest, NavMeshDebugOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_NavMeshDebugOrigin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_NavMeshDebugOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_OnAllAISPawned_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "Called when a all AI finished spawning" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_OnAllAISPawned = { "OnAllAISPawned", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFunctionalAITest, OnAllAISPawned), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_OnAllAISPawned_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_OnAllAISPawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_OnAISpawned_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "Called when a single AI finished spawning" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_OnAISpawned = { "OnAISpawned", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFunctionalAITest, OnAISpawned), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_OnAISpawned_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_OnAISpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_CurrentSpawnSetName_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_CurrentSpawnSetName = { "CurrentSpawnSetName", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFunctionalAITest, CurrentSpawnSetName), METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_CurrentSpawnSetName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_CurrentSpawnSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_CurrentSpawnSetIndex_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_CurrentSpawnSetIndex = { "CurrentSpawnSetIndex", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFunctionalAITest, CurrentSpawnSetIndex), METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_CurrentSpawnSetIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_CurrentSpawnSetIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_PendingDelayedSpawns_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_PendingDelayedSpawns = { "PendingDelayedSpawns", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFunctionalAITest, PendingDelayedSpawns), METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_PendingDelayedSpawns_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_PendingDelayedSpawns_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_PendingDelayedSpawns_Inner = { "PendingDelayedSpawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPendingDelayedSpawn, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnedPawns_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnedPawns = { "SpawnedPawns", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFunctionalAITest, SpawnedPawns), METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnedPawns_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnedPawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnedPawns_Inner = { "SpawnedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnLocationRandomizationRange_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnLocationRandomizationRange = { "SpawnLocationRandomizationRange", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFunctionalAITest, SpawnLocationRandomizationRange), METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnLocationRandomizationRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnLocationRandomizationRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets = { "SpawnSets", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFunctionalAITest, SpawnSets), METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets_Inner = { "SpawnSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAITestSpawnSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFunctionalAITest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bDebugNavMeshOnTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_bWaitForNavMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_NavMeshDebugExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_NavMeshDebugOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_OnAllAISPawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_OnAISpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_CurrentSpawnSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_CurrentSpawnSetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_PendingDelayedSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_PendingDelayedSpawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnedPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnedPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnLocationRandomizationRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFunctionalAITest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalAITest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalAITest_Statics::ClassParams = {
		&AFunctionalAITest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFunctionalAITest_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFunctionalAITest_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFunctionalAITest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFunctionalAITest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFunctionalAITest, 638686852);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalAITest>()
	{
		return AFunctionalAITest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFunctionalAITest(Z_Construct_UClass_AFunctionalAITest, &AFunctionalAITest::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("AFunctionalAITest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalAITest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

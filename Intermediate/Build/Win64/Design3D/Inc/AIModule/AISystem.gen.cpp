// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/AISystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISystem() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISystem();
	ENGINE_API UClass* Z_Construct_UClass_UAISystemBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISystem_AIIgnorePlayers();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISystem_AILoggingVerbose();
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UAISystem::StaticRegisterNativesUAISystem()
	{
		UClass* Class = UAISystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AIIgnorePlayers", &UAISystem::execAIIgnorePlayers },
			{ "AILoggingVerbose", &UAISystem::execAILoggingVerbose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "cheats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISystem, nullptr, "AIIgnorePlayers", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISystem_AIIgnorePlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISystem, nullptr, "AILoggingVerbose", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISystem_AILoggingVerbose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISystem_NoRegister()
	{
		return UAISystem::StaticClass();
	}
	struct Z_Construct_UClass_UAISystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLocalGrids_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLocalGrids;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotSpotManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HotSpotManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllProxyObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllProxyObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllProxyObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentQueryManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnvironmentQueryManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSightCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultSightCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebuggerPlugin_MetaData[];
#endif
		static void NewProp_bEnableDebuggerPlugin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebuggerPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowControllersAsEQSQuerier_MetaData[];
#endif
		static void NewProp_bAllowControllersAsEQSQuerier_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowControllersAsEQSQuerier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBTAITasks_MetaData[];
#endif
		static void NewProp_bEnableBTAITasks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBTAITasks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafing_MetaData[];
#endif
		static void NewProp_bAllowStrafing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAcceptPartialPaths_MetaData[];
#endif
		static void NewProp_bAcceptPartialPaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAcceptPartialPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinishMoveOnGoalOverlap_MetaData[];
#endif
		static void NewProp_bFinishMoveOnGoalOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinishMoveOnGoalOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathfollowingNavLinkAcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathfollowingRegularPathPointAcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotSpotManagerClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HotSpotManagerClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystemClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerceptionSystemClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISystemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISystem_AIIgnorePlayers, "AIIgnorePlayers" }, // 3994469402
		{ &Z_Construct_UFunction_UAISystem_AILoggingVerbose, "AILoggingVerbose" }, // 465016892
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISystem.h" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids = { "NavLocalGrids", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, NavLocalGrids), Z_Construct_UClass_UNavLocalGridManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager = { "HotSpotManager", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, HotSpotManager), Z_Construct_UClass_UAIHotSpotManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects = { "AllProxyObjects", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, AllProxyObjects), METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_Inner = { "AllProxyObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem = { "PerceptionSystem", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, PerceptionSystem), Z_Construct_UClass_UAIPerceptionSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Environment query manager used by game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager = { "EnvironmentQueryManager", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, EnvironmentQueryManager), Z_Construct_UClass_UEnvQueryManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Behavior tree manager used by game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager = { "BehaviorTreeManager", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, BehaviorTreeManager), Z_Construct_UClass_UBehaviorTreeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel_MetaData[] = {
		{ "Category", "PerceptionSystem" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel = { "DefaultSightCollisionChannel", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, DefaultSightCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_MetaData[] = {
		{ "Category", "AISystem" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "if set, GameplayDebuggerPlugin will be loaded on module's startup" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bEnableDebuggerPlugin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin = { "bEnableDebuggerPlugin", nullptr, (EPropertyFlags)0x0010000000054001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "if enable will make EQS not complaint about using Controllers as queriers. Default behavior (false) will\n    in places automatically convert controllers to pawns, and complain if code user bypasses the conversion or uses\n    pawn-less controller" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bAllowControllersAsEQSQuerier = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier = { "bAllowControllersAsEQSQuerier", nullptr, (EPropertyFlags)0x0010000000054001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableBTAITasks_MetaData[] = {
		{ "Category", "Gameplay Tasks" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "this property is just a transition-time flag - in the end we're going to switch over to Gameplay Tasks anyway, that's the goal." },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableBTAITasks_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bEnableBTAITasks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableBTAITasks = { "bEnableBTAITasks", nullptr, (EPropertyFlags)0x0010000000054001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableBTAITasks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableBTAITasks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableBTAITasks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bAllowStrafing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing = { "bAllowStrafing", nullptr, (EPropertyFlags)0x0010000000054001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bAcceptPartialPaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths = { "bAcceptPartialPaths", nullptr, (EPropertyFlags)0x0010000000054001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bFinishMoveOnGoalOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap = { "bFinishMoveOnGoalOverlap", nullptr, (EPropertyFlags)0x0010000000054001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Similarly to PathfollowingRegularPathPointAcceptanceRadius used by pathfollowing's internals\n    but gets applied only when next point on a path represents a begining of navigation link" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius = { "PathfollowingNavLinkAcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000054001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, PathfollowingNavLinkAcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Value used for pathfollowing's internal code to determine whether AI reached path's point.\n    @note this value is not used for path's last point. @see AcceptanceRadius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius = { "PathfollowingRegularPathPointAcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000054001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, PathfollowingRegularPathPointAcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Default AI movement's acceptance radius used to determine whether\nAI reached path's end" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000054001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, AcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName_MetaData[] = {
		{ "Category", "AISystem" },
		{ "DisplayName", "AIHotSpotManager Class" },
		{ "MetaClass", "AIHotSpotManager" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName = { "HotSpotManagerClassName", nullptr, (EPropertyFlags)0x0020080000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, HotSpotManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName_MetaData[] = {
		{ "Category", "AISystem" },
		{ "DisplayName", "Perception System Class" },
		{ "MetaClass", "AIPerceptionSystem" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName = { "PerceptionSystemClassName", nullptr, (EPropertyFlags)0x0020080000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystem, PerceptionSystemClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableBTAITasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISystem_Statics::ClassParams = {
		&UAISystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISystem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISystem, 2400875428);
	template<> AIMODULE_API UClass* StaticClass<UAISystem>()
	{
		return UAISystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISystem(Z_Construct_UClass_UAISystem, &UAISystem::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

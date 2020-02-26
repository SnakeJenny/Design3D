// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/Navigation/AvoidanceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvoidanceManager() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID();
	ENGINE_API UFunction* Z_Construct_UFunction_UAvoidanceManager_GetObjectCount();
	ENGINE_API UFunction* Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent();
// End Cross Module References
class UScriptStruct* FNavAvoidanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavAvoidanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavAvoidanceData, Z_Construct_UPackage__Script_Engine(), TEXT("NavAvoidanceData"), sizeof(FNavAvoidanceData), Get_Z_Construct_UScriptStruct_FNavAvoidanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavAvoidanceData>()
{
	return FNavAvoidanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavAvoidanceData(FNavAvoidanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("NavAvoidanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavAvoidanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFNavAvoidanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavAvoidanceData")),new UScriptStruct::TCppStructOps<FNavAvoidanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavAvoidanceData;
	struct Z_Construct_UScriptStruct_FNavAvoidanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavAvoidanceData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NavAvoidanceData",
		sizeof(FNavAvoidanceData),
		alignof(FNavAvoidanceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavAvoidanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavAvoidanceData"), sizeof(FNavAvoidanceData), Get_Z_Construct_UScriptStruct_FNavAvoidanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavAvoidanceData_Hash() { return 3521738862U; }
	void UAvoidanceManager::StaticRegisterNativesUAvoidanceManager()
	{
		UClass* Class = UAvoidanceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvoidanceVelocityForComponent", &UAvoidanceManager::execGetAvoidanceVelocityForComponent },
			{ "GetNewAvoidanceUID", &UAvoidanceManager::execGetNewAvoidanceUID },
			{ "GetObjectCount", &UAvoidanceManager::execGetObjectCount },
			{ "RegisterMovementComponent", &UAvoidanceManager::execRegisterMovementComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics
	{
		struct AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms
		{
			UMovementComponent* MovementComp;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_MovementComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms, MovementComp), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_MovementComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_MovementComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_MovementComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Calculate avoidance velocity for component (avoids collisions with the supplied component)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, nullptr, "GetAvoidanceVelocityForComponent", sizeof(AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms), Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics
	{
		struct AvoidanceManager_eventGetNewAvoidanceUID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvoidanceManager_eventGetNewAvoidanceUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Get appropriate UID for use when reporting to this function or requesting RVO assistance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, nullptr, "GetNewAvoidanceUID", sizeof(AvoidanceManager_eventGetNewAvoidanceUID_Parms), Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics
	{
		struct AvoidanceManager_eventGetObjectCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvoidanceManager_eventGetObjectCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Get the number of avoidance objects currently in the manager." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, nullptr, "GetObjectCount", sizeof(AvoidanceManager_eventGetObjectCount_Parms), Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvoidanceManager_GetObjectCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics
	{
		struct AvoidanceManager_eventRegisterMovementComponent_Parms
		{
			UMovementComponent* MovementComp;
			float AvoidanceWeight;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AvoidanceManager_eventRegisterMovementComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AvoidanceManager_eventRegisterMovementComponent_Parms), &Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_AvoidanceWeight = { "AvoidanceWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvoidanceManager_eventRegisterMovementComponent_Parms, AvoidanceWeight), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_MovementComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvoidanceManager_eventRegisterMovementComponent_Parms, MovementComp), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_MovementComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_MovementComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_AvoidanceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_MovementComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "CPP_Default_AvoidanceWeight", "0.500000" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Register with the given avoidance manager.\n@param AvoidanceWeight      When avoiding each other, actors divert course in proportion to their relative weights. Range is 0.0 to 1.0. Special: at 1.0, actor will not divert course at all." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, nullptr, "RegisterMovementComponent", sizeof(AvoidanceManager_eventRegisterMovementComponent_Parms), Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister()
	{
		return UAvoidanceManager::StaticClass();
	}
	struct Z_Construct_UClass_UAvoidanceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightCheckMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightCheckMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestHeightDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestHeightDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArtificialRadiusExpansion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArtificialRadiusExpansion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTimeToPredict_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeToPredict;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockTimeAfterClean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockTimeAfterClean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockTimeAfterAvoid_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockTimeAfterAvoid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTimeToLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultTimeToLive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvoidanceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAvoidanceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent, "GetAvoidanceVelocityForComponent" }, // 2665836492
		{ &Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID, "GetNewAvoidanceUID" }, // 3350827141
		{ &Z_Construct_UFunction_UAvoidanceManager_GetObjectCount, "GetObjectCount" }, // 959821044
		{ &Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent, "RegisterMovementComponent" }, // 879051291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvoidanceManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/Navigation/AvoidanceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_HeightCheckMargin_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Allowable height margin between obstacles and agents. This is over and above the difference in agent heights." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_HeightCheckMargin = { "HeightCheckMargin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvoidanceManager, HeightCheckMargin), METADATA_PARAMS(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_HeightCheckMargin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_HeightCheckMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_TestHeightDifference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Deprecated - use HeightCheckMargin, generally a much smaller value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_TestHeightDifference = { "TestHeightDifference", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvoidanceManager, TestHeightDifference_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_TestHeightDifference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_TestHeightDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_ArtificialRadiusExpansion_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Multiply the radius of all STORED avoidance objects by this value to allow a little extra room for avoidance maneuvers." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_ArtificialRadiusExpansion = { "ArtificialRadiusExpansion", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvoidanceManager, ArtificialRadiusExpansion), METADATA_PARAMS(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_ArtificialRadiusExpansion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_ArtificialRadiusExpansion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DeltaTimeToPredict_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "This is how far forward in time (seconds) we extend our velocity cones and thus our prediction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DeltaTimeToPredict = { "DeltaTimeToPredict", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvoidanceManager, DeltaTimeToPredict), METADATA_PARAMS(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DeltaTimeToPredict_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DeltaTimeToPredict_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterClean_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "How long to stay on course (barring collision) after making an unobstructed move (should be > 0.0, but can be less than a full frame)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterClean = { "LockTimeAfterClean", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvoidanceManager, LockTimeAfterClean), METADATA_PARAMS(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterClean_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterClean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterAvoid_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "How long to stay on course (barring collision) after making an avoidance move" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterAvoid = { "LockTimeAfterAvoid", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvoidanceManager, LockTimeAfterAvoid), METADATA_PARAMS(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterAvoid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterAvoid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DefaultTimeToLive_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "How long an avoidance UID must not be updated before the system will put it back in the pool. Actual delay is up to 150% of this value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DefaultTimeToLive = { "DefaultTimeToLive", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvoidanceManager, DefaultTimeToLive), METADATA_PARAMS(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DefaultTimeToLive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DefaultTimeToLive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvoidanceManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_HeightCheckMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_TestHeightDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_ArtificialRadiusExpansion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DeltaTimeToPredict,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterClean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterAvoid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DefaultTimeToLive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvoidanceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvoidanceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAvoidanceManager_Statics::ClassParams = {
		&UAvoidanceManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAvoidanceManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAvoidanceManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvoidanceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAvoidanceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAvoidanceManager, 1307450774);
	template<> ENGINE_API UClass* StaticClass<UAvoidanceManager>()
	{
		return UAvoidanceManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAvoidanceManager(Z_Construct_UClass_UAvoidanceManager, &UAvoidanceManager::StaticClass, TEXT("/Script/Engine"), TEXT("UAvoidanceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvoidanceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AIPerceptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionComponent() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "ActorPerceptionUpdatedDelegate__DelegateSignature", sizeof(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventPerceptionUpdatedDelegate_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventPerceptionUpdatedDelegate_Parms, UpdatedActors), METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "PerceptionUpdatedDelegate__DelegateSignature", sizeof(_Script_AIModule_eventPerceptionUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FActorPerceptionBlueprintInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo, Z_Construct_UPackage__Script_AIModule(), TEXT("ActorPerceptionBlueprintInfo"), sizeof(FActorPerceptionBlueprintInfo), Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FActorPerceptionBlueprintInfo>()
{
	return FActorPerceptionBlueprintInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorPerceptionBlueprintInfo(FActorPerceptionBlueprintInfo::StaticStruct, TEXT("/Script/AIModule"), TEXT("ActorPerceptionBlueprintInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo
{
	FScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorPerceptionBlueprintInfo")),new UScriptStruct::TCppStructOps<FActorPerceptionBlueprintInfo>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo;
	struct Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHostile_MetaData[];
#endif
		static void NewProp_bIsHostile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHostile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSensedStimuli_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastSensedStimuli;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSensedStimuli_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Sensed Actor's Data" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPerceptionBlueprintInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_SetBit(void* Obj)
	{
		((FActorPerceptionBlueprintInfo*)Obj)->bIsHostile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile = { "bIsHostile", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FActorPerceptionBlueprintInfo), &Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli = { "LastSensedStimuli", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorPerceptionBlueprintInfo, LastSensedStimuli), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_Inner = { "LastSensedStimuli", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorPerceptionBlueprintInfo, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"ActorPerceptionBlueprintInfo",
		sizeof(FActorPerceptionBlueprintInfo),
		alignof(FActorPerceptionBlueprintInfo),
		Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorPerceptionBlueprintInfo"), sizeof(FActorPerceptionBlueprintInfo), Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Hash() { return 2424766277U; }
	void UAIPerceptionComponent::StaticRegisterNativesUAIPerceptionComponent()
	{
		UClass* Class = UAIPerceptionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorsPerception", &UAIPerceptionComponent::execGetActorsPerception },
			{ "GetCurrentlyPerceivedActors", &UAIPerceptionComponent::execGetCurrentlyPerceivedActors },
			{ "GetKnownPerceivedActors", &UAIPerceptionComponent::execGetKnownPerceivedActors },
			{ "GetPerceivedActors", &UAIPerceptionComponent::execGetPerceivedActors },
			{ "GetPerceivedHostileActors", &UAIPerceptionComponent::execGetPerceivedHostileActors },
			{ "OnOwnerEndPlay", &UAIPerceptionComponent::execOnOwnerEndPlay },
			{ "RequestStimuliListenerUpdate", &UAIPerceptionComponent::execRequestStimuliListenerUpdate },
			{ "SetSenseEnabled", &UAIPerceptionComponent::execSetSenseEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics
	{
		struct AIPerceptionComponent_eventGetActorsPerception_Parms
		{
			AActor* Actor;
			FActorPerceptionBlueprintInfo Info;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIPerceptionComponent_eventGetActorsPerception_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIPerceptionComponent_eventGetActorsPerception_Parms), &Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetActorsPerception_Parms, Info), Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetActorsPerception_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Retrieves whatever has been sensed about given actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetActorsPerception", sizeof(AIPerceptionComponent_eventGetActorsPerception_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics
	{
		struct AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_SenseToUse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "If SenseToUse is none all actors currently perceived in any way will get fetched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetCurrentlyPerceivedActors", sizeof(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics
	{
		struct AIPerceptionComponent_eventGetKnownPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_SenseToUse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "If SenseToUse is none all actors ever perceived in any way (and not forgotten yet) will get fetched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetKnownPerceivedActors", sizeof(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics
	{
		struct AIPerceptionComponent_eventGetPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedActors_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_SenseToUse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetPerceivedActors", sizeof(AIPerceptionComponent_eventGetPerceivedActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics
	{
		struct AIPerceptionComponent_eventGetPerceivedHostileActors_Parms
		{
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedHostileActors_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "blueprint interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetPerceivedHostileActors", sizeof(AIPerceptionComponent_eventGetPerceivedHostileActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics
	{
		struct AIPerceptionComponent_eventOnOwnerEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventOnOwnerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventOnOwnerEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_EndPlayReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "OnOwnerEndPlay", sizeof(AIPerceptionComponent_eventOnOwnerEndPlay_Parms), Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Notifies AIPerceptionSystem to update properties for this \"stimuli listener\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "RequestStimuliListenerUpdate", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics
	{
		struct AIPerceptionComponent_eventSetSenseEnabled_Parms
		{
			TSubclassOf<UAISense>  SenseClass;
			bool bEnable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AIPerceptionComponent_eventSetSenseEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIPerceptionComponent_eventSetSenseEnabled_Parms), &Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventSetSenseEnabled_Parms, SenseClass), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_SenseClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Note that this works only if given sense has been already configured for\n    this component instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "SetSenseEnabled", sizeof(AIPerceptionComponent_eventSetSenseEnabled_Parms), Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister()
	{
		return UAIPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAIPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetPerceptionUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetPerceptionUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPerceptionUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerceptionUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DominantSense_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DominantSense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensesConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SensesConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensesConfig_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensesConfig_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIPerceptionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception, "GetActorsPerception" }, // 326885406
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors, "GetCurrentlyPerceivedActors" }, // 1470829468
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors, "GetKnownPerceivedActors" }, // 2422786958
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors, "GetPerceivedActors" }, // 3495767014
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors, "GetPerceivedHostileActors" }, // 258027039
		{ &Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay, "OnOwnerEndPlay" }, // 1222085696
		{ &Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate, "RequestStimuliListenerUpdate" }, // 2338996836
		{ &Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled, "SetSenseEnabled" }, // 3280476062
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "Perception/AIPerceptionComponent.h" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "AIPerceptionComponent is used to register as stimuli listener in AIPerceptionSystem\nand gathers registered stimuli. UpdatePerception is called when component gets new stimuli (batched)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated = { "OnTargetPerceptionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, OnTargetPerceptionUpdated), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Might want to move these to special \"BP_AIPerceptionComponent\"" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated = { "OnPerceptionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, OnPerceptionUpdated), Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Indicated sense that takes precedence over other senses when determining sensed actor's location.\n    Should be set to one of the senses configured in SensesConfig, or None." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense = { "DominantSense", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, DominantSense), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig = { "SensesConfig", nullptr, (EPropertyFlags)0x0020088000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, SensesConfig), METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner = { "SensesConfig", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISenseConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIPerceptionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIPerceptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionComponent_Statics::ClassParams = {
		&UAIPerceptionComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIPerceptionComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIPerceptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIPerceptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIPerceptionComponent, 143748995);
	template<> AIMODULE_API UClass* StaticClass<UAIPerceptionComponent>()
	{
		return UAIPerceptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPerceptionComponent(Z_Construct_UClass_UAIPerceptionComponent, &UAIPerceptionComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIPerceptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

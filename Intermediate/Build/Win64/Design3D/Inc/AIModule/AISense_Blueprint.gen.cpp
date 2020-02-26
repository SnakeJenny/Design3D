// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISense_Blueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Blueprint() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnUpdate();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
// End Cross Module References
	static FName NAME_UAISense_Blueprint_K2_OnNewPawn = FName(TEXT("K2_OnNewPawn"));
	void UAISense_Blueprint::K2_OnNewPawn(APawn* NewPawn)
	{
		AISense_Blueprint_eventK2_OnNewPawn_Parms Parms;
		Parms.NewPawn=NewPawn;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_K2_OnNewPawn),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerRegistered = FName(TEXT("OnListenerRegistered"));
	void UAISense_Blueprint::OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerRegistered_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerRegistered),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerUnregistered = FName(TEXT("OnListenerUnregistered"));
	void UAISense_Blueprint::OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerUnregistered_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerUnregistered),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerUpdated = FName(TEXT("OnListenerUpdated"));
	void UAISense_Blueprint::OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerUpdated_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerUpdated),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnUpdate = FName(TEXT("OnUpdate"));
	float UAISense_Blueprint::OnUpdate(TArray<UAISenseEvent*> const& EventsToProcess)
	{
		AISense_Blueprint_eventOnUpdate_Parms Parms;
		Parms.EventsToProcess=EventsToProcess;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnUpdate),&Parms);
		return Parms.ReturnValue;
	}
	void UAISense_Blueprint::StaticRegisterNativesUAISense_Blueprint()
	{
		UClass* Class = UAISense_Blueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllListenerActors", &UAISense_Blueprint::execGetAllListenerActors },
			{ "GetAllListenerComponents", &UAISense_Blueprint::execGetAllListenerComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics
	{
		struct AISense_Blueprint_eventGetAllListenerActors_Parms
		{
			TArray<AActor*> ListenerActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListenerActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenerActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors = { "ListenerActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventGetAllListenerActors_Parms, ListenerActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors_Inner = { "ListenerActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "GetAllListenerActors", sizeof(AISense_Blueprint_eventGetAllListenerActors_Parms), Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics
	{
		struct AISense_Blueprint_eventGetAllListenerComponents_Parms
		{
			TArray<UAIPerceptionComponent*> ListenerComponents;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListenerComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenerComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents = { "ListenerComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventGetAllListenerComponents_Parms, ListenerComponents), METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_Inner = { "ListenerComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "GetAllListenerComponents", sizeof(AISense_Blueprint_eventGetAllListenerComponents_Parms), Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventK2_OnNewPawn_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::NewProp_NewPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnNewPawn" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ScriptName", "OnNewPawn" },
		{ "ToolTip", "called when sense's instance gets notified about new pawn that has just been spawned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "K2_OnNewPawn", sizeof(AISense_Blueprint_eventK2_OnNewPawn_Parms), Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerRegistered_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_ActorListener = { "ActorListener", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerRegistered_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_ActorListener,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "@param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnListenerRegistered", sizeof(AISense_Blueprint_eventOnListenerRegistered_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUnregistered_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_ActorListener = { "ActorListener", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUnregistered_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_ActorListener,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "called when a listener unregistered from this sense. Most often this is called due to actor's death\n    @param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnListenerUnregistered", sizeof(AISense_Blueprint_eventOnListenerUnregistered_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUpdated_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_ActorListener = { "ActorListener", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUpdated_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_ActorListener,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "@param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnListenerUpdated", sizeof(AISense_Blueprint_eventOnListenerUpdated_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsToProcess_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventsToProcess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventsToProcess_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnUpdate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess = { "EventsToProcess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnUpdate_Parms, EventsToProcess), METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_Inner = { "EventsToProcess", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "returns requested amount of time to pass until next frame.\n    Return 0 to get update every frame (WARNING: hits performance)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnUpdate", sizeof(AISense_Blueprint_eventOnUpdate_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister()
	{
		return UAISense_Blueprint::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Blueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnprocessedEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnprocessedEvents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnprocessedEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListenerContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenerContainer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ListenerDataType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Blueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISense_Blueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors, "GetAllListenerActors" }, // 1222692087
		{ &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents, "GetAllListenerComponents" }, // 99056967
		{ &Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn, "K2_OnNewPawn" }, // 162696858
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered, "OnListenerRegistered" }, // 2457628065
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered, "OnListenerUnregistered" }, // 1557290901
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated, "OnListenerUpdated" }, // 458819765
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnUpdate, "OnUpdate" }, // 1132593914
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Blueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents = { "UnprocessedEvents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Blueprint, UnprocessedEvents), METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_Inner = { "UnprocessedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_MetaData[] = {
		{ "Category", "Sense" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer = { "ListenerContainer", nullptr, (EPropertyFlags)0x002008800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Blueprint, ListenerContainer), METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_Inner = { "ListenerContainer", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType = { "ListenerDataType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Blueprint, ListenerDataType), Z_Construct_UClass_UUserDefinedStruct_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Blueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Blueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Blueprint_Statics::ClassParams = {
		&UAISense_Blueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers),
		0,
		0x049000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Blueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Blueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Blueprint, 665487856);
	template<> AIMODULE_API UClass* StaticClass<UAISense_Blueprint>()
	{
		return UAISense_Blueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Blueprint(Z_Construct_UClass_UAISense_Blueprint, &UAISense_Blueprint::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Blueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Blueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

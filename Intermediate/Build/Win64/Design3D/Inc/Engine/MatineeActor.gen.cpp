// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/MatineeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeActor() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpGroupActorInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraCutInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_EnableGroupByName();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_Pause();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_Play();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_Reverse();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_SetLoopingState();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_SetPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_Stop();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpData_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Signature of function to handle a matinee event track key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnMatineeEvent__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FInterpGroupActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpGroupActorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpGroupActorInfo, Z_Construct_UPackage__Script_Engine(), TEXT("InterpGroupActorInfo"), sizeof(FInterpGroupActorInfo), Get_Z_Construct_UScriptStruct_FInterpGroupActorInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInterpGroupActorInfo>()
{
	return FInterpGroupActorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpGroupActorInfo(FInterpGroupActorInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpGroupActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpGroupActorInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpGroupActorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpGroupActorInfo")),new UScriptStruct::TCppStructOps<FInterpGroupActorInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpGroupActorInfo;
	struct Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "A group and all the actors controlled by the group" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpGroupActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "InterpGroupActorInfo" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpGroupActorInfo, Actors), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_Actors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "InterpGroupActorInfo" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpGroupActorInfo, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_ObjectName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_ObjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::NewProp_ObjectName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InterpGroupActorInfo",
		sizeof(FInterpGroupActorInfo),
		alignof(FInterpGroupActorInfo),
		Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpGroupActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpGroupActorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpGroupActorInfo"), sizeof(FInterpGroupActorInfo), Get_Z_Construct_UScriptStruct_FInterpGroupActorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpGroupActorInfo_Hash() { return 814132740U; }
class UScriptStruct* FCameraCutInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraCutInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraCutInfo, Z_Construct_UPackage__Script_Engine(), TEXT("CameraCutInfo"), sizeof(FCameraCutInfo), Get_Z_Construct_UScriptStruct_FCameraCutInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraCutInfo>()
{
	return FCameraCutInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraCutInfo(FCameraCutInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraCutInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraCutInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraCutInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraCutInfo")),new UScriptStruct::TCppStructOps<FCameraCutInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraCutInfo;
	struct Z_Construct_UScriptStruct_FCameraCutInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraCutInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Helper struct for storing the camera world-position for each camera cut in the cinematic." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraCutInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraCutInfo, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewProp_TimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraCutInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraCutInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCutInfo_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraCutInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraCutInfo",
		sizeof(FCameraCutInfo),
		alignof(FCameraCutInfo),
		Z_Construct_UScriptStruct_FCameraCutInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCutInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraCutInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCutInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraCutInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraCutInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraCutInfo"), sizeof(FCameraCutInfo), Get_Z_Construct_UScriptStruct_FCameraCutInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraCutInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraCutInfo_Hash() { return 2493831145U; }
	void AMatineeActor::StaticRegisterNativesAMatineeActor()
	{
		UClass* Class = AMatineeActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangePlaybackDirection", &AMatineeActor::execChangePlaybackDirection },
			{ "EnableGroupByName", &AMatineeActor::execEnableGroupByName },
			{ "Pause", &AMatineeActor::execPause },
			{ "Play", &AMatineeActor::execPlay },
			{ "Reverse", &AMatineeActor::execReverse },
			{ "SetLoopingState", &AMatineeActor::execSetLoopingState },
			{ "SetPosition", &AMatineeActor::execSetPosition },
			{ "Stop", &AMatineeActor::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Changes the direction of playback (go in reverse if it was going forward, or vice versa)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, nullptr, "ChangePlaybackDirection", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics
	{
		struct MatineeActor_eventEnableGroupByName_Parms
		{
			FString GroupName;
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((MatineeActor_eventEnableGroupByName_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatineeActor_eventEnableGroupByName_Parms), &Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeActor_eventEnableGroupByName_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::NewProp_GroupName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, nullptr, "EnableGroupByName", sizeof(MatineeActor_eventEnableGroupByName_Parms), Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMatineeActor_EnableGroupByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMatineeActor_EnableGroupByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMatineeActor_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMatineeActor_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Hold playback at its current position. Calling Pause again will continue playback in its current direction." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMatineeActor_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, nullptr, "Pause", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMatineeActor_Pause_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMatineeActor_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMatineeActor_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMatineeActor_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMatineeActor_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Begin playback of the matinee. Only called in game.\nWill then advance Position by (PlayRate * Deltatime) each time the matinee is ticked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMatineeActor_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, nullptr, "Play", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMatineeActor_Play_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMatineeActor_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMatineeActor_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMatineeActor_Reverse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMatineeActor_Reverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Similar to play, but the playback will go backwards until the beginning of the sequence is reached." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMatineeActor_Reverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, nullptr, "Reverse", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMatineeActor_Reverse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_Reverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMatineeActor_Reverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMatineeActor_Reverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics
	{
		struct MatineeActor_eventSetLoopingState_Parms
		{
			bool bNewLooping;
		};
		static void NewProp_bNewLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::NewProp_bNewLooping_SetBit(void* Obj)
	{
		((MatineeActor_eventSetLoopingState_Parms*)Obj)->bNewLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::NewProp_bNewLooping = { "bNewLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatineeActor_eventSetLoopingState_Parms), &Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::NewProp_bNewLooping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Change the looping behaviour of this matinee" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, nullptr, "SetLoopingState", sizeof(MatineeActor_eventSetLoopingState_Parms), Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMatineeActor_SetLoopingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMatineeActor_SetLoopingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMatineeActor_SetPosition_Statics
	{
		struct MatineeActor_eventSetPosition_Parms
		{
			float NewPosition;
			bool bJump;
		};
		static void NewProp_bJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJump;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::NewProp_bJump_SetBit(void* Obj)
	{
		((MatineeActor_eventSetPosition_Parms*)Obj)->bJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::NewProp_bJump = { "bJump", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatineeActor_eventSetPosition_Parms), &Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::NewProp_bJump_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeActor_eventSetPosition_Parms, NewPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::NewProp_bJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic" },
		{ "CPP_Default_bJump", "false" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Set the position of the interpolation.\n@note if the interpolation is not currently active, this function doesn't send any Kismet events\n@param NewPosition the new position to set the interpolation to\n@param bJump if true, teleport to the new position (don't trigger any events between the old and new positions, etc)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, nullptr, "SetPosition", sizeof(MatineeActor_eventSetPosition_Parms), Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMatineeActor_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMatineeActor_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMatineeActor_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMatineeActor_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Stops playback at the current position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMatineeActor_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, nullptr, "Stop", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMatineeActor_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMatineeActor_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMatineeActor_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMatineeActor_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMatineeActor_NoRegister()
	{
		return AMatineeActor::StaticClass();
	}
	struct Z_Construct_UClass_AMatineeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPause_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPause;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationForceIsPlaying_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReplicationForceIsPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingStop_MetaData[];
#endif
		static void NewProp_bPendingStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaused_MetaData[];
#endif
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[];
#endif
		static void NewProp_bReversePlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[];
#endif
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScrubbing_MetaData[];
#endif
		static void NewProp_bIsScrubbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScrubbing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBeingEdited_MetaData[];
#endif
		static void NewProp_bIsBeingEdited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBeingEdited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCuts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraCuts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraCuts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupInst;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupInst_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldShowGore_MetaData[];
#endif
		static void NewProp_bShouldShowGore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldShowGore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupActorInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupActorInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupActorInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideHud_MetaData[];
#endif
		static void NewProp_bHideHud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideHud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidePlayer_MetaData[];
#endif
		static void NewProp_bHidePlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableLookAtInput_MetaData[];
#endif
		static void NewProp_bDisableLookAtInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableLookAtInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMovementInput_MetaData[];
#endif
		static void NewProp_bDisableMovementInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMovementInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredSplitScreenNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreferredSplitScreenNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSkippable_MetaData[];
#endif
		static void NewProp_bIsSkippable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSkippable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipUpdateIfNotVisible_MetaData[];
#endif
		static void NewProp_bSkipUpdateIfNotVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipUpdateIfNotVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClientSideOnly_MetaData[];
#endif
		static void NewProp_bClientSideOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientSideOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableRadioFilter_MetaData[];
#endif
		static void NewProp_bDisableRadioFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableRadioFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRewindIfAlreadyPlaying_MetaData[];
#endif
		static void NewProp_bRewindIfAlreadyPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRewindIfAlreadyPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoResetOnRewind_MetaData[];
#endif
		static void NewProp_bNoResetOnRewind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoResetOnRewind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRewindOnPlay_MetaData[];
#endif
		static void NewProp_bRewindOnPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRewindOnPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceStartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceStartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceStartPos_MetaData[];
#endif
		static void NewProp_bForceStartPos_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceStartPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayOnLevelLoad_MetaData[];
#endif
		static void NewProp_bPlayOnLevelLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayOnLevelLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatineeControllerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MatineeControllerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatineeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatineeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMatineeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMatineeActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection, "ChangePlaybackDirection" }, // 2669944171
		{ &Z_Construct_UFunction_AMatineeActor_EnableGroupByName, "EnableGroupByName" }, // 1772740037
		{ &Z_Construct_UFunction_AMatineeActor_Pause, "Pause" }, // 982232032
		{ &Z_Construct_UFunction_AMatineeActor_Play, "Play" }, // 2153584690
		{ &Z_Construct_UFunction_AMatineeActor_Reverse, "Reverse" }, // 3347171302
		{ &Z_Construct_UFunction_AMatineeActor_SetLoopingState, "SetLoopingState" }, // 732989541
		{ &Z_Construct_UFunction_AMatineeActor_SetPosition, "SetPosition" }, // 3736790824
		{ &Z_Construct_UFunction_AMatineeActor_Stop, "Stop" }, // 3232234076
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Game Input" },
		{ "IncludePath", "Matinee/MatineeActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput Game|Damage" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnPause_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Event triggered when the matinee is paused for whatever reason" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnPause = { "OnPause", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, OnPause), Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnPause_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnPause_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnStop_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Event triggered when the matinee is stopped for whatever reason" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnStop = { "OnStop", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, OnStop), Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnStop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnPlay_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Event triggered when the matinee is played for whatever reason" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnPlay = { "OnPlay", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, OnPlay), Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_ReplicationForceIsPlaying_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Counter to indicate that play count has changed. Used to work around single frames that go from play-stop-play where bIsPlaying won't get replicated." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_ReplicationForceIsPlaying = { "ReplicationForceIsPlaying", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, ReplicationForceIsPlaying), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_ReplicationForceIsPlaying_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_ReplicationForceIsPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_InterpPosition_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_InterpPosition = { "InterpPosition", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, InterpPosition), METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_InterpPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_InterpPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPendingStop_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "The below property is deprecated and will be removed in 4.9." },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPendingStop_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bPendingStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPendingStop = { "bPendingStop", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPendingStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPendingStop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPendingStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPaused_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPaused_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bReversePlayback_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bReversePlayback_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bReversePlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bReversePlayback = { "bReversePlayback", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bReversePlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bReversePlayback_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bReversePlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsPlaying_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "properties that may change on InterpAction that we need to notify clients about, since the object's properties will not be replicated" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000022035, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsPlaying_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsPlaying_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsScrubbing_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Set by the editor when scrubbing data" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsScrubbing_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bIsScrubbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsScrubbing = { "bIsScrubbing", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsScrubbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsScrubbing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsScrubbing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsBeingEdited_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsBeingEdited_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bIsBeingEdited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsBeingEdited = { "bIsBeingEdited", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsBeingEdited_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsBeingEdited_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsBeingEdited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_CameraCuts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Contains the camera world-position for each camera cut in the cinematic." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_CameraCuts = { "CameraCuts", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, CameraCuts), METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_CameraCuts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_CameraCuts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_CameraCuts_Inner = { "CameraCuts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCameraCutInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupInst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Instance data for interp groups. One for each variable/group combination." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupInst = { "GroupInst", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, GroupInst), METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupInst_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupInst_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupInst_Inner = { "GroupInst", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpGroupInst_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bShouldShowGore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Cached value that indicates whether or not gore was enabled when the sequence was started" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bShouldShowGore_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bShouldShowGore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bShouldShowGore = { "bShouldShowGore", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bShouldShowGore_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bShouldShowGore_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bShouldShowGore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupActorInfos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "@todo UE4 matinee - shouldnt be directly editable.  Needs a nice interface in matinee" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupActorInfos = { "GroupActorInfos", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, GroupActorInfos), METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupActorInfos_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupActorInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupActorInfos_Inner = { "GroupActorInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInterpGroupActorInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHideHud_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Hide HUD during play" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHideHud_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bHideHud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHideHud = { "bHideHud", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHideHud_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHideHud_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHideHud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHidePlayer_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Hide Player Pawn during play" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHidePlayer_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bHidePlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHidePlayer = { "bHidePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHidePlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHidePlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHidePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableLookAtInput_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Disable LookAt Input from player during play" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableLookAtInput_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bDisableLookAtInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableLookAtInput = { "bDisableLookAtInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableLookAtInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableLookAtInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableLookAtInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableMovementInput_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Disable Input from player during play" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableMovementInput_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bDisableMovementInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableMovementInput = { "bDisableMovementInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableMovementInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableMovementInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableMovementInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_PreferredSplitScreenNum_MetaData[] = {
		{ "Category", "MatineeActor" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Preferred local viewport number (when split screen is active) the director track should associate with, or zero for 'all'." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_PreferredSplitScreenNum = { "PreferredSplitScreenNum", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, PreferredSplitScreenNum), METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_PreferredSplitScreenNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_PreferredSplitScreenNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsSkippable_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Lets you skip the matinee with the CANCELMATINEE exec command. Triggers all events to the end along the way." },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsSkippable_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bIsSkippable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsSkippable = { "bIsSkippable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsSkippable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsSkippable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsSkippable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bSkipUpdateIfNotVisible_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "if bClientSideOnly is true, whether this matinee should be completely skipped if none of the affected Actors are visible" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bSkipUpdateIfNotVisible_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bSkipUpdateIfNotVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bSkipUpdateIfNotVisible = { "bSkipUpdateIfNotVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bSkipUpdateIfNotVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bSkipUpdateIfNotVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bSkipUpdateIfNotVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bClientSideOnly_MetaData[] = {
		{ "Category", "MatineeActor" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Indicates that this interpolation does not affect gameplay. This means that:\n-it is not replicated via MatineeActor\n-it is not ticked if no affected Actors are visible\n-on dedicated servers, it is completely ignored" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bClientSideOnly_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bClientSideOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bClientSideOnly = { "bClientSideOnly", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bClientSideOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bClientSideOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bClientSideOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableRadioFilter_MetaData[] = {
		{ "Category", "MatineeActor" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "If true, disables the realtime radio effect" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableRadioFilter_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bDisableRadioFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableRadioFilter = { "bDisableRadioFilter", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableRadioFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableRadioFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableRadioFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindIfAlreadyPlaying_MetaData[] = {
		{ "Category", "Rewind" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Only used if bRewindOnPlay if true. Defines what should happen if the Play input is activated while currently playing.\nIf true, hitting Play while currently playing will pop the position back to the start and begin playback over again.\nIf false, hitting Play while currently playing will do nothing." },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindIfAlreadyPlaying_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bRewindIfAlreadyPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindIfAlreadyPlaying = { "bRewindIfAlreadyPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindIfAlreadyPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindIfAlreadyPlaying_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindIfAlreadyPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bNoResetOnRewind_MetaData[] = {
		{ "Category", "Rewind" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "If true, when rewinding this interpolation, reset the 'initial positions' of any RelateToInitial movements to the current location.\nThis allows the next loop of movement to proceed from the current locations." },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bNoResetOnRewind_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bNoResetOnRewind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bNoResetOnRewind = { "bNoResetOnRewind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bNoResetOnRewind_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bNoResetOnRewind_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bNoResetOnRewind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindOnPlay_MetaData[] = {
		{ "Category", "Rewind" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "If true, sequence will rewind itself back to the start each time the Play input is activated." },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindOnPlay_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bRewindOnPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindOnPlay = { "bRewindOnPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindOnPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindOnPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindOnPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "If sequence should pop back to beginning when finished.\nNote, if true, will never get Completed/Reversed events - sequence must be explicitly Stopped." },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_ForceStartPosition_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Time position to always start at if bForceStartPos is set to true." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_ForceStartPosition = { "ForceStartPosition", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, ForceStartPosition), METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_ForceStartPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_ForceStartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bForceStartPos_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Lets you force the sequence to always start at ForceStartPosition" },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bForceStartPos_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bForceStartPos = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bForceStartPos = { "bForceStartPos", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bForceStartPos_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bForceStartPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bForceStartPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPlayOnLevelLoad_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "If true, the matinee will play when the level is loaded." },
	};
#endif
	void Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPlayOnLevelLoad_SetBit(void* Obj)
	{
		((AMatineeActor*)Obj)->bPlayOnLevelLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPlayOnLevelLoad = { "bPlayOnLevelLoad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMatineeActor), &Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPlayOnLevelLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPlayOnLevelLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPlayOnLevelLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Time multiplier for playback." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, PlayRate), METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_PlayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_MatineeControllerName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "Name of controller node in level script, used to know what function to try and find for events" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_MatineeControllerName = { "MatineeControllerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, MatineeControllerName), METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_MatineeControllerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_MatineeControllerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActor_Statics::NewProp_MatineeData_MetaData[] = {
		{ "Category", "MatineeActor" },
		{ "ForceRebuildProperty", "GroupActorInfos" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
		{ "ToolTip", "The matinee data used by this actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMatineeActor_Statics::NewProp_MatineeData = { "MatineeData", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActor, MatineeData), Z_Construct_UClass_UInterpData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::NewProp_MatineeData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::NewProp_MatineeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMatineeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_OnPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_ReplicationForceIsPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_InterpPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPendingStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bReversePlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsPlaying,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsScrubbing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsBeingEdited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_CameraCuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_CameraCuts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupInst_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bShouldShowGore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupActorInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_GroupActorInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHideHud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bHidePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableLookAtInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableMovementInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_PreferredSplitScreenNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bIsSkippable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bSkipUpdateIfNotVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bClientSideOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bDisableRadioFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindIfAlreadyPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bNoResetOnRewind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bRewindOnPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_ForceStartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bForceStartPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_bPlayOnLevelLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_MatineeControllerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActor_Statics::NewProp_MatineeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMatineeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMatineeActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMatineeActor_Statics::ClassParams = {
		&AMatineeActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMatineeActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMatineeActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMatineeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMatineeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMatineeActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMatineeActor, 3456810634);
	template<> ENGINE_API UClass* StaticClass<AMatineeActor>()
	{
		return AMatineeActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMatineeActor(Z_Construct_UClass_AMatineeActor, &AMatineeActor::StaticClass, TEXT("/Script/Engine"), TEXT("AMatineeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMatineeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCamera/Public/CineCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraActor() {}
// Cross Module References
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	CINEMATICCAMERA_API UFunction* Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FCameraLookatTrackingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraLookatTrackingSettings"), sizeof(FCameraLookatTrackingSettings), Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Hash());
	}
	return Singleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraLookatTrackingSettings>()
{
	return FCameraLookatTrackingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraLookatTrackingSettings(FCameraLookatTrackingSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraLookatTrackingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLookatTrackingSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLookatTrackingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraLookatTrackingSettings")),new UScriptStruct::TCppStructOps<FCameraLookatTrackingSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLookatTrackingSettings;
	struct Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRoll_MetaData[];
#endif
		static void NewProp_bAllowRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActorToTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtTrackingInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAtTrackingInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLookAtTrackingPosition_MetaData[];
#endif
		static void NewProp_bDrawDebugLookAtTrackingPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLookAtTrackingPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLookAtTracking_MetaData[];
#endif
		static void NewProp_bEnableLookAtTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLookAtTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "Settings to control the camera's lookat feature" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraLookatTrackingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "True to allow user-defined roll, false otherwise." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_SetBit(void* Obj)
	{
		((FCameraLookatTrackingSettings*)Obj)->bAllowRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll = { "bAllowRoll", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FCameraLookatTrackingSettings), &Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "Offset from actor position to look at. Relative to actor if tracking an actor, relative to world otherwise." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLookatTrackingSettings, RelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_RelativeOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_RelativeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_ActorToTrack_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "If set, camera will track this actor's location" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0014000200000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLookatTrackingSettings, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_ActorToTrack_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_ActorToTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_LookAtTrackingInterpSpeed_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "Controls degree of smoothing. 0.f for no smoothing, higher numbers for faster/tighter tracking." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_LookAtTrackingInterpSpeed = { "LookAtTrackingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLookatTrackingSettings, LookAtTrackingInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_LookAtTrackingInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_LookAtTrackingInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "True to draw a debug representation of the lookat location" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition_SetBit(void* Obj)
	{
		((FCameraLookatTrackingSettings*)Obj)->bDrawDebugLookAtTrackingPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition = { "bDrawDebugLookAtTrackingPosition", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FCameraLookatTrackingSettings), &Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "True to enable lookat tracking, false otherwise." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking_SetBit(void* Obj)
	{
		((FCameraLookatTrackingSettings*)Obj)->bEnableLookAtTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking = { "bEnableLookAtTracking", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FCameraLookatTrackingSettings), &Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_RelativeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_ActorToTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_LookAtTrackingInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraLookatTrackingSettings",
		sizeof(FCameraLookatTrackingSettings),
		alignof(FCameraLookatTrackingSettings),
		Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraLookatTrackingSettings"), sizeof(FCameraLookatTrackingSettings), Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Hash() { return 21399451U; }
	void ACineCameraActor::StaticRegisterNativesACineCameraActor()
	{
		UClass* Class = ACineCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCineCameraComponent", &ACineCameraActor::execGetCineCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics
	{
		struct CineCameraActor_eventGetCineCameraComponent_Parms
		{
			UCineCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraActor_eventGetCineCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "Returns the CineCameraComponent of this CineCamera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACineCameraActor, nullptr, "GetCineCameraComponent", sizeof(CineCameraActor_eventGetCineCameraComponent_Parms), Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACineCameraActor_NoRegister()
	{
		return ACineCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_ACineCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookatTrackingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookatTrackingSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACineCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACineCameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent, "GetCineCameraComponent" }, // 2598319674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "CineCameraActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A CineCameraActor is a CameraActor specialized to work like a cinematic camera." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraActor_Statics::NewProp_LookatTrackingSettings_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACineCameraActor_Statics::NewProp_LookatTrackingSettings = { "LookatTrackingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACineCameraActor, LookatTrackingSettings), Z_Construct_UScriptStruct_FCameraLookatTrackingSettings, METADATA_PARAMS(Z_Construct_UClass_ACineCameraActor_Statics::NewProp_LookatTrackingSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACineCameraActor_Statics::NewProp_LookatTrackingSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACineCameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraActor_Statics::NewProp_LookatTrackingSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACineCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACineCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACineCameraActor_Statics::ClassParams = {
		&ACineCameraActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACineCameraActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACineCameraActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACineCameraActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACineCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACineCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACineCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACineCameraActor, 1820497506);
	template<> CINEMATICCAMERA_API UClass* StaticClass<ACineCameraActor>()
	{
		return ACineCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACineCameraActor(Z_Construct_UClass_ACineCameraActor, &ACineCameraActor::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("ACineCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACineCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

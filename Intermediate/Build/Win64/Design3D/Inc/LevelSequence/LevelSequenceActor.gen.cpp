// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceActor() {}
// Cross Module References
	LEVELSEQUENCE_API UFunction* Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_LoadSequence();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "OnLevelSequenceLoaded__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FBoundActorProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundActorProxy, Z_Construct_UPackage__Script_LevelSequence(), TEXT("BoundActorProxy"), sizeof(FBoundActorProxy), Get_Z_Construct_UScriptStruct_FBoundActorProxy_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FBoundActorProxy>()
{
	return FBoundActorProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoundActorProxy(FBoundActorProxy::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("BoundActorProxy"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoundActorProxy")),new UScriptStruct::TCppStructOps<FBoundActorProxy>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy;
	struct Z_Construct_UScriptStruct_FBoundActorProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoundActorProxy>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Specifies the actor to override the binding with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010040800000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoundActorProxy, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoundActorProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"BoundActorProxy",
		sizeof(FBoundActorProxy),
		alignof(FBoundActorProxy),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoundActorProxy"), sizeof(FBoundActorProxy), Get_Z_Construct_UScriptStruct_FBoundActorProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoundActorProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_Hash() { return 579882137U; }
	void ULevelSequenceBurnInInitSettings::StaticRegisterNativesULevelSequenceBurnInInitSettings()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister()
	{
		return ULevelSequenceBurnInInitSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnInInitSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams = {
		&ULevelSequenceBurnInInitSettings::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceBurnInInitSettings, 3582271268);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceBurnInInitSettings>()
	{
		return ULevelSequenceBurnInInitSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnInInitSettings(Z_Construct_UClass_ULevelSequenceBurnInInitSettings, &ULevelSequenceBurnInInitSettings::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnInInitSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInInitSettings);
	void ULevelSequenceBurnInOptions::StaticRegisterNativesULevelSequenceBurnInOptions()
	{
		UClass* Class = ULevelSequenceBurnInOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBurnIn", &ULevelSequenceBurnInOptions::execSetBurnIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics
	{
		struct LevelSequenceBurnInOptions_eventSetBurnIn_Parms
		{
			FSoftClassPath InBurnInClass;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBurnInClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::NewProp_InBurnInClass = { "InBurnInClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceBurnInOptions_eventSetBurnIn_Parms, InBurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::NewProp_InBurnInClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Loads the specified class path and initializes an instance, then stores it in Settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnInOptions, nullptr, "SetBurnIn", sizeof(LevelSequenceBurnInOptions_eventSetBurnIn_Parms), Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister()
	{
		return ULevelSequenceBurnInOptions::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurnInClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBurnIn_MetaData[];
#endif
		static void NewProp_bUseBurnIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBurnIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn, "SetBurnIn" }, // 20088610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseBurnIn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceBurnInOptions, Settings), Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseBurnIn" },
		{ "MetaClass", "LevelSequenceBurnIn" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass = { "BurnInClass", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceBurnInOptions, BurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit(void* Obj)
	{
		((ULevelSequenceBurnInOptions*)Obj)->bUseBurnIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn = { "bUseBurnIn", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelSequenceBurnInOptions), &Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnInOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams = {
		&ULevelSequenceBurnInOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers),
		0,
		0x00B004A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceBurnInOptions, 427797671);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceBurnInOptions>()
	{
		return ULevelSequenceBurnInOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnInOptions(Z_Construct_UClass_ULevelSequenceBurnInOptions, &ULevelSequenceBurnInOptions::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnInOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInOptions);
	void ALevelSequenceActor::StaticRegisterNativesALevelSequenceActor()
	{
		UClass* Class = ALevelSequenceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBinding", &ALevelSequenceActor::execAddBinding },
			{ "GetSequence", &ALevelSequenceActor::execGetSequence },
			{ "GetSequencePlayer", &ALevelSequenceActor::execGetSequencePlayer },
			{ "LoadSequence", &ALevelSequenceActor::execLoadSequence },
			{ "RemoveBinding", &ALevelSequenceActor::execRemoveBinding },
			{ "ResetBinding", &ALevelSequenceActor::execResetBinding },
			{ "ResetBindings", &ALevelSequenceActor::execResetBindings },
			{ "SetBinding", &ALevelSequenceActor::execSetBinding },
			{ "SetEventReceivers", &ALevelSequenceActor::execSetEventReceivers },
			{ "SetReplicatePlayback", &ALevelSequenceActor::execSetReplicatePlayback },
			{ "SetSequence", &ALevelSequenceActor::execSetSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics
	{
		struct LevelSequenceActor_eventAddBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
			bool bAllowBindingsFromAsset;
		};
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventAddBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelSequenceActor_eventAddBinding_Parms), &Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset\n\n@param Binding Binding to modify\n@param Actor Actor to bind\n@param bAllowBindingsFromAsset Allow bindings from the level sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "AddBinding", sizeof(LevelSequenceActor_eventAddBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics
	{
		struct LevelSequenceActor_eventGetSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Get the level sequence being played by this actor.\n\n@return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n@see SetSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "GetSequence", sizeof(LevelSequenceActor_eventGetSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics
	{
		struct LevelSequenceActor_eventGetSequencePlayer_Parms
		{
			ULevelSequencePlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventGetSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Access this actor's sequence player, or None if it is not yet initialized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "GetSequencePlayer", sizeof(LevelSequenceActor_eventGetSequencePlayer_Parms), Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics
	{
		struct LevelSequenceActor_eventLoadSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventLoadSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Get the level sequence being played by this actor.\n\n@return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n@see SetSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "LoadSequence", sizeof(LevelSequenceActor_eventLoadSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_LoadSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics
	{
		struct LevelSequenceActor_eventRemoveBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Removes the specified actor from the specified binding's actor array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "RemoveBinding", sizeof(LevelSequenceActor_eventRemoveBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics
	{
		struct LevelSequenceActor_eventResetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventResetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Resets the specified binding back to the defaults defined by the Level Sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ResetBinding", sizeof(LevelSequenceActor_eventResetBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Resets all overridden bindings back to the defaults defined by the Level Sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ResetBindings", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics
	{
		struct LevelSequenceActor_eventSetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			TArray<AActor*> Actors;
			bool bAllowBindingsFromAsset;
		};
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventSetBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelSequenceActor_eventSetBinding_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Actors), METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset\n\n@param Binding Binding to modify\n@param Actors Actors to bind\n@param bAllowBindingsFromAsset Allow bindings from the level sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetBinding", sizeof(LevelSequenceActor_eventSetBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics
	{
		struct LevelSequenceActor_eventSetEventReceivers_Parms
		{
			TArray<AActor*> AdditionalReceivers;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalReceivers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalReceivers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers = { "AdditionalReceivers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetEventReceivers_Parms, AdditionalReceivers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers_Inner = { "AdditionalReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set an array of additional actors that will receive events triggerd from this sequence actor\n\n@param AdditionalReceivers An array of actors to receive events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetEventReceivers", sizeof(LevelSequenceActor_eventSetEventReceivers_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics
	{
		struct LevelSequenceActor_eventSetReplicatePlayback_Parms
		{
			bool ReplicatePlayback;
		};
		static void NewProp_ReplicatePlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReplicatePlayback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventSetReplicatePlayback_Parms*)Obj)->ReplicatePlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback = { "ReplicatePlayback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelSequenceActor_eventSetReplicatePlayback_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set whether or not to replicate playback for this actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetReplicatePlayback", sizeof(LevelSequenceActor_eventSetReplicatePlayback_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics
	{
		struct LevelSequenceActor_eventSetSequence_Parms
		{
			ULevelSequence* InSequence;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetSequence_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::NewProp_InSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set the level sequence being played by this actor.\n\n@param InSequence The sequence object to set.\n@see GetSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetSequence", sizeof(LevelSequenceActor_eventSetSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister()
	{
		return ALevelSequenceActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelSequenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultInstanceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicatePlayback_MetaData[];
#endif
		static void NewProp_bReplicatePlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicatePlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstanceData_MetaData[];
#endif
		static void NewProp_bOverrideInstanceData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstanceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BindingOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalEventReceivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalEventReceivers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalEventReceivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelSequenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelSequenceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelSequenceActor_AddBinding, "AddBinding" }, // 2928620871
		{ &Z_Construct_UFunction_ALevelSequenceActor_GetSequence, "GetSequence" }, // 4158772982
		{ &Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer, "GetSequencePlayer" }, // 2594260041
		{ &Z_Construct_UFunction_ALevelSequenceActor_LoadSequence, "LoadSequence" }, // 2125975221
		{ &Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature, "OnLevelSequenceLoaded__DelegateSignature" }, // 1974656638
		{ &Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding, "RemoveBinding" }, // 672137015
		{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBinding, "ResetBinding" }, // 1646424390
		{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBindings, "ResetBindings" }, // 3252798148
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetBinding, "SetBinding" }, // 1924518983
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers, "SetEventReceivers" }, // 2996921454
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback, "SetReplicatePlayback" }, // 1995653689
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetSequence, "SetSequence" }, // 580065731
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Physics LOD Activation Input" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor responsible for controlling a specific level sequence in the world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Burn-in widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance = { "BurnInInstance", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, BurnInInstance), Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Instance data that can be used to dynamically control sequence evaluation at runtime" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData = { "DefaultInstanceData", nullptr, (EPropertyFlags)0x001200000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, DefaultInstanceData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_MetaData[] = {
		{ "BlueprintSetter", "SetReplicatePlayback" },
		{ "Category", "Replication" },
		{ "DisplayName", "Replicate Playback" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "If true, playback of this level sequence on the server will be synchronized across other clients" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bReplicatePlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback = { "bReplicatePlayback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Enable specification of dynamic instance data to be supplied to the sequence during playback" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bOverrideInstanceData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData = { "bOverrideInstanceData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bAutoPlay_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Mapping of actors to override the sequence bindings with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides = { "BindingOverrides", nullptr, (EPropertyFlags)0x001200000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, BindingOverrides), Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions = { "BurnInOptions", nullptr, (EPropertyFlags)0x001200000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, BurnInOptions), Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers = { "AdditionalEventReceivers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, AdditionalEventReceivers), METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_Inner = { "AdditionalEventReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "AllowedClasses", "LevelSequence" },
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, LevelSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "BlueprintGetter", "GetSequencePlayer" },
		{ "Category", "Playback" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Game|Cinematic" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x001200000008203c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, SequencePlayer), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALevelSequenceActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IMovieScenePlaybackClient), false },
			{ Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IMovieSceneBindingOwnerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelSequenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelSequenceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams = {
		&ALevelSequenceActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelSequenceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelSequenceActor, 291967076);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ALevelSequenceActor>()
	{
		return ALevelSequenceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelSequenceActor(Z_Construct_UClass_ALevelSequenceActor, &ALevelSequenceActor::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ALevelSequenceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSequenceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

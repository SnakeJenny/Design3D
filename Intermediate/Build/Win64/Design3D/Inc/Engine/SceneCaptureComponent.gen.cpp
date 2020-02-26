// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SceneCaptureComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_HideComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* ESceneCapturePrimitiveRenderMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode, Z_Construct_UPackage__Script_Engine(), TEXT("ESceneCapturePrimitiveRenderMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESceneCapturePrimitiveRenderMode>()
	{
		return ESceneCapturePrimitiveRenderMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESceneCapturePrimitiveRenderMode(ESceneCapturePrimitiveRenderMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ESceneCapturePrimitiveRenderMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_Hash() { return 1402306789U; }
	UEnum* Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESceneCapturePrimitiveRenderMode"), 0, Get_Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture", (int64)ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture },
				{ "ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives", (int64)ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives },
				{ "ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList", (int64)ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "PRM_LegacySceneCapture.DisplayName", "Render Scene Primitives (Legacy)" },
				{ "PRM_LegacySceneCapture.ToolTip", "Legacy" },
				{ "PRM_RenderScenePrimitives.DisplayName", "Render Scene Primitives" },
				{ "PRM_RenderScenePrimitives.ToolTip", "Render primitives in the scene, minus HiddenActors." },
				{ "PRM_UseShowOnlyList.DisplayName", "Use ShowOnly List" },
				{ "PRM_UseShowOnlyList.ToolTip", "Render only primitives in the ShowOnlyActors list, or components specified with ShowOnlyComponent()." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESceneCapturePrimitiveRenderMode",
				"ESceneCapturePrimitiveRenderMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEngineShowFlagsSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineShowFlagsSetting, Z_Construct_UPackage__Script_Engine(), TEXT("EngineShowFlagsSetting"), sizeof(FEngineShowFlagsSetting), Get_Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEngineShowFlagsSetting>()
{
	return FEngineShowFlagsSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineShowFlagsSetting(FEngineShowFlagsSetting::StaticStruct, TEXT("/Script/Engine"), TEXT("EngineShowFlagsSetting"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEngineShowFlagsSetting
{
	FScriptStruct_Engine_StaticRegisterNativesFEngineShowFlagsSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineShowFlagsSetting")),new UScriptStruct::TCppStructOps<FEngineShowFlagsSetting>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEngineShowFlagsSetting;
	struct Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowFlagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShowFlagName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineShowFlagsSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FEngineShowFlagsSetting*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEngineShowFlagsSetting), &Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_ShowFlagName_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_ShowFlagName = { "ShowFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineShowFlagsSetting, ShowFlagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_ShowFlagName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_ShowFlagName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_ShowFlagName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EngineShowFlagsSetting",
		sizeof(FEngineShowFlagsSetting),
		alignof(FEngineShowFlagsSetting),
		Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineShowFlagsSetting"), sizeof(FEngineShowFlagsSetting), Get_Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Hash() { return 1720518473U; }
	void USceneCaptureComponent::StaticRegisterNativesUSceneCaptureComponent()
	{
		UClass* Class = USceneCaptureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearHiddenComponents", &USceneCaptureComponent::execClearHiddenComponents },
			{ "ClearShowOnlyComponents", &USceneCaptureComponent::execClearShowOnlyComponents },
			{ "HideActorComponents", &USceneCaptureComponent::execHideActorComponents },
			{ "HideComponent", &USceneCaptureComponent::execHideComponent },
			{ "RemoveShowOnlyActorComponents", &USceneCaptureComponent::execRemoveShowOnlyActorComponents },
			{ "RemoveShowOnlyComponent", &USceneCaptureComponent::execRemoveShowOnlyComponent },
			{ "SetCaptureSortPriority", &USceneCaptureComponent::execSetCaptureSortPriority },
			{ "ShowOnlyActorComponents", &USceneCaptureComponent::execShowOnlyActorComponents },
			{ "ShowOnlyComponent", &USceneCaptureComponent::execShowOnlyComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Clears the hidden list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "ClearHiddenComponents", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Clears the Show Only list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "ClearShowOnlyComponents", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics
	{
		struct SceneCaptureComponent_eventHideActorComponents_Parms
		{
			AActor* InActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SceneCaptureComponent_eventHideActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Adds all primitive components in the actor to our list of hidden components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "HideActorComponents", sizeof(SceneCaptureComponent_eventHideActorComponents_Parms), Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics
	{
		struct SceneCaptureComponent_eventHideComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SceneCaptureComponent_eventHideComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::NewProp_InComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::NewProp_InComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Adds the component to our list of hidden components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "HideComponent", sizeof(SceneCaptureComponent_eventHideComponent_Parms), Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_HideComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics
	{
		struct SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms
		{
			AActor* InActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Removes a actor's components from the Show Only list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "RemoveShowOnlyActorComponents", sizeof(SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms), Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics
	{
		struct SceneCaptureComponent_eventRemoveShowOnlyComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SceneCaptureComponent_eventRemoveShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Removes a component from the Show Only list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "RemoveShowOnlyComponent", sizeof(SceneCaptureComponent_eventRemoveShowOnlyComponent_Parms), Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics
	{
		struct SceneCaptureComponent_eventSetCaptureSortPriority_Parms
		{
			int32 NewCaptureSortPriority;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCaptureSortPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::NewProp_NewCaptureSortPriority = { "NewCaptureSortPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SceneCaptureComponent_eventSetCaptureSortPriority_Parms, NewCaptureSortPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::NewProp_NewCaptureSortPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Changes the value of TranslucentSortPriority." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "SetCaptureSortPriority", sizeof(SceneCaptureComponent_eventSetCaptureSortPriority_Parms), Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics
	{
		struct SceneCaptureComponent_eventShowOnlyActorComponents_Parms
		{
			AActor* InActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SceneCaptureComponent_eventShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Adds all primitive components in the actor to our list of show-only components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "ShowOnlyActorComponents", sizeof(SceneCaptureComponent_eventShowOnlyActorComponents_Parms), Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics
	{
		struct SceneCaptureComponent_eventShowOnlyComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SceneCaptureComponent_eventShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Adds the component to our list of show-only components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "ShowOnlyComponent", sizeof(SceneCaptureComponent_eventShowOnlyComponent_Parms), Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USceneCaptureComponent_NoRegister()
	{
		return USceneCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_USceneCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfilingEventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfilingEventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowFlagSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowFlagSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShowFlagSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureSortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CaptureSortPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxViewDistanceOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxViewDistanceOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPersistRenderingState_MetaData[];
#endif
		static void NewProp_bAlwaysPersistRenderingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPersistRenderingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureOnMovement_MetaData[];
#endif
		static void NewProp_bCaptureOnMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureOnMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureEveryFrame_MetaData[];
#endif
		static void NewProp_bCaptureEveryFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureEveryFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowOnlyActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyComponents;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ShowOnlyComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenComponents;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HiddenComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveRenderMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrimitiveRenderMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimitiveRenderMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USceneCaptureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents, "ClearHiddenComponents" }, // 169477608
		{ &Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents, "ClearShowOnlyComponents" }, // 166621756
		{ &Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents, "HideActorComponents" }, // 1420162736
		{ &Z_Construct_UFunction_USceneCaptureComponent_HideComponent, "HideComponent" }, // 1113033019
		{ &Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents, "RemoveShowOnlyActorComponents" }, // 793378843
		{ &Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent, "RemoveShowOnlyComponent" }, // 1689537133
		{ &Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority, "SetCaptureSortPriority" }, // 2869579869
		{ &Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents, "ShowOnlyActorComponents" }, // 1365890626
		{ &Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent, "ShowOnlyComponent" }, // 3017356867
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "abstract Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SceneCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "The mesh used by ProxyMeshComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureMesh = { "CaptureMesh", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, CaptureMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ProfilingEventName_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Name of the profiling event." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ProfilingEventName = { "ProfilingEventName", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, ProfilingEventName), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ProfilingEventName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ProfilingEventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "ShowFlags for the SceneCapture's ViewFamily, to control rendering settings for this view. Hidden but accessible through details customization" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, ShowFlagSettings), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings_Inner = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEngineShowFlagsSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureSortPriority_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Capture priority within the frame to sort scene capture on GPU to resolve interdependencies between multiple capture components. Highest come first." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureSortPriority = { "CaptureSortPriority", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, CaptureSortPriority), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureSortPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureSortPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_MaxViewDistanceOverride_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room" },
		{ "UIMax", "10000" },
		{ "UIMin", "100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_MaxViewDistanceOverride = { "MaxViewDistanceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, MaxViewDistanceOverride), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_MaxViewDistanceOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_MaxViewDistanceOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_LODDistanceFactor_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass." },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_LODDistanceFactor = { "LODDistanceFactor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, LODDistanceFactor), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_LODDistanceFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_LODDistanceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "editcondition", "!bCaptureEveryFrame" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Whether to persist the rendering state even if bCaptureEveryFrame==false.  This allows velocities for Motion Blur and Temporal AA to be computed." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState_SetBit(void* Obj)
	{
		((USceneCaptureComponent*)Obj)->bAlwaysPersistRenderingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState = { "bAlwaysPersistRenderingState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USceneCaptureComponent), &Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Whether to update the capture's contents on movement.  Disable if you are going to capture manually from blueprint." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement_SetBit(void* Obj)
	{
		((USceneCaptureComponent*)Obj)->bCaptureOnMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement = { "bCaptureOnMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USceneCaptureComponent), &Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Whether to update the capture's contents every frame.  If disabled, the component will render once on load and then only when moved." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame_SetBit(void* Obj)
	{
		((USceneCaptureComponent*)Obj)->bCaptureEveryFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame = { "bCaptureEveryFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USceneCaptureComponent), &Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, ShowOnlyActors), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors_Inner = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents = { "ShowOnlyComponents", nullptr, (EPropertyFlags)0x0014008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, ShowOnlyComponents), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents_Inner = { "ShowOnlyComponents", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "The actors to hide in the scene capture." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, HiddenActors), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "The components won't rendered by current component." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents = { "HiddenComponents", nullptr, (EPropertyFlags)0x0014008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, HiddenComponents), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents_Inner = { "HiddenComponents", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Controls what primitives get rendered into the scene capture." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode = { "PrimitiveRenderMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent, PrimitiveRenderMode), Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneCaptureComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ProfilingEventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureSortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_MaxViewDistanceOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_LODDistanceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneCaptureComponent_Statics::ClassParams = {
		&USceneCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USceneCaptureComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneCaptureComponent, 3957373351);
	template<> ENGINE_API UClass* StaticClass<USceneCaptureComponent>()
	{
		return USceneCaptureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneCaptureComponent(Z_Construct_UClass_USceneCaptureComponent, &USceneCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USceneCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

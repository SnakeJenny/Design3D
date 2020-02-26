// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/PlayerInput.h"
#include "Engine/Classes/GameFramework/PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInput() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyBind();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlayerInput_ClearSmoothing();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxis();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxisKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlayerInput_SetBind();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity();
// End Cross Module References
class UScriptStruct* FInputAxisKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisKeyMapping, Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisKeyMapping"), sizeof(FInputAxisKeyMapping), Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAxisKeyMapping>()
{
	return FInputAxisKeyMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAxisKeyMapping(FInputAxisKeyMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("InputAxisKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputAxisKeyMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFInputAxisKeyMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputAxisKeyMapping")),new UScriptStruct::TCppStructOps<FInputAxisKeyMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputAxisKeyMapping;
	struct Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Defines a mapping between an axis and key\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisKeyMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Key to bind it to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAxisKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Multiplier to use for the mapping when accumulating the axis value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAxisKeyMapping, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Friendly name of axis, e.g \"MoveForward\"" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAxisKeyMapping, AxisName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputAxisKeyMapping",
		sizeof(FInputAxisKeyMapping),
		alignof(FInputAxisKeyMapping),
		Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAxisKeyMapping"), sizeof(FInputAxisKeyMapping), Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_Hash() { return 1562462042U; }
class UScriptStruct* FInputActionKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionKeyMapping, Z_Construct_UPackage__Script_Engine(), TEXT("InputActionKeyMapping"), sizeof(FInputActionKeyMapping), Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputActionKeyMapping>()
{
	return FInputActionKeyMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputActionKeyMapping(FInputActionKeyMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("InputActionKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputActionKeyMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFInputActionKeyMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputActionKeyMapping")),new UScriptStruct::TCppStructOps<FInputActionKeyMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputActionKeyMapping;
	struct Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCmd_MetaData[];
#endif
		static void NewProp_bCmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCmd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[];
#endif
		static void NewProp_bAlt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCtrl_MetaData[];
#endif
		static void NewProp_bCtrl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCtrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[];
#endif
		static void NewProp_bShift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Defines a mapping between an action and key\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionKeyMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Key to bind it to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputActionKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Cmd keys must be down when the KeyEvent is received to be acknowledged" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_SetBit(void* Obj)
	{
		((FInputActionKeyMapping*)Obj)->bCmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd = { "bCmd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Alt keys must be down when the KeyEvent is received to be acknowledged" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_SetBit(void* Obj)
	{
		((FInputActionKeyMapping*)Obj)->bAlt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt = { "bAlt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Ctrl keys must be down when the KeyEvent is received to be acknowledged" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_SetBit(void* Obj)
	{
		((FInputActionKeyMapping*)Obj)->bCtrl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl = { "bCtrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Shift keys must be down when the KeyEvent is received to be acknowledged" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_SetBit(void* Obj)
	{
		((FInputActionKeyMapping*)Obj)->bShift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift = { "bShift", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Friendly name of action, e.g \"jump\"" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputActionKeyMapping, ActionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputActionKeyMapping",
		sizeof(FInputActionKeyMapping),
		alignof(FInputActionKeyMapping),
		Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputActionKeyMapping"), sizeof(FInputActionKeyMapping), Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_Hash() { return 4204633001U; }
class UScriptStruct* FInputAxisConfigEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisConfigEntry, Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisConfigEntry"), sizeof(FInputAxisConfigEntry), Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAxisConfigEntry>()
{
	return FInputAxisConfigEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAxisConfigEntry(FInputAxisConfigEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("InputAxisConfigEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputAxisConfigEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFInputAxisConfigEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputAxisConfigEntry")),new UScriptStruct::TCppStructOps<FInputAxisConfigEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputAxisConfigEntry;
	struct Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisKeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Configurable properties for control axes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisConfigEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Properties for the Axis Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties = { "AxisProperties", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAxisConfigEntry, AxisProperties), Z_Construct_UScriptStruct_FInputAxisProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Axis Key these properties apply to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName = { "AxisKeyName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAxisConfigEntry, AxisKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputAxisConfigEntry",
		sizeof(FInputAxisConfigEntry),
		alignof(FInputAxisConfigEntry),
		Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAxisConfigEntry"), sizeof(FInputAxisConfigEntry), Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_Hash() { return 2517670452U; }
class UScriptStruct* FInputAxisProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputAxisProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisProperties, Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisProperties"), sizeof(FInputAxisProperties), Get_Z_Construct_UScriptStruct_FInputAxisProperties_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAxisProperties>()
{
	return FInputAxisProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAxisProperties(FInputAxisProperties::StaticStruct, TEXT("/Script/Engine"), TEXT("InputAxisProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputAxisProperties
{
	FScriptStruct_Engine_StaticRegisterNativesFInputAxisProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputAxisProperties")),new UScriptStruct::TCppStructOps<FInputAxisProperties>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputAxisProperties;
	struct Z_Construct_UScriptStruct_FInputAxisProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Exponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Configurable properties for control axes, used to transform raw input into game ready values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Inverts reported values for this axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FInputAxisProperties*)Obj)->bInvert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FInputAxisProperties), &Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "For applying curves to [0..1] axes, e.g. analog sticks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent = { "Exponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAxisProperties, Exponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Scaling factor to multiply raw value by." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAxisProperties, Sensitivity), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "What the dead zone of the axis is.  For control axes such as analog sticks." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone = { "DeadZone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAxisProperties, DeadZone), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAxisProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputAxisProperties",
		sizeof(FInputAxisProperties),
		alignof(FInputAxisProperties),
		Z_Construct_UScriptStruct_FInputAxisProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAxisProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAxisProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAxisProperties"), sizeof(FInputAxisProperties), Get_Z_Construct_UScriptStruct_FInputAxisProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputAxisProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAxisProperties_Hash() { return 1334787876U; }
class UScriptStruct* FKeyBind::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKeyBind_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyBind, Z_Construct_UPackage__Script_Engine(), TEXT("KeyBind"), sizeof(FKeyBind), Get_Z_Construct_UScriptStruct_FKeyBind_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKeyBind>()
{
	return FKeyBind::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyBind(FKeyBind::StaticStruct, TEXT("/Script/Engine"), TEXT("KeyBind"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKeyBind
{
	FScriptStruct_Engine_StaticRegisterNativesFKeyBind()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeyBind")),new UScriptStruct::TCppStructOps<FKeyBind>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKeyBind;
	struct Z_Construct_UScriptStruct_FKeyBind_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[];
#endif
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCmd_MetaData[];
#endif
		static void NewProp_bIgnoreCmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCmd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAlt_MetaData[];
#endif
		static void NewProp_bIgnoreAlt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAlt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreShift_MetaData[];
#endif
		static void NewProp_bIgnoreShift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreShift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCtrl_MetaData[];
#endif
		static void NewProp_bIgnoreCtrl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCtrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[];
#endif
		static void NewProp_Cmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Cmd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alt_MetaData[];
#endif
		static void NewProp_Alt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Alt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static void NewProp_Shift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static void NewProp_Control_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Control;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Struct containing mappings for legacy method of binding keys to exec commands." },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyBind_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyBind>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the command key must not be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->bIgnoreCmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd = { "bIgnoreCmd", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the alt key must not be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->bIgnoreAlt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt = { "bIgnoreAlt", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the shift key must not be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->bIgnoreShift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift = { "bIgnoreShift", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the control key must not be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->bIgnoreCtrl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl = { "bIgnoreCtrl", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the command key needs to be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->Cmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the alt key needs to be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->Alt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the shift key needs to be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->Shift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the control key needs to be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->Control = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "The command to execute when the key is pressed/released" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyBind, Command), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "The key to be bound to the command" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyBind, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyBind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyBind_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"KeyBind",
		sizeof(FKeyBind),
		alignof(FKeyBind),
		Z_Construct_UScriptStruct_FKeyBind_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyBind()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyBind_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyBind"), sizeof(FKeyBind), Get_Z_Construct_UScriptStruct_FKeyBind_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyBind_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyBind_Hash() { return 597644067U; }
	void UPlayerInput::StaticRegisterNativesUPlayerInput()
	{
		UClass* Class = UPlayerInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSmoothing", &UPlayerInput::execClearSmoothing },
			{ "InvertAxis", &UPlayerInput::execInvertAxis },
			{ "InvertAxisKey", &UPlayerInput::execInvertAxisKey },
			{ "SetBind", &UPlayerInput::execSetBind },
			{ "SetMouseSensitivity", &UPlayerInput::execSetMouseSensitivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to reset mouse smoothing values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "ClearSmoothing", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_ClearSmoothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics
	{
		struct PlayerInput_eventInvertAxis_Parms
		{
			FName AxisName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInput_eventInvertAxis_Parms, AxisName), METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to invert an axis mapping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "InvertAxis", sizeof(PlayerInput_eventInvertAxis_Parms), Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics
	{
		struct PlayerInput_eventInvertAxisKey_Parms
		{
			FKey AxisKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey = { "AxisKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInput_eventInvertAxisKey_Parms, AxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to invert an axis key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "InvertAxisKey", sizeof(PlayerInput_eventInvertAxisKey_Parms), Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxisKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInput_SetBind_Statics
	{
		struct PlayerInput_eventSetBind_Parms
		{
			FName BindName;
			FString Command;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BindName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInput_eventSetBind_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_BindName = { "BindName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInput_eventSetBind_Parms, BindName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_BindName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_SetBind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to add a debug exec command" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_SetBind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "SetBind", sizeof(PlayerInput_eventSetBind_Parms), Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_SetBind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInput_SetBind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics
	{
		struct PlayerInput_eventSetMouseSensitivity_Parms
		{
			float Sensitivity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInput_eventSetMouseSensitivity_Parms, Sensitivity), METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Sets both X and Y axis sensitivity to the supplied value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "SetMouseSensitivity", sizeof(PlayerInput_eventSetMouseSensitivity_Parms), Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerInput_NoRegister()
	{
		return UPlayerInput::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertedAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InvertedAxis;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InvertedAxis_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugExecBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugExecBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugExecBindings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInput_ClearSmoothing, "ClearSmoothing" }, // 863974688
		{ &Z_Construct_UFunction_UPlayerInput_InvertAxis, "InvertAxis" }, // 3150609180
		{ &Z_Construct_UFunction_UPlayerInput_InvertAxisKey, "InvertAxisKey" }, // 1438660316
		{ &Z_Construct_UFunction_UPlayerInput_SetBind, "SetBind" }, // 3736818693
		{ &Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity, "SetMouseSensitivity" }, // 2647524343
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/PlayerInput.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Object within PlayerController that processes player input.\nOnly exists on the client in network games.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "List of Axis Mappings that have been inverted" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis = { "InvertedAxis", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInput, InvertedAxis), METADATA_PARAMS(Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_Inner = { "InvertedAxis", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Generic bindings of keys to Exec()-compatible strings for development purposes only" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings = { "DebugExecBindings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInput, DebugExecBindings), METADATA_PARAMS(Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_Inner = { "DebugExecBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyBind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInput_Statics::ClassParams = {
		&UPlayerInput::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerInput_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInput_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInput, 1473985924);
	template<> ENGINE_API UClass* StaticClass<UPlayerInput>()
	{
		return UPlayerInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInput(Z_Construct_UClass_UPlayerInput, &UPlayerInput::StaticClass, TEXT("/Script/Engine"), TEXT("UPlayerInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

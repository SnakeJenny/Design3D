// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/ActorGroupingUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorGroupingUtils() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorGroupingUtils_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorGroupingUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_Get();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_GroupActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_GroupSelected();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_UngroupActors();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected();
	UNREALED_API UFunction* Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups();
// End Cross Module References
	void UActorGroupingUtils::StaticRegisterNativesUActorGroupingUtils()
	{
		UClass* Class = UActorGroupingUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSelectedToGroup", &UActorGroupingUtils::execAddSelectedToGroup },
			{ "Get", &UActorGroupingUtils::execGet },
			{ "GroupActors", &UActorGroupingUtils::execGroupActors },
			{ "GroupSelected", &UActorGroupingUtils::execGroupSelected },
			{ "IsGroupingActive", &UActorGroupingUtils::execIsGroupingActive },
			{ "LockSelectedGroups", &UActorGroupingUtils::execLockSelectedGroups },
			{ "RemoveSelectedFromGroup", &UActorGroupingUtils::execRemoveSelectedFromGroup },
			{ "SetGroupingActive", &UActorGroupingUtils::execSetGroupingActive },
			{ "UngroupActors", &UActorGroupingUtils::execUngroupActors },
			{ "UngroupSelected", &UActorGroupingUtils::execUngroupSelected },
			{ "UnlockSelectedGroups", &UActorGroupingUtils::execUnlockSelectedGroups },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Activates \"Add to Group\" mode which allows the user to select a group to append current selection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "AddSelectedToGroup", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_Get_Statics
	{
		struct ActorGroupingUtils_eventGet_Parms
		{
			UActorGroupingUtils* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorGroupingUtils_eventGet_Parms, ReturnValue), Z_Construct_UClass_UActorGroupingUtils_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "DisplayName", "Get Actor Grouping Utils" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Convenience method for accessing grouping utils in a blueprint or script" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "Get", sizeof(ActorGroupingUtils_eventGet_Parms), Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics
	{
		struct ActorGroupingUtils_eventGroupActors_Parms
		{
			TArray<AActor*> ActorsToGroup;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToGroup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToGroup_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup = { "ActorsToGroup", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorGroupingUtils_eventGroupActors_Parms, ActorsToGroup), METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup_Inner = { "ActorsToGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Creates a new group from the provided list of actors removing the actors from any existing groups they are already in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "GroupActors", sizeof(ActorGroupingUtils_eventGroupActors_Parms), Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_GroupActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Creates a new group from the current selection removing the actors from any existing groups they are already in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "GroupSelected", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_GroupSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics
	{
		struct ActorGroupingUtils_eventIsGroupingActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorGroupingUtils_eventIsGroupingActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorGroupingUtils_eventIsGroupingActive_Parms), &Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "IsGroupingActive", sizeof(ActorGroupingUtils_eventIsGroupingActive_Parms), Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Locks any groups in the current selection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "LockSelectedGroups", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Removes any groups or actors in the current selection from their immediate parent.\nIf all actors/subgroups are removed, the parent group will be destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "RemoveSelectedFromGroup", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics
	{
		struct ActorGroupingUtils_eventSetGroupingActive_Parms
		{
			bool bInGroupingActive;
		};
		static void NewProp_bInGroupingActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInGroupingActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::NewProp_bInGroupingActive_SetBit(void* Obj)
	{
		((ActorGroupingUtils_eventSetGroupingActive_Parms*)Obj)->bInGroupingActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::NewProp_bInGroupingActive = { "bInGroupingActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorGroupingUtils_eventSetGroupingActive_Parms), &Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::NewProp_bInGroupingActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::NewProp_bInGroupingActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "SetGroupingActive", sizeof(ActorGroupingUtils_eventSetGroupingActive_Parms), Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics
	{
		struct ActorGroupingUtils_eventUngroupActors_Parms
		{
			TArray<AActor*> ActorsToUngroup;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToUngroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToUngroup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToUngroup_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup = { "ActorsToUngroup", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorGroupingUtils_eventUngroupActors_Parms, ActorsToUngroup), METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup_Inner = { "ActorsToUngroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Disbands any groups that the provided actors belong to, does not attempt to maintain any hierarchy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "UngroupActors", sizeof(ActorGroupingUtils_eventUngroupActors_Parms), Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_UngroupActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Disbands any groups in the current selection, does not attempt to maintain any hierarchy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "UngroupSelected", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Unlocks any groups in the current selection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "UnlockSelectedGroups", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorGroupingUtils_NoRegister()
	{
		return UActorGroupingUtils::StaticClass();
	}
	struct Z_Construct_UClass_UActorGroupingUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorGroupingUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorGroupingUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup, "AddSelectedToGroup" }, // 3131113889
		{ &Z_Construct_UFunction_UActorGroupingUtils_Get, "Get" }, // 2395500412
		{ &Z_Construct_UFunction_UActorGroupingUtils_GroupActors, "GroupActors" }, // 899648157
		{ &Z_Construct_UFunction_UActorGroupingUtils_GroupSelected, "GroupSelected" }, // 1969423311
		{ &Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive, "IsGroupingActive" }, // 130115945
		{ &Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups, "LockSelectedGroups" }, // 3656455501
		{ &Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup, "RemoveSelectedFromGroup" }, // 1669719454
		{ &Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive, "SetGroupingActive" }, // 1615166369
		{ &Z_Construct_UFunction_UActorGroupingUtils_UngroupActors, "UngroupActors" }, // 3699203769
		{ &Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected, "UngroupSelected" }, // 2140918266
		{ &Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups, "UnlockSelectedGroups" }, // 2821918907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorGroupingUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorGroupingUtils.h" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Helper class for grouping actors in the level editor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorGroupingUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorGroupingUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorGroupingUtils_Statics::ClassParams = {
		&UActorGroupingUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UActorGroupingUtils_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorGroupingUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorGroupingUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorGroupingUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorGroupingUtils, 1005720268);
	template<> UNREALED_API UClass* StaticClass<UActorGroupingUtils>()
	{
		return UActorGroupingUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorGroupingUtils(Z_Construct_UClass_UActorGroupingUtils, &UActorGroupingUtils::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorGroupingUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorGroupingUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

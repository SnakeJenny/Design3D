// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTags/Classes/BlueprintGameplayTagLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGameplayTagLibrary() {}
// Cross Module References
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag();
	GAMEPLAYTAGS_API UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag();
// End Cross Module References
	void UBlueprintGameplayTagLibrary::StaticRegisterNativesUBlueprintGameplayTagLibrary()
	{
		UClass* Class = UBlueprintGameplayTagLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayTag", &UBlueprintGameplayTagLibrary::execAddGameplayTag },
			{ "AppendGameplayTagContainers", &UBlueprintGameplayTagLibrary::execAppendGameplayTagContainers },
			{ "BreakGameplayTagContainer", &UBlueprintGameplayTagLibrary::execBreakGameplayTagContainer },
			{ "DoesContainerMatchTagQuery", &UBlueprintGameplayTagLibrary::execDoesContainerMatchTagQuery },
			{ "DoesTagAssetInterfaceHaveTag", &UBlueprintGameplayTagLibrary::execDoesTagAssetInterfaceHaveTag },
			{ "EqualEqual_GameplayTag", &UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTag },
			{ "EqualEqual_GameplayTagContainer", &UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTagContainer },
			{ "GetAllActorsOfClassMatchingTagQuery", &UBlueprintGameplayTagLibrary::execGetAllActorsOfClassMatchingTagQuery },
			{ "GetDebugStringFromGameplayTag", &UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTag },
			{ "GetDebugStringFromGameplayTagContainer", &UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTagContainer },
			{ "GetNumGameplayTagsInContainer", &UBlueprintGameplayTagLibrary::execGetNumGameplayTagsInContainer },
			{ "GetTagName", &UBlueprintGameplayTagLibrary::execGetTagName },
			{ "HasAllMatchingGameplayTags", &UBlueprintGameplayTagLibrary::execHasAllMatchingGameplayTags },
			{ "HasAllTags", &UBlueprintGameplayTagLibrary::execHasAllTags },
			{ "HasAnyTags", &UBlueprintGameplayTagLibrary::execHasAnyTags },
			{ "HasTag", &UBlueprintGameplayTagLibrary::execHasTag },
			{ "IsGameplayTagValid", &UBlueprintGameplayTagLibrary::execIsGameplayTagValid },
			{ "MakeGameplayTagContainerFromArray", &UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromArray },
			{ "MakeGameplayTagContainerFromTag", &UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromTag },
			{ "MakeGameplayTagQuery", &UBlueprintGameplayTagLibrary::execMakeGameplayTagQuery },
			{ "MakeLiteralGameplayTag", &UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTag },
			{ "MakeLiteralGameplayTagContainer", &UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTagContainer },
			{ "MatchesAnyTags", &UBlueprintGameplayTagLibrary::execMatchesAnyTags },
			{ "MatchesTag", &UBlueprintGameplayTagLibrary::execMatchesTag },
			{ "NotEqual_GameplayTag", &UBlueprintGameplayTagLibrary::execNotEqual_GameplayTag },
			{ "NotEqual_GameplayTagContainer", &UBlueprintGameplayTagLibrary::execNotEqual_GameplayTagContainer },
			{ "NotEqual_TagContainerTagContainer", &UBlueprintGameplayTagLibrary::execNotEqual_TagContainerTagContainer },
			{ "NotEqual_TagTag", &UBlueprintGameplayTagLibrary::execNotEqual_TagTag },
			{ "RemoveGameplayTag", &UBlueprintGameplayTagLibrary::execRemoveGameplayTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTag Tag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Adds a single tag to the passed in tag container\n\n@param InOutTagContainer             The container that will be appended too.\n@param Tag                                   The tag to add to the container" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "AddGameplayTag", sizeof(BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics
	{
		struct BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms
		{
			FGameplayTagContainer InOutTagContainer;
			FGameplayTagContainer InTagContainer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTagContainer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOutTagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InTagContainer = { "InTagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms, InTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InTagContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InTagContainer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InOutTagContainer = { "InOutTagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms, InOutTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InOutTagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Appends all tags in the InTagContainer to InOutTagContainer\n\n@param InOutTagContainer             The container that will be appended too.\n@param InTagContainer                The container to append." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "AppendGameplayTagContainers", sizeof(BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms
		{
			FGameplayTagContainer GameplayTagContainer;
			TArray<FGameplayTag> GameplayTags;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms, GameplayTags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTags_Inner = { "GameplayTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTagContainer = { "GameplayTagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms, GameplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTagContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Breaks tag container into explicit array of tags" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "BreakGameplayTagContainer", sizeof(BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics
	{
		struct BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTagQuery TagQuery;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagQuery_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the specified tag container matches the given Tag Query\n\n@param TagContainer                  Container to check if it matches all of the tags in the other container\n@param TagQuery                              Query to match against\n\n@return True if the container matches the query, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "DoesContainerMatchTagQuery", sizeof(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms
		{
			TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;
			FGameplayTag Tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TagContainerInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_TagContainerInterface = { "TagContainerInterface", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms, TagContainerInterface), Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_TagContainerInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the specified tag container has the specified tag, using the specified tag matching types\n\n@param TagContainerInterface         An Interface to a tag container\n@param Tag                                           Tag to check for in the container\n\n@return True if the container has the specified tag, false if it does not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "DoesTagAssetInterfaceHaveTag", sizeof(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms
		{
			FGameplayTag A;
			FGameplayTag B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms, B), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms, A), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (GameplayTag)" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "EqualEqual_GameplayTag", sizeof(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms
		{
			FGameplayTagContainer A;
			FGameplayTagContainer B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms, B), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms, A), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (GameplayTagContainer)" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "EqualEqual_GameplayTagContainer", sizeof(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics
	{
		struct BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			FGameplayTagQuery GameplayTagQuery;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagQuery;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_GameplayTagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_GameplayTagQuery = { "GameplayTagQuery", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, GameplayTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_GameplayTagQuery_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_GameplayTagQuery_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_GameplayTagQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "DynamicOutputParam", "OutActors" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Get an array of all actors of a specific class (or subclass of that class) which match the specified gameplay tag query.\n\n@param ActorClass                    Class of actors to fetch\n@param GameplayTagQuery              Query to match against" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "GetAllActorsOfClassMatchingTagQuery", sizeof(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms
		{
			FGameplayTag GameplayTag;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::NewProp_GameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns an FString representation of a gameplay tag for debugging purposes.\n\n@param GameplayTag   The tag to get the debug string from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "GetDebugStringFromGameplayTag", sizeof(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms
		{
			FGameplayTagContainer TagContainer;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_TagContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_TagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns an FString listing all of the gameplay tags in the tag container for debugging purposes.\n\n@param TagContainer  The tag container to get the debug string from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "GetDebugStringFromGameplayTagContainer", sizeof(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms
		{
			FGameplayTagContainer TagContainer;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_TagContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_TagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Get the number of gameplay tags in the specified container\n\n@param TagContainer  Tag container to get the number of tags from\n\n@return The number of tags in the specified container" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "GetNumGameplayTagsInContainer", sizeof(BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics
	{
		struct BlueprintGameplayTagLibrary_eventGetTagName_Parms
		{
			FGameplayTag GameplayTag;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetTagName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_GameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetTagName_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_GameplayTag_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_GameplayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_GameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns FName of this tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "GetTagName", sizeof(BlueprintGameplayTagLibrary_eventGetTagName_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics
	{
		struct BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms
		{
			TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;
			FGameplayTagContainer OtherContainer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TagContainerInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_OtherContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_OtherContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_OtherContainer_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_TagContainerInterface = { "TagContainerInterface", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms, TagContainerInterface), Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_OtherContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_TagContainerInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check Gameplay tags in the interface has all of the specified tags in the tag container (expands to include parents of asset tags)\n\n@param TagContainerInterface         An Interface to a tag container\n@param OtherContainer                        A Tag Container\n\n@return True if the tagcontainer in the interface has all the tags inside the container." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "HasAllMatchingGameplayTags", sizeof(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics
	{
		struct BlueprintGameplayTagLibrary_eventHasAllTags_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTagContainer OtherContainer;
			bool bExactMatch;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasAllTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasAllTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasAllTags_Parms*)Obj)->bExactMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasAllTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_OtherContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_OtherContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_OtherContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_TagContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_TagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_bExactMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_OtherContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Keywords", "DoesContainerMatchAllTagsInContainer" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the specified tag container has ALL of the tags in the other container\n\n@param TagContainer                  Container to check if it matches all of the tags in the other container\n@param OtherContainer                Container to check against. If this is empty, the check will succeed\n@param bExactMatch                   If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\n\n@return True if the container has ALL of the tags in the other container" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "HasAllTags", sizeof(BlueprintGameplayTagLibrary_eventHasAllTags_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics
	{
		struct BlueprintGameplayTagLibrary_eventHasAnyTags_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTagContainer OtherContainer;
			bool bExactMatch;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasAnyTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasAnyTags_Parms*)Obj)->bExactMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_OtherContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_OtherContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_OtherContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_TagContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_TagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_bExactMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_OtherContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Keywords", "DoesContainerMatchAnyTagsInContainer" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the specified tag container has ANY of the tags in the other container\n\n@param TagContainer                  Container to check if it matches any of the tags in the other container\n@param OtherContainer                Container to check against.\n@param bExactMatch                   If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\n\n@return True if the container has ANY of the tags in the other container" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "HasAnyTags", sizeof(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventHasTag_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTag Tag;
			bool bExactMatch;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasTag_Parms*)Obj)->bExactMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasTag_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_TagContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_TagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_bExactMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Keywords", "DoesContainerHaveTag" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the tag container has the specified tag\n\n@param TagContainer                  Container to check for the tag\n@param Tag                                   Tag to check for in the container\n@param bExactMatch                   If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\n\n@return True if the container has the specified tag, false if it does not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "HasTag", sizeof(BlueprintGameplayTagLibrary_eventHasTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics
	{
		struct BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms
		{
			FGameplayTag GameplayTag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_GameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns true if the passed in gameplay tag is non-null" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "IsGameplayTagValid", sizeof(BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms
		{
			TArray<FGameplayTag> GameplayTags;
			FGameplayTagContainer ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms, GameplayTags), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags_Inner = { "GameplayTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Creates a FGameplayTagContainer from the array of passed in tags" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MakeGameplayTagContainerFromArray", sizeof(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms
		{
			FGameplayTag SingleTag;
			FGameplayTagContainer ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SingleTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::NewProp_SingleTag = { "SingleTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms, SingleTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::NewProp_SingleTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Creates a FGameplayTagContainer containing a single tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MakeGameplayTagContainerFromTag", sizeof(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms
		{
			FGameplayTagQuery TagQuery;
			FGameplayTagQuery ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagQuery;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::NewProp_TagQuery,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Creates a literal FGameplayTagQuery\n\n@param       TagQuery        value to set the FGameplayTagQuery to\n\n@return      The literal FGameplayTagQuery" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MakeGameplayTagQuery", sizeof(BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms
		{
			FGameplayTag Value;
			FGameplayTag ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms, Value), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Creates a literal FGameplayTag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MakeLiteralGameplayTag", sizeof(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms
		{
			FGameplayTagContainer Value;
			FGameplayTagContainer ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms, Value), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Creates a literal FGameplayTagContainer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MakeLiteralGameplayTagContainer", sizeof(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms
		{
			FGameplayTag TagOne;
			FGameplayTagContainer OtherContainer;
			bool bExactMatch;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagOne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms*)Obj)->bExactMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_OtherContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_OtherContainer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_OtherContainer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_TagOne = { "TagOne", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms, TagOne), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_bExactMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_OtherContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_TagOne,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Determine if TagOne matches against any tag in OtherContainer\n\n@param TagOne                        Tag to check for match\n@param OtherContainer        Container to check against.\n@param bExactMatch           If true, the tag has to be exactly present, if false then TagOne will include it's parent tags while matching\n\n@return True if TagOne matches any tags explicitly present in OtherContainer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MatchesAnyTags", sizeof(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMatchesTag_Parms
		{
			FGameplayTag TagOne;
			FGameplayTag TagTwo;
			bool bExactMatch;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagTwo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagOne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventMatchesTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventMatchesTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventMatchesTag_Parms*)Obj)->bExactMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventMatchesTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_TagTwo = { "TagTwo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesTag_Parms, TagTwo), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_TagOne = { "TagOne", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesTag_Parms, TagOne), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_bExactMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_TagTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_TagOne,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Keywords", "DoGameplayTagsMatch" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Determine if TagOne matches against TagTwo\n\n@param TagOne                        Tag to check for match\n@param TagTwo                        Tag to check match against\n@param bExactMatch           If true, the tag has to be exactly present, if false then TagOne will include it's parent tags while matching\n\n@return True if TagOne matches TagTwo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MatchesTag", sizeof(BlueprintGameplayTagLibrary_eventMatchesTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms
		{
			FGameplayTag A;
			FGameplayTag B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms, B), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms, A), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual (GameplayTag)" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns true if the values are not equal (A != B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "NotEqual_GameplayTag", sizeof(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms
		{
			FGameplayTagContainer A;
			FGameplayTagContainer B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms, B), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms, A), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual (GameplayTagContainer)" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns true if the values are not equal (A != B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "NotEqual_GameplayTagContainer", sizeof(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms
		{
			FGameplayTagContainer A;
			FString B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms, A), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Checks if a gameplay tag containers's name and a string are not equal to one another" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "NotEqual_TagContainerTagContainer", sizeof(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms
		{
			FGameplayTag A;
			FString B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms, A), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Checks if a gameplay tag's name and a string are not equal to one another" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "NotEqual_TagTag", sizeof(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTag Tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Remove a single tag from the passed in tag container, returns true if found\n\n@param InOutTagContainer             The container that will be appended too.\n@param Tag                                   The tag to add to the container" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "RemoveGameplayTag", sizeof(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary_NoRegister()
	{
		return UBlueprintGameplayTagLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag, "AddGameplayTag" }, // 1974826293
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers, "AppendGameplayTagContainers" }, // 1199155993
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer, "BreakGameplayTagContainer" }, // 2658984761
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery, "DoesContainerMatchTagQuery" }, // 2960153289
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag, "DoesTagAssetInterfaceHaveTag" }, // 1053348837
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag, "EqualEqual_GameplayTag" }, // 3606049642
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer, "EqualEqual_GameplayTagContainer" }, // 1487160243
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery, "GetAllActorsOfClassMatchingTagQuery" }, // 506022717
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag, "GetDebugStringFromGameplayTag" }, // 1916056270
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer, "GetDebugStringFromGameplayTagContainer" }, // 1850569854
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer, "GetNumGameplayTagsInContainer" }, // 3538922337
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName, "GetTagName" }, // 1555310747
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 3156553618
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags, "HasAllTags" }, // 309346197
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags, "HasAnyTags" }, // 3414816091
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag, "HasTag" }, // 1209494210
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid, "IsGameplayTagValid" }, // 67774740
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray, "MakeGameplayTagContainerFromArray" }, // 4141061474
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag, "MakeGameplayTagContainerFromTag" }, // 2355631067
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery, "MakeGameplayTagQuery" }, // 1289344785
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag, "MakeLiteralGameplayTag" }, // 1977688537
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer, "MakeLiteralGameplayTagContainer" }, // 2587935204
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags, "MatchesAnyTags" }, // 924932156
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag, "MatchesTag" }, // 1171566619
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag, "NotEqual_GameplayTag" }, // 1065854863
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer, "NotEqual_GameplayTagContainer" }, // 2491102188
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer, "NotEqual_TagContainerTagContainer" }, // 1786206022
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag, "NotEqual_TagTag" }, // 4193289817
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag, "RemoveGameplayTag" }, // 3510642799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintGameplayTagLibrary.h" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ScriptName", "GameplayTagLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintGameplayTagLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::ClassParams = {
		&UBlueprintGameplayTagLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintGameplayTagLibrary, 1544234206);
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UBlueprintGameplayTagLibrary>()
	{
		return UBlueprintGameplayTagLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintGameplayTagLibrary(Z_Construct_UClass_UBlueprintGameplayTagLibrary, &UBlueprintGameplayTagLibrary::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UBlueprintGameplayTagLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGameplayTagLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

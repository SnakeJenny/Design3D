// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayTagContainer;
class IGameplayTagAssetInterface;
struct FGameplayTagQuery;
class UObject;
class AActor;
#ifdef GAMEPLAYTAGS_BlueprintGameplayTagLibrary_generated_h
#error "BlueprintGameplayTagLibrary.generated.h already included, missing '#pragma once' in BlueprintGameplayTagLibrary.h"
#endif
#define GAMEPLAYTAGS_BlueprintGameplayTagLibrary_generated_h

#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(Z_Param_GameplayTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayTagContainer) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(Z_Param_Out_TagContainer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_TagContainerTagContainer) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_TagTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_TagTag(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesTagAssetInterfaceHaveTag) \
	{ \
		P_GET_TINTERFACE(IGameplayTagAssetInterface,Z_Param_TagContainerInterface); \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(Z_Param_TagContainerInterface,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags) \
	{ \
		P_GET_TINTERFACE(IGameplayTagAssetInterface,Z_Param_TagContainerInterface); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(Z_Param_TagContainerInterface,Z_Param_Out_OtherContainer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeGameplayTagQuery) \
	{ \
		P_GET_STRUCT(FGameplayTagQuery,Z_Param_TagQuery); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTagQuery*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(Z_Param_TagQuery); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakGameplayTagContainer) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GameplayTagContainer); \
		P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_GameplayTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(Z_Param_Out_GameplayTagContainer,Z_Param_Out_GameplayTags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeGameplayTagContainerFromTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_SingleTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTagContainer*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(Z_Param_SingleTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeGameplayTagContainerFromArray) \
	{ \
		P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_GameplayTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTagContainer*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(Z_Param_Out_GameplayTags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralGameplayTagContainer) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTagContainer*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_GameplayTagContainer) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_GameplayTagContainer) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendGameplayTagContainers) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InOutTagContainer); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InTagContainer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(Z_Param_Out_InOutTagContainer,Z_Param_Out_InTagContainer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGameplayTag) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::RemoveGameplayTag(Z_Param_Out_TagContainer,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGameplayTag) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintGameplayTagLibrary::AddGameplayTag(Z_Param_Out_TagContainer,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorsOfClassMatchingTagQuery) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_GameplayTagQuery); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_GameplayTagQuery,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesContainerMatchTagQuery) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_TagQuery); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(Z_Param_Out_TagContainer,Z_Param_Out_TagQuery); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAllTags) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer); \
		P_GET_UBOOL(Z_Param_bExactMatch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasAllTags(Z_Param_Out_TagContainer,Z_Param_Out_OtherContainer,Z_Param_bExactMatch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyTags) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer); \
		P_GET_UBOOL(Z_Param_bExactMatch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasAnyTags(Z_Param_Out_TagContainer,Z_Param_Out_OtherContainer,Z_Param_bExactMatch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasTag) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_GET_UBOOL(Z_Param_bExactMatch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasTag(Z_Param_Out_TagContainer,Z_Param_Tag,Z_Param_bExactMatch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumGameplayTagsInContainer) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(Z_Param_Out_TagContainer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralGameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTag*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTagName) \
	{ \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_GameplayTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetTagName(Z_Param_Out_GameplayTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGameplayTagValid) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::IsGameplayTagValid(Z_Param_GameplayTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_GameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_A); \
		P_GET_STRUCT(FGameplayTag,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_GameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_A); \
		P_GET_STRUCT(FGameplayTag,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchesAnyTags) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_TagOne); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer); \
		P_GET_UBOOL(Z_Param_bExactMatch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::MatchesAnyTags(Z_Param_TagOne,Z_Param_Out_OtherContainer,Z_Param_bExactMatch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchesTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_TagOne); \
		P_GET_STRUCT(FGameplayTag,Z_Param_TagTwo); \
		P_GET_UBOOL(Z_Param_bExactMatch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::MatchesTag(Z_Param_TagOne,Z_Param_TagTwo,Z_Param_bExactMatch); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(Z_Param_GameplayTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayTagContainer) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(Z_Param_Out_TagContainer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_TagContainerTagContainer) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_TagTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_TagTag(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesTagAssetInterfaceHaveTag) \
	{ \
		P_GET_TINTERFACE(IGameplayTagAssetInterface,Z_Param_TagContainerInterface); \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(Z_Param_TagContainerInterface,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags) \
	{ \
		P_GET_TINTERFACE(IGameplayTagAssetInterface,Z_Param_TagContainerInterface); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(Z_Param_TagContainerInterface,Z_Param_Out_OtherContainer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeGameplayTagQuery) \
	{ \
		P_GET_STRUCT(FGameplayTagQuery,Z_Param_TagQuery); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTagQuery*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(Z_Param_TagQuery); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakGameplayTagContainer) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GameplayTagContainer); \
		P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_GameplayTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(Z_Param_Out_GameplayTagContainer,Z_Param_Out_GameplayTags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeGameplayTagContainerFromTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_SingleTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTagContainer*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(Z_Param_SingleTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeGameplayTagContainerFromArray) \
	{ \
		P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_GameplayTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTagContainer*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(Z_Param_Out_GameplayTags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralGameplayTagContainer) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTagContainer*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_GameplayTagContainer) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_GameplayTagContainer) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendGameplayTagContainers) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InOutTagContainer); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InTagContainer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(Z_Param_Out_InOutTagContainer,Z_Param_Out_InTagContainer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGameplayTag) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::RemoveGameplayTag(Z_Param_Out_TagContainer,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGameplayTag) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintGameplayTagLibrary::AddGameplayTag(Z_Param_Out_TagContainer,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorsOfClassMatchingTagQuery) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_GameplayTagQuery); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_GameplayTagQuery,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesContainerMatchTagQuery) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_TagQuery); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(Z_Param_Out_TagContainer,Z_Param_Out_TagQuery); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAllTags) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer); \
		P_GET_UBOOL(Z_Param_bExactMatch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasAllTags(Z_Param_Out_TagContainer,Z_Param_Out_OtherContainer,Z_Param_bExactMatch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyTags) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer); \
		P_GET_UBOOL(Z_Param_bExactMatch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasAnyTags(Z_Param_Out_TagContainer,Z_Param_Out_OtherContainer,Z_Param_bExactMatch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasTag) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_GET_UBOOL(Z_Param_bExactMatch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasTag(Z_Param_Out_TagContainer,Z_Param_Tag,Z_Param_bExactMatch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumGameplayTagsInContainer) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(Z_Param_Out_TagContainer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralGameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTag*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTagName) \
	{ \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_GameplayTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetTagName(Z_Param_Out_GameplayTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGameplayTagValid) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::IsGameplayTagValid(Z_Param_GameplayTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_GameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_A); \
		P_GET_STRUCT(FGameplayTag,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_GameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_A); \
		P_GET_STRUCT(FGameplayTag,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchesAnyTags) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_TagOne); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer); \
		P_GET_UBOOL(Z_Param_bExactMatch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::MatchesAnyTags(Z_Param_TagOne,Z_Param_Out_OtherContainer,Z_Param_bExactMatch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchesTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_TagOne); \
		P_GET_STRUCT(FGameplayTag,Z_Param_TagTwo); \
		P_GET_UBOOL(Z_Param_bExactMatch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::MatchesTag(Z_Param_TagOne,Z_Param_TagTwo,Z_Param_bExactMatch); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintGameplayTagLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintGameplayTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayTags"), GAMEPLAYTAGS_API) \
	DECLARE_SERIALIZER(UBlueprintGameplayTagLibrary)


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintGameplayTagLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintGameplayTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayTags"), GAMEPLAYTAGS_API) \
	DECLARE_SERIALIZER(UBlueprintGameplayTagLibrary)


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintGameplayTagLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UBlueprintGameplayTagLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGameplayTagLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(UBlueprintGameplayTagLibrary&&); \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(const UBlueprintGameplayTagLibrary&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(UBlueprintGameplayTagLibrary&&); \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(const UBlueprintGameplayTagLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UBlueprintGameplayTagLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGameplayTagLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintGameplayTagLibrary)


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_14_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintGameplayTagLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UBlueprintGameplayTagLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

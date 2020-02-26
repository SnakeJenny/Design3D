// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTags/Classes/GameplayTagsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsManager() {}
// Cross Module References
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNode();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagSource();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	static UEnum* EGameplayTagSelectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType, Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagSelectionType"));
		}
		return Singleton;
	}
	template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayTagSelectionType>()
	{
		return EGameplayTagSelectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTagSelectionType(EGameplayTagSelectionType_StaticEnum, TEXT("/Script/GameplayTags"), TEXT("EGameplayTagSelectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Hash() { return 1866489929U; }
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTagSelectionType"), 0, Get_Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTagSelectionType::None", (int64)EGameplayTagSelectionType::None },
				{ "EGameplayTagSelectionType::NonRestrictedOnly", (int64)EGameplayTagSelectionType::NonRestrictedOnly },
				{ "EGameplayTagSelectionType::RestrictedOnly", (int64)EGameplayTagSelectionType::RestrictedOnly },
				{ "EGameplayTagSelectionType::All", (int64)EGameplayTagSelectionType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				"EGameplayTagSelectionType",
				"EGameplayTagSelectionType",
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
	static UEnum* EGameplayTagSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType, Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagSourceType"));
		}
		return Singleton;
	}
	template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayTagSourceType>()
	{
		return EGameplayTagSourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTagSourceType(EGameplayTagSourceType_StaticEnum, TEXT("/Script/GameplayTags"), TEXT("EGameplayTagSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Hash() { return 3045891079U; }
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTagSourceType"), 0, Get_Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTagSourceType::Native", (int64)EGameplayTagSourceType::Native },
				{ "EGameplayTagSourceType::DefaultTagList", (int64)EGameplayTagSourceType::DefaultTagList },
				{ "EGameplayTagSourceType::TagList", (int64)EGameplayTagSourceType::TagList },
				{ "EGameplayTagSourceType::RestrictedTagList", (int64)EGameplayTagSourceType::RestrictedTagList },
				{ "EGameplayTagSourceType::DataTable", (int64)EGameplayTagSourceType::DataTable },
				{ "EGameplayTagSourceType::Invalid", (int64)EGameplayTagSourceType::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DataTable.ToolTip", "Restricted tags from an ini" },
				{ "DefaultTagList.ToolTip", "Was added from C++ code" },
				{ "Invalid.ToolTip", "From a DataTable" },
				{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
				{ "RestrictedTagList.ToolTip", "Another tag list from an ini in tags.ini" },
				{ "TagList.ToolTip", "The default tag list in DefaultGameplayTags.ini" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
				nullptr,
				"EGameplayTagSourceType",
				"EGameplayTagSourceType",
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
class UScriptStruct* FGameplayTagNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagNode, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagNode"), sizeof(FGameplayTagNode), Get_Z_Construct_UScriptStruct_FGameplayTagNode_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagNode>()
{
	return FGameplayTagNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagNode(FGameplayTagNode::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagNode"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagNode
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagNode")),new UScriptStruct::TCppStructOps<FGameplayTagNode>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagNode;
	struct Z_Construct_UScriptStruct_FGameplayTagNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Simple tree node for gameplay tags, this stores metadata about specific tags" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagNode",
		sizeof(FGameplayTagNode),
		alignof(FGameplayTagNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagNode"), sizeof(FGameplayTagNode), Get_Z_Construct_UScriptStruct_FGameplayTagNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagNode_Hash() { return 2455563841U; }
class UScriptStruct* FGameplayTagSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagSource_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagSource, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagSource"), sizeof(FGameplayTagSource), Get_Z_Construct_UScriptStruct_FGameplayTagSource_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagSource>()
{
	return FGameplayTagSource::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagSource(FGameplayTagSource::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagSource"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagSource
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagSource()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagSource")),new UScriptStruct::TCppStructOps<FGameplayTagSource>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagSource;
	struct Z_Construct_UScriptStruct_FGameplayTagSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceRestrictedTagList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceRestrictedTagList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTagList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceTagList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Struct defining where gameplay tags are loaded/saved from. Mostly for the editor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagSource>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "If this has restricted tags and is bound to an ini object for saving, this is the one" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList = { "SourceRestrictedTagList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagSource, SourceRestrictedTagList), Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "If this is bound to an ini object for saving, this is the one" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList = { "SourceTagList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagSource, SourceTagList), Z_Construct_UClass_UGameplayTagsList_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Type of this source" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagSource, SourceType), Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Name of this source" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagSource, SourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagSource",
		sizeof(FGameplayTagSource),
		alignof(FGameplayTagSource),
		Z_Construct_UScriptStruct_FGameplayTagSource_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagSource_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagSource"), sizeof(FGameplayTagSource), Get_Z_Construct_UScriptStruct_FGameplayTagSource_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagSource_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagSource_Hash() { return 1613297767U; }
class UScriptStruct* FRestrictedGameplayTagTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow, Z_Construct_UPackage__Script_GameplayTags(), TEXT("RestrictedGameplayTagTableRow"), sizeof(FRestrictedGameplayTagTableRow), Get_Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FRestrictedGameplayTagTableRow>()
{
	return FRestrictedGameplayTagTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRestrictedGameplayTagTableRow(FRestrictedGameplayTagTableRow::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("RestrictedGameplayTagTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedGameplayTagTableRow
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedGameplayTagTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RestrictedGameplayTagTableRow")),new UScriptStruct::TCppStructOps<FRestrictedGameplayTagTableRow>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedGameplayTagTableRow;
	struct Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNonRestrictedChildren_MetaData[];
#endif
		static void NewProp_bAllowNonRestrictedChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNonRestrictedChildren;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Simple struct for a table row in the restricted gameplay tag table and element in the ini list" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRestrictedGameplayTagTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Tag specified in the table" },
	};
#endif
	void Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_SetBit(void* Obj)
	{
		((FRestrictedGameplayTagTableRow*)Obj)->bAllowNonRestrictedChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren = { "bAllowNonRestrictedChildren", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRestrictedGameplayTagTableRow), &Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		Z_Construct_UScriptStruct_FGameplayTagTableRow,
		&NewStructOps,
		"RestrictedGameplayTagTableRow",
		sizeof(FRestrictedGameplayTagTableRow),
		alignof(FRestrictedGameplayTagTableRow),
		Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RestrictedGameplayTagTableRow"), sizeof(FRestrictedGameplayTagTableRow), Get_Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Hash() { return 2101509121U; }
class UScriptStruct* FGameplayTagTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagTableRow, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagTableRow"), sizeof(FGameplayTagTableRow), Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagTableRow>()
{
	return FGameplayTagTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagTableRow(FGameplayTagTableRow::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagTableRow
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagTableRow")),new UScriptStruct::TCppStructOps<FGameplayTagTableRow>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagTableRow;
	struct Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Simple struct for a table row in the gameplay tag table and element in the ini list" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Developer comment clarifying the usage of a particular tag, not user facing" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment = { "DevComment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagTableRow, DevComment), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Tag specified in the table" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagTableRow, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GameplayTagTableRow",
		sizeof(FGameplayTagTableRow),
		alignof(FGameplayTagTableRow),
		Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagTableRow"), sizeof(FGameplayTagTableRow), Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_Hash() { return 878251595U; }
	void UGameplayTagsManager::StaticRegisterNativesUGameplayTagsManager()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister()
	{
		return UGameplayTagsManager::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTagTables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayTagTables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagSources_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagsManager.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Holds data about the tag dictionary, is in a singleton UObject" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Holds all of the valid gameplay-related tags that can be applied to assets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables = { "GameplayTagTables", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayTagsManager, GameplayTagTables), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_Inner = { "GameplayTagTables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "List of gameplay tag sources" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources = { "TagSources", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayTagsManager, TagSources), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_Inner = { "TagSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTagSource, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsManager_Statics::ClassParams = {
		&UGameplayTagsManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayTagsManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTagsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagsManager, 507782628);
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UGameplayTagsManager>()
	{
		return UGameplayTagsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagsManager(Z_Construct_UClass_UGameplayTagsManager, &UGameplayTagsManager::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UGameplayTagsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

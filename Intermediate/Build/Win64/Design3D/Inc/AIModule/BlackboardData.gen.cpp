// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BlackboardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardData() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardEntry();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FBlackboardEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FBlackboardEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardEntry, Z_Construct_UPackage__Script_AIModule(), TEXT("BlackboardEntry"), sizeof(FBlackboardEntry), Get_Z_Construct_UScriptStruct_FBlackboardEntry_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBlackboardEntry>()
{
	return FBlackboardEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlackboardEntry(FBlackboardEntry::StaticStruct, TEXT("/Script/AIModule"), TEXT("BlackboardEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFBlackboardEntry
{
	FScriptStruct_AIModule_StaticRegisterNativesFBlackboardEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlackboardEntry")),new UScriptStruct::TCppStructOps<FBlackboardEntry>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFBlackboardEntry;
	struct Z_Construct_UScriptStruct_FBlackboardEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstanceSynced_MetaData[];
#endif
		static void NewProp_bInstanceSynced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstanceSynced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyType;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntryDescription;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EntryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "blackboard entry definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlackboardEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "if set to true then this field will be synchronized across all instances of this blackboard" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_SetBit(void* Obj)
	{
		((FBlackboardEntry*)Obj)->bInstanceSynced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced = { "bInstanceSynced", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBlackboardEntry), &Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "key type and additional properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType = { "KeyType", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlackboardEntry, KeyType), Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "Optional description to explain what this blackboard entry does." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription = { "EntryDescription", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlackboardEntry, EntryDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName = { "EntryName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlackboardEntry, EntryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlackboardEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"BlackboardEntry",
		sizeof(FBlackboardEntry),
		alignof(FBlackboardEntry),
		Z_Construct_UScriptStruct_FBlackboardEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlackboardEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlackboardEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlackboardEntry"), sizeof(FBlackboardEntry), Get_Z_Construct_UScriptStruct_FBlackboardEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlackboardEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlackboardEntry_Hash() { return 603220129U; }
	void UBlackboardData::StaticRegisterNativesUBlackboardData()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardData_NoRegister()
	{
		return UBlackboardData::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSynchronizedKeys_MetaData[];
#endif
		static void NewProp_bHasSynchronizedKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSynchronizedKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentKeys_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "BehaviorTree/BlackboardData.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
#endif
	void Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_SetBit(void* Obj)
	{
		((UBlackboardData*)Obj)->bHasSynchronizedKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys = { "bHasSynchronizedKeys", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlackboardData), &Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "blackboard keys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlackboardData, Keys), METADATA_PARAMS(Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlackboardEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "all keys inherited from parent chain" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys = { "ParentKeys", nullptr, (EPropertyFlags)0x0010008800032001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlackboardData, ParentKeys), METADATA_PARAMS(Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_Inner = { "ParentKeys", nullptr, (EPropertyFlags)0x0000008800020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlackboardEntry, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Parent" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "parent blackboard (keys can be overridden)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlackboardData, Parent), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardData_Statics::ClassParams = {
		&UBlackboardData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackboardData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackboardData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackboardData, 1636757689);
	template<> AIMODULE_API UClass* StaticClass<UBlackboardData>()
	{
		return UBlackboardData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardData(Z_Construct_UClass_UBlackboardData, &UBlackboardData::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

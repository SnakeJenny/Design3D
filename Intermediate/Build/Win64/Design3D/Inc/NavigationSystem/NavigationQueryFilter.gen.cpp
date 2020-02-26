// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationQueryFilter() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterFlags();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterArea();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FNavigationFilterFlags::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVIGATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationFilterFlags, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavigationFilterFlags"), sizeof(FNavigationFilterFlags), Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_Hash());
	}
	return Singleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavigationFilterFlags>()
{
	return FNavigationFilterFlags::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationFilterFlags(FNavigationFilterFlags::StaticStruct, TEXT("/Script/NavigationSystem"), TEXT("NavigationFilterFlags"), false, nullptr, nullptr);
static struct FScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterFlags
{
	FScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterFlags()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationFilterFlags")),new UScriptStruct::TCppStructOps<FNavigationFilterFlags>);
	}
} ScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterFlags;
	struct Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag15_MetaData[];
#endif
		static void NewProp_bNavFlag15_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag15;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag14_MetaData[];
#endif
		static void NewProp_bNavFlag14_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag14;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag13_MetaData[];
#endif
		static void NewProp_bNavFlag13_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag13;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag12_MetaData[];
#endif
		static void NewProp_bNavFlag12_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag12;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag11_MetaData[];
#endif
		static void NewProp_bNavFlag11_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag11;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag10_MetaData[];
#endif
		static void NewProp_bNavFlag10_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag9_MetaData[];
#endif
		static void NewProp_bNavFlag9_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag9;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag8_MetaData[];
#endif
		static void NewProp_bNavFlag8_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag7_MetaData[];
#endif
		static void NewProp_bNavFlag7_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag6_MetaData[];
#endif
		static void NewProp_bNavFlag6_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag5_MetaData[];
#endif
		static void NewProp_bNavFlag5_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag4_MetaData[];
#endif
		static void NewProp_bNavFlag4_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag3_MetaData[];
#endif
		static void NewProp_bNavFlag3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag2_MetaData[];
#endif
		static void NewProp_bNavFlag2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag1_MetaData[];
#endif
		static void NewProp_bNavFlag1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavFlag0_MetaData[];
#endif
		static void NewProp_bNavFlag0_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavFlag0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "Use UNavigationSystem.DescribeFilterFlags() to setup user friendly names of flags" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationFilterFlags>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag15 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15 = { "bNavFlag15", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag14 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14 = { "bNavFlag14", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag13 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13 = { "bNavFlag13", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag12 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12 = { "bNavFlag12", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag11 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11 = { "bNavFlag11", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag10 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10 = { "bNavFlag10", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag9 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9 = { "bNavFlag9", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag8 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8 = { "bNavFlag8", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag7 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7 = { "bNavFlag7", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag6 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6 = { "bNavFlag6", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag5 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5 = { "bNavFlag5", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag4 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4 = { "bNavFlag4", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3 = { "bNavFlag3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2 = { "bNavFlag2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1 = { "bNavFlag1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag0 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0 = { "bNavFlag0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"NavigationFilterFlags",
		sizeof(FNavigationFilterFlags),
		alignof(FNavigationFilterFlags),
		Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterFlags()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationFilterFlags"), sizeof(FNavigationFilterFlags), Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_Hash() { return 989857288U; }
class UScriptStruct* FNavigationFilterArea::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVIGATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterArea_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationFilterArea, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavigationFilterArea"), sizeof(FNavigationFilterArea), Get_Z_Construct_UScriptStruct_FNavigationFilterArea_Hash());
	}
	return Singleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavigationFilterArea>()
{
	return FNavigationFilterArea::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationFilterArea(FNavigationFilterArea::StaticStruct, TEXT("/Script/NavigationSystem"), TEXT("NavigationFilterArea"), false, nullptr, nullptr);
static struct FScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterArea
{
	FScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterArea()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationFilterArea")),new UScriptStruct::TCppStructOps<FNavigationFilterArea>);
	}
} ScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterArea;
	struct Z_Construct_UScriptStruct_FNavigationFilterArea_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideEnteringCost_MetaData[];
#endif
		static void NewProp_bOverrideEnteringCost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideEnteringCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideTravelCost_MetaData[];
#endif
		static void NewProp_bOverrideTravelCost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideTravelCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExcluded_MetaData[];
#endif
		static void NewProp_bIsExcluded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExcluded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnteringCostOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnteringCostOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravelCostOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TravelCostOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationFilterArea>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_MetaData[] = {
		{ "Category", "Area" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_SetBit(void* Obj)
	{
		((FNavigationFilterArea*)Obj)->bOverrideEnteringCost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost = { "bOverrideEnteringCost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterArea), &Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_MetaData[] = {
		{ "Category", "Area" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_SetBit(void* Obj)
	{
		((FNavigationFilterArea*)Obj)->bOverrideTravelCost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost = { "bOverrideTravelCost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterArea), &Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_MetaData[] = {
		{ "Category", "Area" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "mark as excluded" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_SetBit(void* Obj)
	{
		((FNavigationFilterArea*)Obj)->bIsExcluded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded = { "bIsExcluded", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationFilterArea), &Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride_MetaData[] = {
		{ "Category", "Area" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bOverrideEnteringCost" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "override for entering cost" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride = { "EnteringCostOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationFilterArea, EnteringCostOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride_MetaData[] = {
		{ "Category", "Area" },
		{ "ClampMin", "0.001000" },
		{ "EditCondition", "bOverrideTravelCost" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "override for travel cost" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride = { "TravelCostOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationFilterArea, TravelCostOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Area" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "navigation area class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationFilterArea, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"NavigationFilterArea",
		sizeof(FNavigationFilterArea),
		alignof(FNavigationFilterArea),
		Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterArea()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterArea_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationFilterArea"), sizeof(FNavigationFilterArea), Get_Z_Construct_UScriptStruct_FNavigationFilterArea_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationFilterArea_Hash() { return 177861015U; }
	void UNavigationQueryFilter::StaticRegisterNativesUNavigationQueryFilter()
	{
	}
	UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister()
	{
		return UNavigationQueryFilter::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationQueryFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludeFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludeFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Areas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Areas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Areas_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationQueryFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NavFilters/NavigationQueryFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "Class containing definition of a navigation query filter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "forbidden flags of navigation nodes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags = { "ExcludeFlags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationQueryFilter, ExcludeFlags), Z_Construct_UScriptStruct_FNavigationFilterFlags, METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "required flags of navigation nodes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags = { "IncludeFlags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationQueryFilter, IncludeFlags), Z_Construct_UScriptStruct_FNavigationFilterFlags, METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "list of overrides for navigation areas" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas = { "Areas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationQueryFilter, Areas), METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_Inner = { "Areas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNavigationFilterArea, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationQueryFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationQueryFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationQueryFilter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationQueryFilter_Statics::ClassParams = {
		&UNavigationQueryFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationQueryFilter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationQueryFilter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationQueryFilter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationQueryFilter, 3889244097);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationQueryFilter>()
	{
		return UNavigationQueryFilter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationQueryFilter(Z_Construct_UClass_UNavigationQueryFilter, &UNavigationQueryFilter::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavigationQueryFilter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationQueryFilter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

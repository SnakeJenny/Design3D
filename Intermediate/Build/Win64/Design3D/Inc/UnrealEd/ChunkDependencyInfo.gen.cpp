// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/Commandlets/ChunkDependencyInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkDependencyInfo() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FChunkDependency();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UChunkDependencyInfo_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UChunkDependencyInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FChunkDependency::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FChunkDependency_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkDependency, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ChunkDependency"), sizeof(FChunkDependency), Get_Z_Construct_UScriptStruct_FChunkDependency_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FChunkDependency>()
{
	return FChunkDependency::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChunkDependency(FChunkDependency::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("ChunkDependency"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFChunkDependency
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFChunkDependency()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChunkDependency")),new UScriptStruct::TCppStructOps<FChunkDependency>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFChunkDependency;
	struct Z_Construct_UScriptStruct_FChunkDependency_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentChunkID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentChunkID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChunkID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDependency_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Commandlets/ChunkDependencyInfo.h" },
		{ "ToolTip", "A single dependency, read from ini file" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkDependency_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkDependency>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ParentChunkID_MetaData[] = {
		{ "Category", "ChunkInfo" },
		{ "ModuleRelativePath", "Public/Commandlets/ChunkDependencyInfo.h" },
		{ "ToolTip", "Parent chunk, anything in both Parent and Child is only placed into Parent" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ParentChunkID = { "ParentChunkID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkDependency, ParentChunkID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ParentChunkID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ParentChunkID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ChunkID_MetaData[] = {
		{ "Category", "ChunkInfo" },
		{ "ModuleRelativePath", "Public/Commandlets/ChunkDependencyInfo.h" },
		{ "ToolTip", "The child chunk" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ChunkID = { "ChunkID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkDependency, ChunkID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ChunkID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ChunkID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ParentChunkID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ChunkID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkDependency_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ChunkDependency",
		sizeof(FChunkDependency),
		alignof(FChunkDependency),
		Z_Construct_UScriptStruct_FChunkDependency_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDependency_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkDependency_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDependency_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkDependency()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChunkDependency_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChunkDependency"), sizeof(FChunkDependency), Get_Z_Construct_UScriptStruct_FChunkDependency_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChunkDependency_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChunkDependency_Hash() { return 2439191258U; }
	void UChunkDependencyInfo::StaticRegisterNativesUChunkDependencyInfo()
	{
	}
	UClass* Z_Construct_UClass_UChunkDependencyInfo_NoRegister()
	{
		return UChunkDependencyInfo::StaticClass();
	}
	struct Z_Construct_UClass_UChunkDependencyInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DependencyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DependencyArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DependencyArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChunkDependencyInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChunkDependencyInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ChunkDependencyInfo.h" },
		{ "ModuleRelativePath", "Public/Commandlets/ChunkDependencyInfo.h" },
		{ "ToolTip", "This is read out of config and defines a tree of chunk dependencies" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Commandlets/ChunkDependencyInfo.h" },
		{ "ToolTip", "List of dependencies used to remove redundant chunks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray = { "DependencyArray", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChunkDependencyInfo, DependencyArray), METADATA_PARAMS(Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray_Inner = { "DependencyArray", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChunkDependency, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChunkDependencyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChunkDependencyInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChunkDependencyInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChunkDependencyInfo_Statics::ClassParams = {
		&UChunkDependencyInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChunkDependencyInfo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UChunkDependencyInfo_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UChunkDependencyInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChunkDependencyInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChunkDependencyInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChunkDependencyInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChunkDependencyInfo, 1585241274);
	template<> UNREALED_API UClass* StaticClass<UChunkDependencyInfo>()
	{
		return UChunkDependencyInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChunkDependencyInfo(Z_Construct_UClass_UChunkDependencyInfo, &UChunkDependencyInfo::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UChunkDependencyInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChunkDependencyInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

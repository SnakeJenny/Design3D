// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Layers/Layer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLayerActorStats();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FLayerActorStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLayerActorStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerActorStats, Z_Construct_UPackage__Script_Engine(), TEXT("LayerActorStats"), sizeof(FLayerActorStats), Get_Z_Construct_UScriptStruct_FLayerActorStats_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLayerActorStats>()
{
	return FLayerActorStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLayerActorStats(FLayerActorStats::StaticStruct, TEXT("/Script/Engine"), TEXT("LayerActorStats"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLayerActorStats
{
	FScriptStruct_Engine_StaticRegisterNativesFLayerActorStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LayerActorStats")),new UScriptStruct::TCppStructOps<FLayerActorStats>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLayerActorStats;
	struct Z_Construct_UScriptStruct_FLayerActorStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Total;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerActorStats_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerActorStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "The total number of Actors of Type assigned to the Layer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLayerActorStats, Total), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "A Type of Actor currently associated with the Layer" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLayerActorStats, Type), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerActorStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerActorStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LayerActorStats",
		sizeof(FLayerActorStats),
		alignof(FLayerActorStats),
		Z_Construct_UScriptStruct_FLayerActorStats_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerActorStats_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLayerActorStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLayerActorStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LayerActorStats"), sizeof(FLayerActorStats), Get_Z_Construct_UScriptStruct_FLayerActorStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLayerActorStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLayerActorStats_Hash() { return 1947067205U; }
	void ULayer::StaticRegisterNativesULayer()
	{
	}
	UClass* Z_Construct_UClass_ULayer_NoRegister()
	{
		return ULayer::StaticClass();
	}
	struct Z_Construct_UClass_ULayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorStats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorStats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Layers/Layer.h" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "Basic stats regarding the number of Actors and their types currently assigned to the Layer" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats = { "ActorStats", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULayer, ActorStats), METADATA_PARAMS(Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_Inner = { "ActorStats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLayerActorStats, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "Whether actors associated with the layer are visible in the viewport" },
	};
#endif
	void Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((ULayer*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULayer), &Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "The display name of the layer" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULayer, LayerName), METADATA_PARAMS(Z_Construct_UClass_ULayer_Statics::NewProp_LayerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::NewProp_LayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_LayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULayer_Statics::ClassParams = {
		&ULayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULayer, 3105182245);
	template<> ENGINE_API UClass* StaticClass<ULayer>()
	{
		return ULayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULayer(Z_Construct_UClass_ULayer, &ULayer::StaticClass, TEXT("/Script/Engine"), TEXT("ULayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

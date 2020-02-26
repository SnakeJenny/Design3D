// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/CullDistanceVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCullDistanceVolume() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCullDistanceSizePair();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ACullDistanceVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACullDistanceVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
// End Cross Module References
class UScriptStruct* FCullDistanceSizePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCullDistanceSizePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCullDistanceSizePair, Z_Construct_UPackage__Script_Engine(), TEXT("CullDistanceSizePair"), sizeof(FCullDistanceSizePair), Get_Z_Construct_UScriptStruct_FCullDistanceSizePair_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCullDistanceSizePair>()
{
	return FCullDistanceSizePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCullDistanceSizePair(FCullDistanceSizePair::StaticStruct, TEXT("/Script/Engine"), TEXT("CullDistanceSizePair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCullDistanceSizePair
{
	FScriptStruct_Engine_StaticRegisterNativesFCullDistanceSizePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CullDistanceSizePair")),new UScriptStruct::TCppStructOps<FCullDistanceSizePair>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCullDistanceSizePair;
	struct Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Helper structure containing size and cull distance pair." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCullDistanceSizePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "CullDistanceSizePair" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Cull distance associated with size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCullDistanceSizePair, CullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "CullDistanceSizePair" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Size to associate with cull distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCullDistanceSizePair, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CullDistanceSizePair",
		sizeof(FCullDistanceSizePair),
		alignof(FCullDistanceSizePair),
		Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCullDistanceSizePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCullDistanceSizePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CullDistanceSizePair"), sizeof(FCullDistanceSizePair), Get_Z_Construct_UScriptStruct_FCullDistanceSizePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCullDistanceSizePair_Hash() { return 1552070216U; }
	void ACullDistanceVolume::StaticRegisterNativesACullDistanceVolume()
	{
	}
	UClass* Z_Construct_UClass_ACullDistanceVolume_NoRegister()
	{
		return ACullDistanceVolume::StaticClass();
	}
	struct Z_Construct_UClass_ACullDistanceVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CullDistances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CullDistances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACullDistanceVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACullDistanceVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Engine/CullDistanceVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "CullDistanceVolume" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Whether the volume is currently enabled or not." },
	};
#endif
	void Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ACullDistanceVolume*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ACullDistanceVolume), &Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_MetaData[] = {
		{ "Category", "CullDistanceVolume" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Array of size and cull distance pairs. The code will calculate the sphere diameter of a primitive's BB and look for a best\nfit in this array to determine which cull distance to use." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances = { "CullDistances", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACullDistanceVolume, CullDistances), METADATA_PARAMS(Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_Inner = { "CullDistances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCullDistanceSizePair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACullDistanceVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACullDistanceVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACullDistanceVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACullDistanceVolume_Statics::ClassParams = {
		&ACullDistanceVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACullDistanceVolume_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACullDistanceVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACullDistanceVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACullDistanceVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACullDistanceVolume, 24531559);
	template<> ENGINE_API UClass* StaticClass<ACullDistanceVolume>()
	{
		return ACullDistanceVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACullDistanceVolume(Z_Construct_UClass_ACullDistanceVolume, &ACullDistanceVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ACullDistanceVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACullDistanceVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

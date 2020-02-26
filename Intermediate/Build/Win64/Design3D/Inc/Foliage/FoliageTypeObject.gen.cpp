// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/FoliageTypeObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageTypeObject() {}
// Cross Module References
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeObject();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FFoliageTypeObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOLIAGE_API uint32 Get_Z_Construct_UScriptStruct_FFoliageTypeObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageTypeObject, Z_Construct_UPackage__Script_Foliage(), TEXT("FoliageTypeObject"), sizeof(FFoliageTypeObject), Get_Z_Construct_UScriptStruct_FFoliageTypeObject_Hash());
	}
	return Singleton;
}
template<> FOLIAGE_API UScriptStruct* StaticStruct<FFoliageTypeObject>()
{
	return FFoliageTypeObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFoliageTypeObject(FFoliageTypeObject::StaticStruct, TEXT("/Script/Foliage"), TEXT("FoliageTypeObject"), false, nullptr, nullptr);
static struct FScriptStruct_Foliage_StaticRegisterNativesFFoliageTypeObject
{
	FScriptStruct_Foliage_StaticRegisterNativesFFoliageTypeObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FoliageTypeObject")),new UScriptStruct::TCppStructOps<FFoliageTypeObject>);
	}
} ScriptStruct_Foliage_StaticRegisterNativesFFoliageTypeObject;
	struct Z_Construct_UScriptStruct_FFoliageTypeObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAsset_MetaData[];
#endif
		static void NewProp_bIsAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TypeInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageTypeObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageTypeObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
		{ "ToolTip", "A wrapper struct used to allow the use of either FoliageType assets or FoliageType blueprint classes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageTypeObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0044000020000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageTypeObject, Type_DEPRECATED), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
		{ "ToolTip", "Whether this contains an asset object (as opposed to a BP class)" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset_SetBit(void* Obj)
	{
		((FFoliageTypeObject*)Obj)->bIsAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset = { "bIsAsset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFoliageTypeObject), &Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_TypeInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
		{ "ToolTip", "The actual instance of the foliage type that is used for spawning" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_TypeInstance = { "TypeInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageTypeObject, TypeInstance), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_TypeInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_TypeInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_FoliageTypeObject_MetaData[] = {
		{ "AllowedClasses", "FoliageType_InstancedStaticMesh,Blueprint" },
		{ "Category", "ProceduralFoliageSimulation" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
		{ "ThumbnailSize", "X=40 Y=40" },
		{ "ToolTip", "The foliage type that will be spawned by the procedural foliage simulation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_FoliageTypeObject = { "FoliageTypeObject", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageTypeObject, FoliageTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_FoliageTypeObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_FoliageTypeObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_TypeInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_FoliageTypeObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
		nullptr,
		&NewStructOps,
		"FoliageTypeObject",
		sizeof(FFoliageTypeObject),
		alignof(FFoliageTypeObject),
		Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFoliageTypeObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FoliageTypeObject"), sizeof(FFoliageTypeObject), Get_Z_Construct_UScriptStruct_FFoliageTypeObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFoliageTypeObject_Hash() { return 603425579U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

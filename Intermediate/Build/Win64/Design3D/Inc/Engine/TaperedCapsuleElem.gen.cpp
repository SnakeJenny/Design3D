// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaperedCapsuleElem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKTaperedCapsuleElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FKTaperedCapsuleElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKTaperedCapsuleElem, Z_Construct_UPackage__Script_Engine(), TEXT("KTaperedCapsuleElem"), sizeof(FKTaperedCapsuleElem), Get_Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKTaperedCapsuleElem>()
{
	return FKTaperedCapsuleElem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKTaperedCapsuleElem(FKTaperedCapsuleElem::StaticStruct, TEXT("/Script/Engine"), TEXT("KTaperedCapsuleElem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKTaperedCapsuleElem
{
	FScriptStruct_Engine_StaticRegisterNativesFKTaperedCapsuleElem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KTaperedCapsuleElem")),new UScriptStruct::TCppStructOps<FKTaperedCapsuleElem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKTaperedCapsuleElem;
	struct Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Capsule shape used for collision. Z axis is capsule axis. Has a start and end radius that can differ." },
	};
#endif
	void* Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKTaperedCapsuleElem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Capsule" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Length of line-segment. Add Radius0 and Radius 1 to find total length." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKTaperedCapsuleElem, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Length_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius1_MetaData[] = {
		{ "Category", "Capsule" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Radius of the capsule end point" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius1 = { "Radius1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKTaperedCapsuleElem, Radius1), METADATA_PARAMS(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius0_MetaData[] = {
		{ "Category", "Capsule" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Radius of the capsule start point" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius0 = { "Radius0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKTaperedCapsuleElem, Radius0), METADATA_PARAMS(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Capsule" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Rotation of the capsule" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKTaperedCapsuleElem, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Capsule" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/TaperedCapsuleElem.h" },
		{ "ToolTip", "Position of the capsule's origin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKTaperedCapsuleElem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Center_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Radius0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::NewProp_Center,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FKShapeElem,
		&NewStructOps,
		"KTaperedCapsuleElem",
		sizeof(FKTaperedCapsuleElem),
		alignof(FKTaperedCapsuleElem),
		Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKTaperedCapsuleElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KTaperedCapsuleElem"), sizeof(FKTaperedCapsuleElem), Get_Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKTaperedCapsuleElem_Hash() { return 223061966U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

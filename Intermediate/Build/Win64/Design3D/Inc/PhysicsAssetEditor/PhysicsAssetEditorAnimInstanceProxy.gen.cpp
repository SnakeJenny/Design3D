// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsAssetEditor/Private/PhysicsAssetEditorAnimInstanceProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetEditorAnimInstanceProxy() {}
// Cross Module References
	PHYSICSASSETEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy();
// End Cross Module References
class UScriptStruct* FPhysicsAssetEditorAnimInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSICSASSETEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy, Z_Construct_UPackage__Script_PhysicsAssetEditor(), TEXT("PhysicsAssetEditorAnimInstanceProxy"), sizeof(FPhysicsAssetEditorAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Hash());
	}
	return Singleton;
}
template<> PHYSICSASSETEDITOR_API UScriptStruct* StaticStruct<FPhysicsAssetEditorAnimInstanceProxy>()
{
	return FPhysicsAssetEditorAnimInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy(FPhysicsAssetEditorAnimInstanceProxy::StaticStruct, TEXT("/Script/PhysicsAssetEditor"), TEXT("PhysicsAssetEditorAnimInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_PhysicsAssetEditor_StaticRegisterNativesFPhysicsAssetEditorAnimInstanceProxy
{
	FScriptStruct_PhysicsAssetEditor_StaticRegisterNativesFPhysicsAssetEditorAnimInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicsAssetEditorAnimInstanceProxy")),new UScriptStruct::TCppStructOps<FPhysicsAssetEditorAnimInstanceProxy>);
	}
} ScriptStruct_PhysicsAssetEditor_StaticRegisterNativesFPhysicsAssetEditorAnimInstanceProxy;
	struct Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorAnimInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsAssetEditorAnimInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
		Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy,
		&NewStructOps,
		"PhysicsAssetEditorAnimInstanceProxy",
		sizeof(FPhysicsAssetEditorAnimInstanceProxy),
		alignof(FPhysicsAssetEditorAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsAssetEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicsAssetEditorAnimInstanceProxy"), sizeof(FPhysicsAssetEditorAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Hash() { return 4259964716U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

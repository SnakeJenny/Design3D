// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/HLODProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODProxy() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODProxyMesh();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALODActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
class UScriptStruct* FHLODProxyMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHLODProxyMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODProxyMesh, Z_Construct_UPackage__Script_Engine(), TEXT("HLODProxyMesh"), sizeof(FHLODProxyMesh), Get_Z_Construct_UScriptStruct_FHLODProxyMesh_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODProxyMesh>()
{
	return FHLODProxyMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHLODProxyMesh(FHLODProxyMesh::StaticStruct, TEXT("/Script/Engine"), TEXT("HLODProxyMesh"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFHLODProxyMesh
{
	FScriptStruct_Engine_StaticRegisterNativesFHLODProxyMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HLODProxyMesh")),new UScriptStruct::TCppStructOps<FHLODProxyMesh>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFHLODProxyMesh;
	struct Z_Construct_UScriptStruct_FHLODProxyMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_LODActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "A mesh proxy entry" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODProxyMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "The key generated from an ALODActor. If this differs from that generated from the ALODActor, then the mesh needs regenerating." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHLODProxyMesh, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "The mesh used to display this proxy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHLODProxyMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "The ALODActor that we were generated from" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor = { "LODActor", nullptr, (EPropertyFlags)0x0044000000020001, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHLODProxyMesh, LODActor), Z_Construct_UClass_ALODActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HLODProxyMesh",
		sizeof(FHLODProxyMesh),
		alignof(FHLODProxyMesh),
		Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHLODProxyMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHLODProxyMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HLODProxyMesh"), sizeof(FHLODProxyMesh), Get_Z_Construct_UScriptStruct_FHLODProxyMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHLODProxyMesh_Hash() { return 2217160161U; }
	void UHLODProxy::StaticRegisterNativesUHLODProxy()
	{
	}
	UClass* Z_Construct_UClass_UHLODProxy_NoRegister()
	{
		return UHLODProxy::StaticClass();
	}
	struct Z_Construct_UClass_UHLODProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProxyMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProxyMeshes_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OwningMap;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/HLODProxy.h" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "This asset acts as a proxy to a static mesh for ALODActors to display" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "All the mesh proxies we contain" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes = { "ProxyMeshes", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxy, ProxyMeshes), METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_Inner = { "ProxyMeshes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHLODProxyMesh, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "Keep hold of the level in the editor to allow for package cleaning etc." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap = { "OwningMap", nullptr, (EPropertyFlags)0x0044000800020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxy, OwningMap), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHLODProxy_Statics::ClassParams = {
		&UHLODProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHLODProxy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHLODProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHLODProxy, 746605857);
	template<> ENGINE_API UClass* StaticClass<UHLODProxy>()
	{
		return UHLODProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHLODProxy(Z_Construct_UClass_UHLODProxy, &UHLODProxy::StaticClass, TEXT("/Script/Engine"), TEXT("UHLODProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

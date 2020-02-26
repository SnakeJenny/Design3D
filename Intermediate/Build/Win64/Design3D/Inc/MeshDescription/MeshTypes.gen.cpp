// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshDescription/Public/MeshTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshTypes() {}
// Cross Module References
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonID();
	UPackage* Z_Construct_UPackage__Script_MeshDescription();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FElementID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexID();
// End Cross Module References
class UScriptStruct* FPolygonID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHDESCRIPTION_API uint32 Get_Z_Construct_UScriptStruct_FPolygonID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonID, Z_Construct_UPackage__Script_MeshDescription(), TEXT("PolygonID"), sizeof(FPolygonID), Get_Z_Construct_UScriptStruct_FPolygonID_Hash());
	}
	return Singleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FPolygonID>()
{
	return FPolygonID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPolygonID(FPolygonID::StaticStruct, TEXT("/Script/MeshDescription"), TEXT("PolygonID"), false, nullptr, nullptr);
static struct FScriptStruct_MeshDescription_StaticRegisterNativesFPolygonID
{
	FScriptStruct_MeshDescription_StaticRegisterNativesFPolygonID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PolygonID")),new UScriptStruct::TCppStructOps<FPolygonID>);
	}
} ScriptStruct_MeshDescription_StaticRegisterNativesFPolygonID;
	struct Z_Construct_UScriptStruct_FPolygonID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolygonID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"PolygonID",
		sizeof(FPolygonID),
		alignof(FPolygonID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolygonID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPolygonID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshDescription();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PolygonID"), sizeof(FPolygonID), Get_Z_Construct_UScriptStruct_FPolygonID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPolygonID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPolygonID_Hash() { return 2461008063U; }
class UScriptStruct* FPolygonGroupID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHDESCRIPTION_API uint32 Get_Z_Construct_UScriptStruct_FPolygonGroupID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonGroupID, Z_Construct_UPackage__Script_MeshDescription(), TEXT("PolygonGroupID"), sizeof(FPolygonGroupID), Get_Z_Construct_UScriptStruct_FPolygonGroupID_Hash());
	}
	return Singleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FPolygonGroupID>()
{
	return FPolygonGroupID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPolygonGroupID(FPolygonGroupID::StaticStruct, TEXT("/Script/MeshDescription"), TEXT("PolygonGroupID"), false, nullptr, nullptr);
static struct FScriptStruct_MeshDescription_StaticRegisterNativesFPolygonGroupID
{
	FScriptStruct_MeshDescription_StaticRegisterNativesFPolygonGroupID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PolygonGroupID")),new UScriptStruct::TCppStructOps<FPolygonGroupID>);
	}
} ScriptStruct_MeshDescription_StaticRegisterNativesFPolygonGroupID;
	struct Z_Construct_UScriptStruct_FPolygonGroupID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonGroupID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolygonGroupID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonGroupID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonGroupID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"PolygonGroupID",
		sizeof(FPolygonGroupID),
		alignof(FPolygonGroupID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonGroupID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroupID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPolygonGroupID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshDescription();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PolygonGroupID"), sizeof(FPolygonGroupID), Get_Z_Construct_UScriptStruct_FPolygonGroupID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPolygonGroupID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPolygonGroupID_Hash() { return 3379748208U; }
class UScriptStruct* FEdgeID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHDESCRIPTION_API uint32 Get_Z_Construct_UScriptStruct_FEdgeID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdgeID, Z_Construct_UPackage__Script_MeshDescription(), TEXT("EdgeID"), sizeof(FEdgeID), Get_Z_Construct_UScriptStruct_FEdgeID_Hash());
	}
	return Singleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FEdgeID>()
{
	return FEdgeID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdgeID(FEdgeID::StaticStruct, TEXT("/Script/MeshDescription"), TEXT("EdgeID"), false, nullptr, nullptr);
static struct FScriptStruct_MeshDescription_StaticRegisterNativesFEdgeID
{
	FScriptStruct_MeshDescription_StaticRegisterNativesFEdgeID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdgeID")),new UScriptStruct::TCppStructOps<FEdgeID>);
	}
} ScriptStruct_MeshDescription_StaticRegisterNativesFEdgeID;
	struct Z_Construct_UScriptStruct_FEdgeID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdgeID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdgeID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdgeID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"EdgeID",
		sizeof(FEdgeID),
		alignof(FEdgeID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdgeID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdgeID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshDescription();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdgeID"), sizeof(FEdgeID), Get_Z_Construct_UScriptStruct_FEdgeID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdgeID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdgeID_Hash() { return 3329810302U; }
class UScriptStruct* FVertexInstanceID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHDESCRIPTION_API uint32 Get_Z_Construct_UScriptStruct_FVertexInstanceID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexInstanceID, Z_Construct_UPackage__Script_MeshDescription(), TEXT("VertexInstanceID"), sizeof(FVertexInstanceID), Get_Z_Construct_UScriptStruct_FVertexInstanceID_Hash());
	}
	return Singleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FVertexInstanceID>()
{
	return FVertexInstanceID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexInstanceID(FVertexInstanceID::StaticStruct, TEXT("/Script/MeshDescription"), TEXT("VertexInstanceID"), false, nullptr, nullptr);
static struct FScriptStruct_MeshDescription_StaticRegisterNativesFVertexInstanceID
{
	FScriptStruct_MeshDescription_StaticRegisterNativesFVertexInstanceID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexInstanceID")),new UScriptStruct::TCppStructOps<FVertexInstanceID>);
	}
} ScriptStruct_MeshDescription_StaticRegisterNativesFVertexInstanceID;
	struct Z_Construct_UScriptStruct_FVertexInstanceID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexInstanceID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexInstanceID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexInstanceID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexInstanceID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"VertexInstanceID",
		sizeof(FVertexInstanceID),
		alignof(FVertexInstanceID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexInstanceID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexInstanceID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexInstanceID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshDescription();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexInstanceID"), sizeof(FVertexInstanceID), Get_Z_Construct_UScriptStruct_FVertexInstanceID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexInstanceID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexInstanceID_Hash() { return 2343414428U; }
class UScriptStruct* FVertexID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHDESCRIPTION_API uint32 Get_Z_Construct_UScriptStruct_FVertexID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexID, Z_Construct_UPackage__Script_MeshDescription(), TEXT("VertexID"), sizeof(FVertexID), Get_Z_Construct_UScriptStruct_FVertexID_Hash());
	}
	return Singleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FVertexID>()
{
	return FVertexID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexID(FVertexID::StaticStruct, TEXT("/Script/MeshDescription"), TEXT("VertexID"), false, nullptr, nullptr);
static struct FScriptStruct_MeshDescription_StaticRegisterNativesFVertexID
{
	FScriptStruct_MeshDescription_StaticRegisterNativesFVertexID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VertexID")),new UScriptStruct::TCppStructOps<FVertexID>);
	}
} ScriptStruct_MeshDescription_StaticRegisterNativesFVertexID;
	struct Z_Construct_UScriptStruct_FVertexID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"VertexID",
		sizeof(FVertexID),
		alignof(FVertexID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshDescription();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexID"), sizeof(FVertexID), Get_Z_Construct_UScriptStruct_FVertexID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexID_Hash() { return 33005684U; }
class UScriptStruct* FElementID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHDESCRIPTION_API uint32 Get_Z_Construct_UScriptStruct_FElementID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FElementID, Z_Construct_UPackage__Script_MeshDescription(), TEXT("ElementID"), sizeof(FElementID), Get_Z_Construct_UScriptStruct_FElementID_Hash());
	}
	return Singleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FElementID>()
{
	return FElementID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FElementID(FElementID::StaticStruct, TEXT("/Script/MeshDescription"), TEXT("ElementID"), false, nullptr, nullptr);
static struct FScriptStruct_MeshDescription_StaticRegisterNativesFElementID
{
	FScriptStruct_MeshDescription_StaticRegisterNativesFElementID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ElementID")),new UScriptStruct::TCppStructOps<FElementID>);
	}
} ScriptStruct_MeshDescription_StaticRegisterNativesFElementID;
	struct Z_Construct_UScriptStruct_FElementID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IDValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IDValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElementID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
		{ "ToolTip", "@todo mesheditor: Need comments\n@todo mesheditor script: BP doesn't have name spaces, so we might need a more specific display name, or just rename our various types" },
	};
#endif
	void* Z_Construct_UScriptStruct_FElementID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FElementID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElementID_Statics::NewProp_IDValue_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
		{ "ToolTip", "The actual mesh element index this ID represents.  Read-only." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElementID_Statics::NewProp_IDValue = { "IDValue", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FElementID, IDValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FElementID_Statics::NewProp_IDValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FElementID_Statics::NewProp_IDValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FElementID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElementID_Statics::NewProp_IDValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FElementID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		nullptr,
		&NewStructOps,
		"ElementID",
		sizeof(FElementID),
		alignof(FElementID),
		Z_Construct_UScriptStruct_FElementID_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FElementID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FElementID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FElementID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FElementID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FElementID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshDescription();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ElementID"), sizeof(FElementID), Get_Z_Construct_UScriptStruct_FElementID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FElementID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FElementID_Hash() { return 2334369843U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

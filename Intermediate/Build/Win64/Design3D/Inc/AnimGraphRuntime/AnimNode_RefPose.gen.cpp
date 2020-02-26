// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_RefPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RefPose() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RefPose();
// End Cross Module References
	static UEnum* ERefPoseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERefPoseType"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERefPoseType>()
	{
		return ERefPoseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERefPoseType(ERefPoseType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERefPoseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_Hash() { return 1042645378U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERefPoseType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIT_LocalSpace", (int64)EIT_LocalSpace },
				{ "EIT_Additive", (int64)EIT_Additive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"ERefPoseType",
				"ERefPoseType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_MeshSpaceRefPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MeshSpaceRefPose"), sizeof(FAnimNode_MeshSpaceRefPose), Get_Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_MeshSpaceRefPose>()
{
	return FAnimNode_MeshSpaceRefPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_MeshSpaceRefPose(FAnimNode_MeshSpaceRefPose::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_MeshSpaceRefPose"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MeshSpaceRefPose
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MeshSpaceRefPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_MeshSpaceRefPose")),new UScriptStruct::TCppStructOps<FAnimNode_MeshSpaceRefPose>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MeshSpaceRefPose;
	struct Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MeshSpaceRefPose>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_MeshSpaceRefPose",
		sizeof(FAnimNode_MeshSpaceRefPose),
		alignof(FAnimNode_MeshSpaceRefPose),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_MeshSpaceRefPose"), sizeof(FAnimNode_MeshSpaceRefPose), Get_Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Hash() { return 2534406240U; }
class UScriptStruct* FAnimNode_RefPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RefPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RefPose, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RefPose"), sizeof(FAnimNode_RefPose), Get_Z_Construct_UScriptStruct_FAnimNode_RefPose_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RefPose>()
{
	return FAnimNode_RefPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RefPose(FAnimNode_RefPose::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_RefPose"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RefPose
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RefPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RefPose")),new UScriptStruct::TCppStructOps<FAnimNode_RefPose>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RefPose;
	struct Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPoseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RefPoseType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
		{ "ToolTip", "RefPose pose nodes - ref pose or additive RefPose pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RefPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::NewProp_RefPoseType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::NewProp_RefPoseType = { "RefPoseType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RefPose, RefPoseType), Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::NewProp_RefPoseType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::NewProp_RefPoseType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::NewProp_RefPoseType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_RefPose",
		sizeof(FAnimNode_RefPose),
		alignof(FAnimNode_RefPose),
		Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RefPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RefPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RefPose"), sizeof(FAnimNode_RefPose), Get_Z_Construct_UScriptStruct_FAnimNode_RefPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RefPose_Hash() { return 3311802864U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

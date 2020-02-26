// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRMesh/Public/MeshReconstructorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshReconstructorBase() {}
// Cross Module References
	MRMESH_API UScriptStruct* Z_Construct_UScriptStruct_FMRMeshConfiguration();
	UPackage* Z_Construct_UPackage__Script_MRMesh();
	MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction();
// End Cross Module References
class UScriptStruct* FMRMeshConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MRMESH_API uint32 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRMeshConfiguration, Z_Construct_UPackage__Script_MRMesh(), TEXT("MRMeshConfiguration"), sizeof(FMRMeshConfiguration), Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_Hash());
	}
	return Singleton;
}
template<> MRMESH_API UScriptStruct* StaticStruct<FMRMeshConfiguration>()
{
	return FMRMeshConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMRMeshConfiguration(FMRMeshConfiguration::StaticStruct, TEXT("/Script/MRMesh"), TEXT("MRMeshConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration
{
	FScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MRMeshConfiguration")),new UScriptStruct::TCppStructOps<FMRMeshConfiguration>);
	}
} ScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration;
	struct Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRMeshConfiguration>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
		nullptr,
		&NewStructOps,
		"MRMeshConfiguration",
		sizeof(FMRMeshConfiguration),
		alignof(FMRMeshConfiguration),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMRMeshConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MRMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MRMeshConfiguration"), sizeof(FMRMeshConfiguration), Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_Hash() { return 3906583181U; }
	void UMeshReconstructorBase::StaticRegisterNativesUMeshReconstructorBase()
	{
		UClass* Class = UMeshReconstructorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectMRMesh", &UMeshReconstructorBase::execConnectMRMesh },
			{ "DisconnectMRMesh", &UMeshReconstructorBase::execDisconnectMRMesh },
			{ "IsReconstructionPaused", &UMeshReconstructorBase::execIsReconstructionPaused },
			{ "IsReconstructionStarted", &UMeshReconstructorBase::execIsReconstructionStarted },
			{ "PauseReconstruction", &UMeshReconstructorBase::execPauseReconstruction },
			{ "StartReconstruction", &UMeshReconstructorBase::execStartReconstruction },
			{ "StopReconstruction", &UMeshReconstructorBase::execStopReconstruction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics
	{
		struct MeshReconstructorBase_eventConnectMRMesh_Parms
		{
			UMRMeshComponent* Mesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshReconstructorBase_eventConnectMRMesh_Parms, Mesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "ConnectMRMesh", sizeof(MeshReconstructorBase_eventConnectMRMesh_Parms), Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "DisconnectMRMesh", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics
	{
		struct MeshReconstructorBase_eventIsReconstructionPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshReconstructorBase_eventIsReconstructionPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshReconstructorBase_eventIsReconstructionPaused_Parms), &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "IsReconstructionPaused", sizeof(MeshReconstructorBase_eventIsReconstructionPaused_Parms), Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics
	{
		struct MeshReconstructorBase_eventIsReconstructionStarted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshReconstructorBase_eventIsReconstructionStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshReconstructorBase_eventIsReconstructionStarted_Parms), &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "IsReconstructionStarted", sizeof(MeshReconstructorBase_eventIsReconstructionStarted_Parms), Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "PauseReconstruction", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "StartReconstruction", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "StopReconstruction", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister()
	{
		return UMeshReconstructorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMeshReconstructorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshReconstructorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshReconstructorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh, "ConnectMRMesh" }, // 1986065291
		{ &Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh, "DisconnectMRMesh" }, // 1709461052
		{ &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused, "IsReconstructionPaused" }, // 2520077769
		{ &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted, "IsReconstructionStarted" }, // 1132862368
		{ &Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction, "PauseReconstruction" }, // 2596098932
		{ &Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction, "StartReconstruction" }, // 409211284
		{ &Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction, "StopReconstruction" }, // 676833808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "IncludePath", "MeshReconstructorBase.h" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshReconstructorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshReconstructorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshReconstructorBase_Statics::ClassParams = {
		&UMeshReconstructorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshReconstructorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshReconstructorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshReconstructorBase, 2669288518);
	template<> MRMESH_API UClass* StaticClass<UMeshReconstructorBase>()
	{
		return UMeshReconstructorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshReconstructorBase(Z_Construct_UClass_UMeshReconstructorBase, &UMeshReconstructorBase::StaticClass, TEXT("/Script/MRMesh"), TEXT("UMeshReconstructorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshReconstructorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

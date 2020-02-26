// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Design3D/MyStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStaticMeshComponent() {}
// Cross Module References
	DESIGN3D_API UEnum* Z_Construct_UEnum_Design3D_EPathType();
	UPackage* Z_Construct_UPackage__Script_Design3D();
	DESIGN3D_API UScriptStruct* Z_Construct_UScriptStruct_FReturnedData();
	DESIGN3D_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DESIGN3D_API UClass* Z_Construct_UClass_UMyStaticMeshComponent_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_UMyStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	DESIGN3D_API UFunction* Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	DESIGN3D_API UFunction* Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	DESIGN3D_API UFunction* Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile();
	DESIGN3D_API UFunction* Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage();
	DESIGN3D_API UFunction* Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* EPathType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Design3D_EPathType, Z_Construct_UPackage__Script_Design3D(), TEXT("EPathType"));
		}
		return Singleton;
	}
	template<> DESIGN3D_API UEnum* StaticEnum<EPathType>()
	{
		return EPathType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPathType(EPathType_StaticEnum, TEXT("/Script/Design3D"), TEXT("EPathType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Design3D_EPathType_Hash() { return 3253440261U; }
	UEnum* Z_Construct_UEnum_Design3D_EPathType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPathType"), 0, Get_Z_Construct_UEnum_Design3D_EPathType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPathType::Absolute", (int64)EPathType::Absolute },
				{ "EPathType::Relative", (int64)EPathType::Relative },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Design3D,
				nullptr,
				"EPathType",
				"EPathType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FReturnedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGN3D_API uint32 Get_Z_Construct_UScriptStruct_FReturnedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReturnedData, Z_Construct_UPackage__Script_Design3D(), TEXT("ReturnedData"), sizeof(FReturnedData), Get_Z_Construct_UScriptStruct_FReturnedData_Hash());
	}
	return Singleton;
}
template<> DESIGN3D_API UScriptStruct* StaticStruct<FReturnedData>()
{
	return FReturnedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReturnedData(FReturnedData::StaticStruct, TEXT("/Script/Design3D"), TEXT("ReturnedData"), false, nullptr, nullptr);
static struct FScriptStruct_Design3D_StaticRegisterNativesFReturnedData
{
	FScriptStruct_Design3D_StaticRegisterNativesFReturnedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReturnedData")),new UScriptStruct::TCppStructOps<FReturnedData>);
	}
} ScriptStruct_Design3D_StaticRegisterNativesFReturnedData;
	struct Z_Construct_UScriptStruct_FReturnedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_meshInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_meshInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReturnedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReturnedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReturnedData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo = { "meshInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReturnedData, meshInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_Inner = { "meshInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeshInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes = { "NumMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReturnedData, NumMeshes), METADATA_PARAMS(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FReturnedData*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FReturnedData), &Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReturnedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReturnedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
		nullptr,
		&NewStructOps,
		"ReturnedData",
		sizeof(FReturnedData),
		alignof(FReturnedData),
		Z_Construct_UScriptStruct_FReturnedData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReturnedData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReturnedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReturnedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReturnedData"), sizeof(FReturnedData), Get_Z_Construct_UScriptStruct_FReturnedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReturnedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReturnedData_Hash() { return 2293263467U; }
class UScriptStruct* FMeshInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGN3D_API uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfo, Z_Construct_UPackage__Script_Design3D(), TEXT("MeshInfo"), sizeof(FMeshInfo), Get_Z_Construct_UScriptStruct_FMeshInfo_Hash());
	}
	return Singleton;
}
template<> DESIGN3D_API UScriptStruct* StaticStruct<FMeshInfo>()
{
	return FMeshInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshInfo(FMeshInfo::StaticStruct, TEXT("/Script/Design3D"), TEXT("MeshInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Design3D_StaticRegisterNativesFMeshInfo
{
	FScriptStruct_Design3D_StaticRegisterNativesFMeshInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshInfo")),new UScriptStruct::TCppStructOps<FMeshInfo>);
	}
} ScriptStruct_Design3D_StaticRegisterNativesFMeshInfo;
	struct Z_Construct_UScriptStruct_FMeshInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexFColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexFColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexFColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_RelativeTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Tangents_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo, Tangents), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Tangents_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Tangents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexFColors_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
		{ "ToolTip", "RMC\xca\xb9??FColor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexFColors = { "VertexFColors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo, VertexFColors), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexFColors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexFColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexFColors_Inner = { "VertexFColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexColors_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
		{ "ToolTip", "procedural mesh\xca\xb9??FLinearColor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo, VertexColors), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexColors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_UV0_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo, UV0), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_UV0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_UV0_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Normals_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo, Normals), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Normals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Triangles_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo, Triangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Triangles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo, Vertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Vertices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexFColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexFColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_UV0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_UV0_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_Vertices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
		nullptr,
		&NewStructOps,
		"MeshInfo",
		sizeof(FMeshInfo),
		alignof(FMeshInfo),
		Z_Construct_UScriptStruct_FMeshInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshInfo"), sizeof(FMeshInfo), Get_Z_Construct_UScriptStruct_FMeshInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_Hash() { return 2558067202U; }
	void UMyStaticMeshComponent::StaticRegisterNativesUMyStaticMeshComponent()
	{
		UClass* Class = UMyStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildMyTextureStreamingData", &UMyStaticMeshComponent::execBuildMyTextureStreamingData },
			{ "GetMyMaterials", &UMyStaticMeshComponent::execGetMyMaterials },
			{ "LoadMeshFromFile", &UMyStaticMeshComponent::execLoadMeshFromFile },
			{ "LoadTextureFromImage", &UMyStaticMeshComponent::execLoadTextureFromImage },
			{ "SetRMCInfo", &UMyStaticMeshComponent::execSetRMCInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics
	{
		struct MyStaticMeshComponent_eventBuildMyTextureStreamingData_Parms
		{
			UWorld* InWorld;
			UStaticMeshComponent* MyStaticMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyStaticMeshComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::NewProp_MyStaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::NewProp_MyStaticMeshComponent = { "MyStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventBuildMyTextureStreamingData_Parms, MyStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::NewProp_MyStaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::NewProp_MyStaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventBuildMyTextureStreamingData_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::NewProp_MyStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::NewProp_InWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
		{ "ToolTip", "GetUsedMaterials??BuildTextureStreamingData????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStaticMeshComponent, nullptr, "BuildMyTextureStreamingData", sizeof(MyStaticMeshComponent_eventBuildMyTextureStreamingData_Parms), Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics
	{
		struct MyStaticMeshComponent_eventGetMyMaterials_Parms
		{
			UStaticMeshComponent* MyStaticMeshComponent;
			TArray<UMaterialInterface*> OutMaterials;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyStaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::NewProp_OutMaterials = { "OutMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventGetMyMaterials_Parms, OutMaterials), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::NewProp_OutMaterials_Inner = { "OutMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::NewProp_MyStaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::NewProp_MyStaticMeshComponent = { "MyStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventGetMyMaterials_Parms, MyStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::NewProp_MyStaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::NewProp_MyStaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::NewProp_OutMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::NewProp_OutMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::NewProp_MyStaticMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
		{ "ToolTip", "\xd4\xad?????\xc4\xbc??\xd0\xa3??\xc3\xba???????\xd0\xb4???????\xe9\xba\xaf??" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStaticMeshComponent, nullptr, "GetMyMaterials", sizeof(MyStaticMeshComponent_eventGetMyMaterials_Parms), Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics
	{
		struct MyStaticMeshComponent_eventLoadMeshFromFile_Parms
		{
			FString filepath;
			EPathType type;
			FReturnedData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filepath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventLoadMeshFromFile_Parms, ReturnValue), Z_Construct_UScriptStruct_FReturnedData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventLoadMeshFromFile_Parms, type), Z_Construct_UEnum_Design3D_EPathType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventLoadMeshFromFile_Parms, filepath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::NewProp_filepath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
		{ "ToolTip", "\xca\xb9??assimp??\xc8\xa1\xc4\xa3??????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStaticMeshComponent, nullptr, "LoadMeshFromFile", sizeof(MyStaticMeshComponent_eventLoadMeshFromFile_Parms), Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics
	{
		struct MyStaticMeshComponent_eventLoadTextureFromImage_Parms
		{
			FString ImagePath;
			FReturnedData result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventLoadTextureFromImage_Parms, result), Z_Construct_UScriptStruct_FReturnedData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventLoadTextureFromImage_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::NewProp_ImagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::NewProp_ImagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::NewProp_ImagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
		{ "ToolTip", "?\xd3\xb4????\xd0\xb6?\xc8\xa1\xcd\xbc\xc6\xac????????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStaticMeshComponent, nullptr, "LoadTextureFromImage", sizeof(MyStaticMeshComponent_eventLoadTextureFromImage_Parms), Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics
	{
		struct MyStaticMeshComponent_eventSetRMCInfo_Parms
		{
			USceneComponent* RootComponent;
			UStaticMeshComponent* MyStaticMeshComponent;
			URuntimeMeshComponent* RMComponent;
			UMaterial* RMCMaterial;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RMCMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RMComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RMComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyStaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyStaticMeshComponent_eventSetRMCInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyStaticMeshComponent_eventSetRMCInfo_Parms), &Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RMCMaterial = { "RMCMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventSetRMCInfo_Parms, RMCMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RMComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RMComponent = { "RMComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventSetRMCInfo_Parms, RMComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RMComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RMComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_MyStaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_MyStaticMeshComponent = { "MyStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventSetRMCInfo_Parms, MyStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_MyStaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_MyStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RootComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RootComponent = { "RootComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStaticMeshComponent_eventSetRMCInfo_Parms, RootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RootComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RootComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RMCMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RMComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_MyStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::NewProp_RootComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
		{ "ToolTip", "??\xc8\xa1RMC????????\xcf\xa2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStaticMeshComponent, nullptr, "SetRMCInfo", sizeof(MyStaticMeshComponent_eventSetRMCInfo_Parms), Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyStaticMeshComponent_NoRegister()
	{
		return UMyStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualMode_MetaData[];
#endif
		static void NewProp_ManualMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ManualMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedSecondPass_MetaData[];
#endif
		static void NewProp_NeedSecondPass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedSecondPass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPassMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondPassMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyStaticMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyStaticMeshComponent_BuildMyTextureStreamingData, "BuildMyTextureStreamingData" }, // 1968430906
		{ &Z_Construct_UFunction_UMyStaticMeshComponent_GetMyMaterials, "GetMyMaterials" }, // 1242188556
		{ &Z_Construct_UFunction_UMyStaticMeshComponent_LoadMeshFromFile, "LoadMeshFromFile" }, // 2487269087
		{ &Z_Construct_UFunction_UMyStaticMeshComponent_LoadTextureFromImage, "LoadTextureFromImage" }, // 3547597890
		{ &Z_Construct_UFunction_UMyStaticMeshComponent_SetRMCInfo, "SetRMCInfo" }, // 3033692372
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "MyStaticMeshComponent.h" },
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_ManualMode_MetaData[] = {
		{ "Category", "RMCVariable" },
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_ManualMode_SetBit(void* Obj)
	{
		((UMyStaticMeshComponent*)Obj)->ManualMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_ManualMode = { "ManualMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyStaticMeshComponent), &Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_ManualMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_ManualMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_ManualMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NumMeshes_MetaData[] = {
		{ "Category", "RMCVariable" },
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
		{ "ToolTip", "??\xca\xbc??mesh?????\xd8\xb1???" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NumMeshes = { "NumMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyStaticMeshComponent, NumMeshes), METADATA_PARAMS(Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NumMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NumMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NeedSecondPass_MetaData[] = {
		{ "Category", "MultiplePass" },
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NeedSecondPass_SetBit(void* Obj)
	{
		((UMyStaticMeshComponent*)Obj)->NeedSecondPass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NeedSecondPass = { "NeedSecondPass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyStaticMeshComponent), &Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NeedSecondPass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NeedSecondPass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NeedSecondPass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_SecondPassMaterial_MetaData[] = {
		{ "Category", "MultiplePass" },
		{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
		{ "ToolTip", "UFUNCTION()\nFPrimitiveSceneProxy* CreateMySceneProxy(UStaticMeshComponent* MyStaticMeshComponent);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_SecondPassMaterial = { "SecondPassMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyStaticMeshComponent, SecondPassMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_SecondPassMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_SecondPassMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_ManualMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NumMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_NeedSecondPass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStaticMeshComponent_Statics::NewProp_SecondPassMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyStaticMeshComponent_Statics::ClassParams = {
		&UMyStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyStaticMeshComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMyStaticMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyStaticMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyStaticMeshComponent, 1186862115);
	template<> DESIGN3D_API UClass* StaticClass<UMyStaticMeshComponent>()
	{
		return UMyStaticMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyStaticMeshComponent(Z_Construct_UClass_UMyStaticMeshComponent, &UMyStaticMeshComponent::StaticClass, TEXT("/Script/Design3D"), TEXT("UMyStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

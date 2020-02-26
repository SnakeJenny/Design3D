// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/Tests/FbxAutomationCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxAutomationCommon() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTestPlan_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTestPlan();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UFbxImportUI_NoRegister();
// End Cross Module References
	static UEnum* EFBXTestPlanActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXTestPlanActionType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXTestPlanActionType>()
	{
		return EFBXTestPlanActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXTestPlanActionType(EFBXTestPlanActionType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFBXTestPlanActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Hash() { return 708756985U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXTestPlanActionType"), 0, Get_Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Import", (int64)Import },
				{ "Reimport", (int64)Reimport },
				{ "AddLOD", (int64)AddLOD },
				{ "ReimportLOD", (int64)ReimportLOD },
				{ "ImportReload", (int64)ImportReload },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddLOD.ToolTip", "Add a new LOD" },
				{ "Import.ToolTip", "Normal import" },
				{ "ImportReload.ToolTip", "The fbx will be imported, package will be save, object will be delete from memory then reload from the saved package. This mode force a delete of the asset after the test, no reimport is possible after" },
				{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
				{ "Reimport.ToolTip", "Re-import the previous import, this is mandatory to make an import before" },
				{ "ReimportLOD.ToolTip", "Reimport an existing LOD" },
				{ "ToolTip", "Import mesh type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFBXTestPlanActionType",
				"EFBXTestPlanActionType",
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
	static UEnum* EFBXExpectedResultPreset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXExpectedResultPreset"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXExpectedResultPreset>()
	{
		return EFBXExpectedResultPreset_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXExpectedResultPreset(EFBXExpectedResultPreset_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFBXExpectedResultPreset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Hash() { return 1387098668U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXExpectedResultPreset"), 0, Get_Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Error_Number", (int64)Error_Number },
				{ "Warning_Number", (int64)Warning_Number },
				{ "Created_Staticmesh_Number", (int64)Created_Staticmesh_Number },
				{ "Created_Skeletalmesh_Number", (int64)Created_Skeletalmesh_Number },
				{ "Materials_Created_Number", (int64)Materials_Created_Number },
				{ "Material_Slot_Imported_Name", (int64)Material_Slot_Imported_Name },
				{ "Vertex_Number", (int64)Vertex_Number },
				{ "Lod_Number", (int64)Lod_Number },
				{ "Vertex_Number_Lod", (int64)Vertex_Number_Lod },
				{ "Mesh_Materials_Number", (int64)Mesh_Materials_Number },
				{ "Mesh_LOD_Section_Number", (int64)Mesh_LOD_Section_Number },
				{ "Mesh_LOD_Section_Vertex_Number", (int64)Mesh_LOD_Section_Vertex_Number },
				{ "Mesh_LOD_Section_Triangle_Number", (int64)Mesh_LOD_Section_Triangle_Number },
				{ "Mesh_LOD_Section_Material_Name", (int64)Mesh_LOD_Section_Material_Name },
				{ "Mesh_LOD_Section_Material_Index", (int64)Mesh_LOD_Section_Material_Index },
				{ "Mesh_LOD_Section_Material_Imported_Name", (int64)Mesh_LOD_Section_Material_Imported_Name },
				{ "Mesh_LOD_Vertex_Position", (int64)Mesh_LOD_Vertex_Position },
				{ "Mesh_LOD_Vertex_Normal", (int64)Mesh_LOD_Vertex_Normal },
				{ "LOD_UV_Channel_Number", (int64)LOD_UV_Channel_Number },
				{ "Bone_Number", (int64)Bone_Number },
				{ "Bone_Position", (int64)Bone_Position },
				{ "Animation_Frame_Number", (int64)Animation_Frame_Number },
				{ "Animation_Length", (int64)Animation_Length },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animation_Frame_Number.ToolTip", "Data should contain the Number of Frame [int0]." },
				{ "Animation_Length.ToolTip", "Data should contain the animation length [float0]." },
				{ "Bone_Number.ToolTip", "Data should contain the number of bone created [int0]." },
				{ "Bone_Position.ToolTip", "Data should contain the bone index [int0] and a position xyz [float0 float1 float2] optionnaly you can pass a tolerance [float3]." },
				{ "Created_Skeletalmesh_Number.ToolTip", "Data should contain the number of skeletal mesh created [int0]." },
				{ "Created_Staticmesh_Number.ToolTip", "Data should contain the number of static mesh created [int0]." },
				{ "Error_Number.ToolTip", "Data should contain the number of error [int0]." },
				{ "Lod_Number.ToolTip", "Data should be the expected number of LOD [int0]." },
				{ "LOD_UV_Channel_Number.ToolTip", "Data should be the LOD index [int0] and the number of UV channel [int1] for the specified LOD." },
				{ "Material_Slot_Imported_Name.ToolTip", "Data should be the slot index [int0], and the expected original imported material slot name [string0]." },
				{ "Materials_Created_Number.ToolTip", "Data should contain the number of Material created [int0] under the target content folder." },
				{ "Mesh_LOD_Section_Material_Imported_Name.ToolTip", "Data should be the LOD index [int0], section index [int1] and the expected original imported material slot name [string0]." },
				{ "Mesh_LOD_Section_Material_Index.ToolTip", "Data should be the LOD index [int0], section index [int1] and the expected material index of mesh materials [int2]." },
				{ "Mesh_LOD_Section_Material_Name.ToolTip", "Data should be the LOD index [int0], section index [int1] and the expected name of material [string0]." },
				{ "Mesh_LOD_Section_Number.ToolTip", "Data should be the LOD index [int0] and the expected number of section for a mesh [int1]." },
				{ "Mesh_LOD_Section_Triangle_Number.ToolTip", "Data should be the LOD index [int0], section index [int1] and the expected number of triangle [int2]." },
				{ "Mesh_LOD_Section_Vertex_Number.ToolTip", "Data should be the LOD index [int0], section index [int1] and the expected number of vertex [int2]." },
				{ "Mesh_LOD_Vertex_Normal.ToolTip", "Data should be the LOD index [int0], vertex index [int1] and the expected normal of the vertex X[float0] Y[float1] Z[float2]." },
				{ "Mesh_LOD_Vertex_Position.ToolTip", "Data should be the LOD index [int0], vertex index [int1] and the expected position of the vertex X[float0] Y[float1] Z[float2]." },
				{ "Mesh_Materials_Number.ToolTip", "Data should contain the number of Material indexed by the mesh [int0]." },
				{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
				{ "ToolTip", "Import mesh type" },
				{ "Vertex_Number.ToolTip", "Data should be the total number of vertex for all LOD [int0]." },
				{ "Vertex_Number_Lod.ToolTip", "Data should be the LOD index [int0] and total number of vertex for lod [int1]." },
				{ "Warning_Number.ToolTip", "Data should contain the number of warning [int0]." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFBXExpectedResultPreset",
				"EFBXExpectedResultPreset",
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
class UScriptStruct* FFbxTestPlanExpectedResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult, Z_Construct_UPackage__Script_UnrealEd(), TEXT("FbxTestPlanExpectedResult"), sizeof(FFbxTestPlanExpectedResult), Get_Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FFbxTestPlanExpectedResult>()
{
	return FFbxTestPlanExpectedResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFbxTestPlanExpectedResult(FFbxTestPlanExpectedResult::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("FbxTestPlanExpectedResult"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFFbxTestPlanExpectedResult
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFFbxTestPlanExpectedResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FbxTestPlanExpectedResult")),new UScriptStruct::TCppStructOps<FFbxTestPlanExpectedResult>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFFbxTestPlanExpectedResult;
	struct Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedPresetsDataString_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExpectedPresetsDataString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExpectedPresetsDataString_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedPresetsDataDouble_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExpectedPresetsDataDouble;
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_ExpectedPresetsDataDouble_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedPresetsDataFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExpectedPresetsDataFloat;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpectedPresetsDataFloat_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedPresetsDataInteger_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExpectedPresetsDataInteger;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpectedPresetsDataInteger_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedPresetsType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExpectedPresetsType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Container for detailing collision automated test data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFbxTestPlanExpectedResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset data: string" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString = { "ExpectedPresetsDataString", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFbxTestPlanExpectedResult, ExpectedPresetsDataString), METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString_Inner = { "ExpectedPresetsDataString", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset data: double" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble = { "ExpectedPresetsDataDouble", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFbxTestPlanExpectedResult, ExpectedPresetsDataDouble), METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble_MetaData)) };
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble_Inner = { "ExpectedPresetsDataDouble", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset data: double" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat = { "ExpectedPresetsDataFloat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFbxTestPlanExpectedResult, ExpectedPresetsDataFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat_Inner = { "ExpectedPresetsDataFloat", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset data: integer" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger = { "ExpectedPresetsDataInteger", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFbxTestPlanExpectedResult, ExpectedPresetsDataInteger), METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger_Inner = { "ExpectedPresetsDataInteger", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsType_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset type" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsType = { "ExpectedPresetsType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFbxTestPlanExpectedResult, ExpectedPresetsType), Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"FbxTestPlanExpectedResult",
		sizeof(FFbxTestPlanExpectedResult),
		alignof(FFbxTestPlanExpectedResult),
		Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FbxTestPlanExpectedResult"), sizeof(FFbxTestPlanExpectedResult), Get_Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Hash() { return 3202580975U; }
	void UFbxTestPlan::StaticRegisterNativesUFbxTestPlan()
	{
	}
	UClass* Z_Construct_UClass_UFbxTestPlan_NoRegister()
	{
		return UFbxTestPlan::StaticClass();
	}
	struct Z_Construct_UClass_UFbxTestPlan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExpectedResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpectedResult_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteFolderAssets_MetaData[];
#endif
		static void NewProp_bDeleteFolderAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteFolderAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPlanName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestPlanName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxTestPlan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Tests/FbxAutomationCommon.h" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Container for detailing collision automated test data." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ImportUI_MetaData[] = {
		{ "Category", "Options" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Options use for this test plan, Transient because we manually serialize the options." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ImportUI = { "ImportUI", nullptr, (EPropertyFlags)0x0012000000082009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTestPlan, ImportUI), Z_Construct_UClass_UFbxImportUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ImportUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ImportUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset type" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult = { "ExpectedResult", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTestPlan, ExpectedResult), METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult_Inner = { "ExpectedResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "If true the test will delete all assets create in the import folder" },
	};
#endif
	void Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets_SetBit(void* Obj)
	{
		((UFbxTestPlan*)Obj)->bDeleteFolderAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets = { "bDeleteFolderAssets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxTestPlan), &Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_LodIndex_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "The LOD index in case the user choose to add or reimport a LOD" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTestPlan, LodIndex), METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_LodIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Tell the system what we want to do" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTestPlan, Action), Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType, METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_TestPlanName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Name of the Test Plan" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_TestPlanName = { "TestPlanName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxTestPlan, TestPlanName), METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_TestPlanName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_TestPlanName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxTestPlan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ImportUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_LodIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_TestPlanName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxTestPlan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxTestPlan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxTestPlan_Statics::ClassParams = {
		&UFbxTestPlan::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxTestPlan_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxTestPlan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxTestPlan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxTestPlan, 447245619);
	template<> UNREALED_API UClass* StaticClass<UFbxTestPlan>()
	{
		return UFbxTestPlan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxTestPlan(Z_Construct_UClass_UFbxTestPlan, &UFbxTestPlan::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxTestPlan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxTestPlan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

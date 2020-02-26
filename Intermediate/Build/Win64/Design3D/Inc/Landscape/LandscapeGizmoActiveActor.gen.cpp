// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeGizmoActiveActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGizmoActiveActor() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoType();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoSelectData();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* ELandscapeGizmoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeGizmoType, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeGizmoType"));
		}
		return Singleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeGizmoType>()
	{
		return ELandscapeGizmoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeGizmoType(ELandscapeGizmoType_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeGizmoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Hash() { return 3794295189U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeGizmoType"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LGT_None", (int64)LGT_None },
				{ "LGT_Height", (int64)LGT_Height },
				{ "LGT_Weight", (int64)LGT_Weight },
				{ "LGT_MAX", (int64)LGT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				"ELandscapeGizmoType",
				"ELandscapeGizmoType",
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
class UScriptStruct* FGizmoSelectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FGizmoSelectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoSelectData, Z_Construct_UPackage__Script_Landscape(), TEXT("GizmoSelectData"), sizeof(FGizmoSelectData), Get_Z_Construct_UScriptStruct_FGizmoSelectData_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FGizmoSelectData>()
{
	return FGizmoSelectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGizmoSelectData(FGizmoSelectData::StaticStruct, TEXT("/Script/Landscape"), TEXT("GizmoSelectData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFGizmoSelectData
{
	FScriptStruct_Landscape_StaticRegisterNativesFGizmoSelectData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GizmoSelectData")),new UScriptStruct::TCppStructOps<FGizmoSelectData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFGizmoSelectData;
	struct Z_Construct_UScriptStruct_FGizmoSelectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightData_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoSelectData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoSelectData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData = { "HeightData", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGizmoSelectData, HeightData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGizmoSelectData, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoSelectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoSelectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"GizmoSelectData",
		sizeof(FGizmoSelectData),
		alignof(FGizmoSelectData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoSelectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGizmoSelectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GizmoSelectData"), sizeof(FGizmoSelectData), Get_Z_Construct_UScriptStruct_FGizmoSelectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGizmoSelectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGizmoSelectData_Hash() { return 3905938127U; }
	void ALandscapeGizmoActiveActor::StaticRegisterNativesALandscapeGizmoActiveActor()
	{
	}
	UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister()
	{
		return ALandscapeGizmoActiveActor::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsnappedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnsnappedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToLandscapeGrid_MetaData[];
#endif
		static void NewProp_bSnapToLandscapeGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToLandscapeGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerInfos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoMeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoMeshMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoDataMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoDataMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumVerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrustumVerts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedScaleXY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedScaleXY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampledNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SampledNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampledNormal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampledHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SampledHeight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampledHeight_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeGizmoActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGizmoActiveActor.h" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation = { "UnsnappedRotation", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, UnsnappedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bSnapToLandscapeGrid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bSnapToLandscapeGrid_SetBit(void* Obj)
	{
		((ALandscapeGizmoActiveActor*)Obj)->bSnapToLandscapeGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bSnapToLandscapeGrid = { "bSnapToLandscapeGrid", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeGizmoActiveActor), &Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bSnapToLandscapeGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bSnapToLandscapeGrid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bSnapToLandscapeGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_MetaData[] = {
		{ "Category", "LandscapeGizmoActiveActor" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos = { "LayerInfos", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, LayerInfos), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_Inner = { "LayerInfos", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial = { "GizmoMeshMaterial", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoMeshMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial = { "GizmoDataMaterial", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoDataMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial = { "GizmoMaterial", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts = { "FrustumVerts", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(FrustumVerts, ALandscapeGizmoActiveActor), STRUCT_OFFSET(ALandscapeGizmoActiveActor, FrustumVerts), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY = { "CachedScaleXY", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedScaleXY), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight = { "CachedHeight", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedHeight), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth = { "CachedWidth", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedWidth), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY = { "SampleSizeY", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampleSizeY), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX = { "SampleSizeX", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampleSizeX), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal = { "SampledNormal", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampledNormal), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_Inner = { "SampledNormal", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight = { "SampledHeight", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampledHeight), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_Inner = { "SampledHeight", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, TextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture = { "GizmoTexture", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, DataType), Z_Construct_UEnum_Landscape_ELandscapeGizmoType, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bSnapToLandscapeGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeGizmoActiveActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::ClassParams = {
		&ALandscapeGizmoActiveActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::PropPointers), 0),
		0,
		0x008802A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapeGizmoActiveActor, 3159931582);
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeGizmoActiveActor>()
	{
		return ALandscapeGizmoActiveActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeGizmoActiveActor(Z_Construct_UClass_ALandscapeGizmoActiveActor, &ALandscapeGizmoActiveActor::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeGizmoActiveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeGizmoActiveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

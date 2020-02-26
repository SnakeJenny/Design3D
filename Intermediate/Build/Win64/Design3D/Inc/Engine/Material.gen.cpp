// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/Material.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterial() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialDecalResponse();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDecalBlendMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterGroupData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialFunctionInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector2MaterialInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorMaterialInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarMaterialInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorMaterialInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERefractionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendableLocation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialTessellationMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucencyLightingMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialDomain();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	static UEnum* EMaterialDecalResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialDecalResponse, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialDecalResponse"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialDecalResponse>()
	{
		return EMaterialDecalResponse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialDecalResponse(EMaterialDecalResponse_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialDecalResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialDecalResponse_Hash() { return 433269395U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialDecalResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialDecalResponse"), 0, Get_Z_Construct_UEnum_Engine_EMaterialDecalResponse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MDR_None", (int64)MDR_None },
				{ "MDR_ColorNormalRoughness", (int64)MDR_ColorNormalRoughness },
				{ "MDR_Color", (int64)MDR_Color },
				{ "MDR_ColorNormal", (int64)MDR_ColorNormal },
				{ "MDR_ColorRoughness", (int64)MDR_ColorRoughness },
				{ "MDR_Normal", (int64)MDR_Normal },
				{ "MDR_NormalRoughness", (int64)MDR_NormalRoughness },
				{ "MDR_Roughness", (int64)MDR_Roughness },
				{ "MDR_MAX", (int64)MDR_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MDR_Color.DisplayName", "Color" },
				{ "MDR_Color.ToolTip", "Receive Decals, applies color DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_ColorNormal.DisplayName", "Color Normal" },
				{ "MDR_ColorNormal.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_ColorNormalRoughness.DisplayName", "Color Normal Roughness" },
				{ "MDR_ColorNormalRoughness.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_ColorRoughness.DisplayName", "Color Roughness" },
				{ "MDR_ColorRoughness.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_None.DisplayName", "None" },
				{ "MDR_None.ToolTip", "Do not receive decals (Later we still can read the DBuffer channels to customize the effect, this frees up some interpolators)." },
				{ "MDR_Normal.DisplayName", "Normal" },
				{ "MDR_Normal.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_NormalRoughness.DisplayName", "Normal Roughness" },
				{ "MDR_NormalRoughness.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "MDR_Roughness.DisplayName", "Roughness" },
				{ "MDR_Roughness.ToolTip", "Receive Decals, applies all DBuffer channels, assumes the decal is non metal and mask the subsurface scattering." },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Defines how the material reacts on DBuffer decals, later we can expose more variants between None and Default." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialDecalResponse",
				"EMaterialDecalResponse",
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
	static UEnum* EDecalBlendMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDecalBlendMode, Z_Construct_UPackage__Script_Engine(), TEXT("EDecalBlendMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDecalBlendMode>()
	{
		return EDecalBlendMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDecalBlendMode(EDecalBlendMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EDecalBlendMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDecalBlendMode_Hash() { return 1560991983U; }
	UEnum* Z_Construct_UEnum_Engine_EDecalBlendMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDecalBlendMode"), 0, Get_Z_Construct_UEnum_Engine_EDecalBlendMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DBM_Translucent", (int64)DBM_Translucent },
				{ "DBM_Stain", (int64)DBM_Stain },
				{ "DBM_Normal", (int64)DBM_Normal },
				{ "DBM_Emissive", (int64)DBM_Emissive },
				{ "DBM_DBuffer_ColorNormalRoughness", (int64)DBM_DBuffer_ColorNormalRoughness },
				{ "DBM_DBuffer_Color", (int64)DBM_DBuffer_Color },
				{ "DBM_DBuffer_ColorNormal", (int64)DBM_DBuffer_ColorNormal },
				{ "DBM_DBuffer_ColorRoughness", (int64)DBM_DBuffer_ColorRoughness },
				{ "DBM_DBuffer_Normal", (int64)DBM_DBuffer_Normal },
				{ "DBM_DBuffer_NormalRoughness", (int64)DBM_DBuffer_NormalRoughness },
				{ "DBM_DBuffer_Roughness", (int64)DBM_DBuffer_Roughness },
				{ "DBM_DBuffer_Emissive", (int64)DBM_DBuffer_Emissive },
				{ "DBM_DBuffer_AlphaComposite", (int64)DBM_DBuffer_AlphaComposite },
				{ "DBM_DBuffer_EmissiveAlphaComposite", (int64)DBM_DBuffer_EmissiveAlphaComposite },
				{ "DBM_Volumetric_DistanceFunction", (int64)DBM_Volumetric_DistanceFunction },
				{ "DBM_AlphaComposite", (int64)DBM_AlphaComposite },
				{ "DBM_AmbientOcclusion", (int64)DBM_AmbientOcclusion },
				{ "DBM_MAX", (int64)DBM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DBM_AlphaComposite.DisplayName", "AlphaComposite (Premultiplied Alpha)" },
				{ "DBM_AlphaComposite.ToolTip", "Blend with existing scene color. Decal color is already pre-multiplied by alpha." },
				{ "DBM_AmbientOcclusion.DisplayName", "Ambient Occlusion" },
				{ "DBM_AmbientOcclusion.ToolTip", "Ambient occlusion." },
				{ "DBM_DBuffer_AlphaComposite.DisplayName", "DBuffer AlphaComposite (Premultiplied Alpha)" },
				{ "DBM_DBuffer_AlphaComposite.Hidden", "" },
				{ "DBM_DBuffer_Color.DisplayName", "DBuffer Translucent Color" },
				{ "DBM_DBuffer_Color.ToolTip", "Put into DBuffer to work for baked lighting as well." },
				{ "DBM_DBuffer_ColorNormal.DisplayName", "DBuffer Translucent Color,Normal" },
				{ "DBM_DBuffer_ColorNormal.ToolTip", "Put into DBuffer to work for baked lighting as well (becomes DBM_DBuffer_Color if normal is not hooked up)." },
				{ "DBM_DBuffer_ColorNormalRoughness.DisplayName", "DBuffer Translucent Color,Normal,Roughness" },
				{ "DBM_DBuffer_ColorNormalRoughness.ToolTip", "Put into DBuffer to work for baked lighting as well (becomes DBM_TranslucentNormal if normal is not hooked up)." },
				{ "DBM_DBuffer_ColorRoughness.DisplayName", "DBuffer Translucent Color,Roughness" },
				{ "DBM_DBuffer_ColorRoughness.ToolTip", "Put into DBuffer to work for baked lighting as well." },
				{ "DBM_DBuffer_Emissive.DisplayName", "DBuffer Emissive" },
				{ "DBM_DBuffer_Emissive.Hidden", "" },
				{ "DBM_DBuffer_Emissive.ToolTip", "Internal DBffer decal blend modes used for auto-converted decals" },
				{ "DBM_DBuffer_EmissiveAlphaComposite.DisplayName", "DBuffer Emissive AlphaComposite (Premultiplied Alpha)" },
				{ "DBM_DBuffer_EmissiveAlphaComposite.Hidden", "" },
				{ "DBM_DBuffer_Normal.DisplayName", "DBuffer Translucent Normal" },
				{ "DBM_DBuffer_Normal.ToolTip", "Put into DBuffer to work for baked lighting as well." },
				{ "DBM_DBuffer_NormalRoughness.DisplayName", "DBuffer Translucent Normal,Roughness" },
				{ "DBM_DBuffer_NormalRoughness.ToolTip", "Put into DBuffer to work for baked lighting as well (becomes DBM_DBuffer_Roughness if normal is not hooked up)." },
				{ "DBM_DBuffer_Roughness.DisplayName", "DBuffer Translucent Roughness" },
				{ "DBM_DBuffer_Roughness.ToolTip", "Put into DBuffer to work for baked lighting as well." },
				{ "DBM_Emissive.DisplayName", "Emissive" },
				{ "DBM_Emissive.ToolTip", "Additive emissive only." },
				{ "DBM_Normal.DisplayName", "Normal" },
				{ "DBM_Normal.ToolTip", "Only blend normal, updating the GBuffer, does not work for baked lighting." },
				{ "DBM_Stain.DisplayName", "Stain" },
				{ "DBM_Stain.ToolTip", "Modulate BaseColor, blend rest, updating the GBuffer, does not work for baked lighting. Does not work in DBuffer mode (approximated as Translucent)." },
				{ "DBM_Translucent.DisplayName", "Translucent" },
				{ "DBM_Translucent.ToolTip", "Blend full material, updating the GBuffer, does not work for baked lighting." },
				{ "DBM_Volumetric_DistanceFunction.DisplayName", "Volumetric Distance Function (experimental)" },
				{ "DBM_Volumetric_DistanceFunction.ToolTip", "Output signed distance in Opacity depending on LightVector. Note: Can be costly, no shadow casting but receiving, no per pixel normal yet, no quality settings yet" },
				{ "ModuleRelativePath", "Classes/Materials/Material.h" },
				{ "ToolTip", "Defines how the GBuffer channels are getting manipulated by a decal material pass. Actual index is used to control shader parameters so don't change order." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDecalBlendMode",
				"EDecalBlendMode",
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
class UScriptStruct* FParameterGroupData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParameterGroupData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterGroupData, Z_Construct_UPackage__Script_Engine(), TEXT("ParameterGroupData"), sizeof(FParameterGroupData), Get_Z_Construct_UScriptStruct_FParameterGroupData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParameterGroupData>()
{
	return FParameterGroupData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParameterGroupData(FParameterGroupData::StaticStruct, TEXT("/Script/Engine"), TEXT("ParameterGroupData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParameterGroupData
{
	FScriptStruct_Engine_StaticRegisterNativesFParameterGroupData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParameterGroupData")),new UScriptStruct::TCppStructOps<FParameterGroupData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParameterGroupData;
	struct Z_Construct_UScriptStruct_FParameterGroupData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupSortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupSortPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterGroupData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterGroupData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupSortPriority_MetaData[] = {
		{ "Category", "Group Sorting" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupSortPriority = { "GroupSortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterGroupData, GroupSortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupSortPriority_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupSortPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Group Sorting" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterGroupData, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterGroupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupSortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterGroupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParameterGroupData",
		sizeof(FParameterGroupData),
		alignof(FParameterGroupData),
		Z_Construct_UScriptStruct_FParameterGroupData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterGroupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterGroupData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterGroupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterGroupData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParameterGroupData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParameterGroupData"), sizeof(FParameterGroupData), Get_Z_Construct_UScriptStruct_FParameterGroupData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParameterGroupData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParameterGroupData_Hash() { return 1341320656U; }
class UScriptStruct* FMaterialParameterCollectionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialParameterCollectionInfo"), sizeof(FMaterialParameterCollectionInfo), Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialParameterCollectionInfo>()
{
	return FMaterialParameterCollectionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialParameterCollectionInfo(FMaterialParameterCollectionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialParameterCollectionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialParameterCollectionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialParameterCollectionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialParameterCollectionInfo")),new UScriptStruct::TCppStructOps<FMaterialParameterCollectionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialParameterCollectionInfo;
	struct Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Stores information about a parameter collection that this material references, used to know when the material needs to be recompiled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParameterCollectionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "The collection which this material has a dependency on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParameterCollectionInfo, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Id that the collection had when this material was last compiled." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParameterCollectionInfo, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialParameterCollectionInfo",
		sizeof(FMaterialParameterCollectionInfo),
		alignof(FMaterialParameterCollectionInfo),
		Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialParameterCollectionInfo"), sizeof(FMaterialParameterCollectionInfo), Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Hash() { return 2216713399U; }
class UScriptStruct* FMaterialFunctionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialFunctionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialFunctionInfo"), sizeof(FMaterialFunctionInfo), Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialFunctionInfo>()
{
	return FMaterialFunctionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialFunctionInfo(FMaterialFunctionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialFunctionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialFunctionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialFunctionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialFunctionInfo")),new UScriptStruct::TCppStructOps<FMaterialFunctionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialFunctionInfo;
	struct Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Stores information about a function that this material references, used to know when the material needs to be recompiled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialFunctionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "The function which this material has a dependency on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialFunctionInfo, Function), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Id that the function had when this material was last compiled." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialFunctionInfo, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialFunctionInfo",
		sizeof(FMaterialFunctionInfo),
		alignof(FMaterialFunctionInfo),
		Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialFunctionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialFunctionInfo"), sizeof(FMaterialFunctionInfo), Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_Hash() { return 3841447949U; }
	struct Z_Construct_UScriptStruct_FVector2MaterialInput_Statics
	{
		struct FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
#if WITH_EDITORONLY_DATA
			FName InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
#endif // WITH_EDITORONLY_DATA
			FName ExpressionName;
		};

		struct FVector2MaterialInput : public FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			uint8 UseConstant:1;
			float ConstantX;
			float ConstantY;
#endif // WITH_EDITORONLY_DATA
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[];
#endif
		static void NewProp_UseConstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantY = { "ConstantY", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVector2MaterialInput, ConstantY), METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantX = { "ConstantX", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVector2MaterialInput, ConstantX), METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant_SetBit(void* Obj)
	{
		((FVector2MaterialInput*)Obj)->UseConstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant = { "UseConstant", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVector2MaterialInput), &Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FMaterialInput,
		nullptr,
		"Vector2MaterialInput",
		sizeof(FVector2MaterialInput),
		alignof(FVector2MaterialInput),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector2MaterialInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector2MaterialInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector2MaterialInput"), sizeof(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::FVector2MaterialInput), Get_Z_Construct_UScriptStruct_FVector2MaterialInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector2MaterialInput_Hash() { return 117335523U; }
	struct Z_Construct_UScriptStruct_FVectorMaterialInput_Statics
	{
		struct FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
#if WITH_EDITORONLY_DATA
			FName InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
#endif // WITH_EDITORONLY_DATA
			FName ExpressionName;
		};

		struct FVectorMaterialInput : public FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			uint8 UseConstant:1;
			FVector Constant;
#endif // WITH_EDITORONLY_DATA
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[];
#endif
		static void NewProp_UseConstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_Constant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorMaterialInput, Constant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_Constant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_Constant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant_SetBit(void* Obj)
	{
		((FVectorMaterialInput*)Obj)->UseConstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant = { "UseConstant", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVectorMaterialInput), &Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_Constant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FMaterialInput,
		nullptr,
		"VectorMaterialInput",
		sizeof(FVectorMaterialInput),
		alignof(FVectorMaterialInput),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorMaterialInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorMaterialInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorMaterialInput"), sizeof(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::FVectorMaterialInput), Get_Z_Construct_UScriptStruct_FVectorMaterialInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorMaterialInput_Hash() { return 2330712363U; }
	struct Z_Construct_UScriptStruct_FScalarMaterialInput_Statics
	{
		struct FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
#if WITH_EDITORONLY_DATA
			FName InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
#endif // WITH_EDITORONLY_DATA
			FName ExpressionName;
		};

		struct FScalarMaterialInput : public FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			uint8 UseConstant:1;
			float Constant;
#endif // WITH_EDITORONLY_DATA
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Constant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[];
#endif
		static void NewProp_UseConstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_Constant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarMaterialInput, Constant), METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_Constant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_Constant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant_SetBit(void* Obj)
	{
		((FScalarMaterialInput*)Obj)->UseConstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant = { "UseConstant", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FScalarMaterialInput), &Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_Constant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FMaterialInput,
		nullptr,
		"ScalarMaterialInput",
		sizeof(FScalarMaterialInput),
		alignof(FScalarMaterialInput),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalarMaterialInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScalarMaterialInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScalarMaterialInput"), sizeof(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::FScalarMaterialInput), Get_Z_Construct_UScriptStruct_FScalarMaterialInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScalarMaterialInput_Hash() { return 1485002433U; }
	struct Z_Construct_UScriptStruct_FColorMaterialInput_Statics
	{
		struct FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
#if WITH_EDITORONLY_DATA
			FName InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
#endif // WITH_EDITORONLY_DATA
			FName ExpressionName;
		};

		struct FColorMaterialInput : public FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			uint8 UseConstant:1;
			FColor Constant;
#endif // WITH_EDITORONLY_DATA
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[];
#endif
		static void NewProp_UseConstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorMaterialInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_Constant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorMaterialInput, Constant), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_Constant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_Constant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant_SetBit(void* Obj)
	{
		((FColorMaterialInput*)Obj)->UseConstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant = { "UseConstant", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorMaterialInput), &Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorMaterialInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_Constant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorMaterialInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FMaterialInput,
		nullptr,
		"ColorMaterialInput",
		sizeof(FColorMaterialInput),
		alignof(FColorMaterialInput),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorMaterialInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorMaterialInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorMaterialInput"), sizeof(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::FColorMaterialInput), Get_Z_Construct_UScriptStruct_FColorMaterialInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorMaterialInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorMaterialInput_Hash() { return 1349487685U; }
	struct Z_Construct_UScriptStruct_FMaterialInput_Statics
	{
		struct FMaterialInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
#if WITH_EDITORONLY_DATA
			FName InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
#endif // WITH_EDITORONLY_DATA
			FName ExpressionName;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExpressionName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expression;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Material input structs.\n@warning: manually mirrored in MaterialShared.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_ExpressionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Material expression name that this input is connected to, or None if not connected. Used only in cooked builds" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_ExpressionName = { "ExpressionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInput, ExpressionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_ExpressionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_ExpressionName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskA_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskA = { "MaskA", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInput, MaskA), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskA_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskB = { "MaskB", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInput, MaskB), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskB_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskG = { "MaskG", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInput, MaskG), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskG_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskR = { "MaskR", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInput, MaskR), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskR_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInput, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Mask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Mask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_InputName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Optional name of the input.\nNote that this is the only member which is not derived from the output currently connected." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInput, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_InputName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_InputName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_OutputIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Index into Expression's outputs array that this input is connected to." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInput, OutputIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_OutputIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_OutputIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Expression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Material expression that this input is connected to, or NULL if not connected." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInput, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Expression_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Expression_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_ExpressionName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_InputName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_OutputIndex,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Expression,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"MaterialInput",
		sizeof(FMaterialInput),
		alignof(FMaterialInput),
		Z_Construct_UScriptStruct_FMaterialInput_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialInput"), sizeof(Z_Construct_UScriptStruct_FMaterialInput_Statics::FMaterialInput), Get_Z_Construct_UScriptStruct_FMaterialInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialInput_Hash() { return 1345990824U; }
	void UMaterial::StaticRegisterNativesUMaterial()
	{
	}
	UClass* Z_Construct_UClass_UMaterial_NoRegister()
	{
		return UMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextureGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextureGuids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferencedTextureGuids_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionTextureReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExpressionTextureReferences;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpressionTextureReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedQualityLevelsUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedQualityLevelsUsed;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CachedQualityLevelsUsed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefractionDepthBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefractionDepthBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefractionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RefractionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendableOutputAlpha_MetaData[];
#endif
		static void NewProp_BlendableOutputAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BlendableOutputAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendablePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlendablePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendableLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendableLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsageFlagWarnings_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UsageFlagWarnings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMaterialEditorStatsMaterial_MetaData[];
#endif
		static void NewProp_bIsMaterialEditorStatsMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMaterialEditorStatsMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDevelopmentShaderCompile_MetaData[];
#endif
		static void NewProp_bAllowDevelopmentShaderCompile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDevelopmentShaderCompile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeFogPerPixel_MetaData[];
#endif
		static void NewProp_bComputeFogPerPixel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeFogPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTranslucencyVertexFog_MetaData[];
#endif
		static void NewProp_bUseTranslucencyVertexFog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTranslucencyVertexFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialAttributes_MetaData[];
#endif
		static void NewProp_bUseMaterialAttributes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFunctionPreviewMaterial_MetaData[];
#endif
		static void NewProp_bIsFunctionPreviewMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFunctionPreviewMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPreviewMaterial_MetaData[];
#endif
		static void NewProp_bIsPreviewMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPreviewMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMasked_MetaData[];
#endif
		static void NewProp_bIsMasked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMasked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMaskedBeAssumedOpaque_MetaData[];
#endif
		static void NewProp_bCanMaskedBeAssumedOpaque_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMaskedBeAssumedOpaque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterCollectionInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialParameterCollectionInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialParameterCollectionInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFunctionInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialFunctionInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialFunctionInfos_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterGroupData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterGroupData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterGroupData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorComments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorComments;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorComments_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Expressions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorX;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputVelocityOnBasePass_MetaData[];
#endif
		static void NewProp_bOutputVelocityOnBasePass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputVelocityOnBasePass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wireframe_MetaData[];
#endif
		static void NewProp_Wireframe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Wireframe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDisplacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAdaptiveTessellation_MetaData[];
#endif
		static void NewProp_bEnableAdaptiveTessellation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAdaptiveTessellation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCrackFreeDisplacement_MetaData[];
#endif
		static void NewProp_bEnableCrackFreeDisplacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCrackFreeDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D3D11TessellationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_D3D11TessellationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalCurvatureToRoughness_MetaData[];
#endif
		static void NewProp_bNormalCurvatureToRoughness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalCurvatureToRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePlanarForwardReflections_MetaData[];
#endif
		static void NewProp_bUsePlanarForwardReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlanarForwardReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHQForwardReflections_MetaData[];
#endif
		static void NewProp_bUseHQForwardReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHQForwardReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLightmapDirectionality_MetaData[];
#endif
		static void NewProp_bUseLightmapDirectionality_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLightmapDirectionality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecision_MetaData[];
#endif
		static void NewProp_bUseFullPrecision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFullyRough_MetaData[];
#endif
		static void NewProp_bFullyRough_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullyRough;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallySetUsageInEditor_MetaData[];
#endif
		static void NewProp_bAutomaticallySetUsageInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallySetUsageInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithUI_MetaData[];
#endif
		static void NewProp_bUsedWithUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithClothing_MetaData[];
#endif
		static void NewProp_bUsedWithClothing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithClothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesDistortion_MetaData[];
#endif
		static void NewProp_bUsesDistortion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesDistortion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithInstancedStaticMeshes_MetaData[];
#endif
		static void NewProp_bUsedWithInstancedStaticMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithInstancedStaticMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithSplineMeshes_MetaData[];
#endif
		static void NewProp_bUsedWithSplineMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithSplineMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithMorphTargets_MetaData[];
#endif
		static void NewProp_bUsedWithMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithStaticLighting_MetaData[];
#endif
		static void NewProp_bUsedWithStaticLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithStaticLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithGeometryCache_MetaData[];
#endif
		static void NewProp_bUsedWithGeometryCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithGeometryCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNiagaraMeshParticles_MetaData[];
#endif
		static void NewProp_bUsedWithNiagaraMeshParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNiagaraMeshParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNiagaraRibbons_MetaData[];
#endif
		static void NewProp_bUsedWithNiagaraRibbons_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNiagaraRibbons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNiagaraSprites_MetaData[];
#endif
		static void NewProp_bUsedWithNiagaraSprites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNiagaraSprites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithMeshParticles_MetaData[];
#endif
		static void NewProp_bUsedWithMeshParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithMeshParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithBeamTrails_MetaData[];
#endif
		static void NewProp_bUsedWithBeamTrails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithBeamTrails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithParticleSprites_MetaData[];
#endif
		static void NewProp_bUsedWithParticleSprites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithParticleSprites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithEditorCompositing_MetaData[];
#endif
		static void NewProp_bUsedWithEditorCompositing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithEditorCompositing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedWithSkeletalMesh_MetaData[];
#endif
		static void NewProp_bUsedWithSkeletalMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedWithSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedAsSpecialEngineMaterial_MetaData[];
#endif
		static void NewProp_bUsedAsSpecialEngineMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedAsSpecialEngineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockGI_MetaData[];
#endif
		static void NewProp_bBlockGI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockGI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEmissiveForDynamicAreaLighting_MetaData[];
#endif
		static void NewProp_bUseEmissiveForDynamicAreaLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEmissiveForDynamicAreaLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTangentSpaceNormal_MetaData[];
#endif
		static void NewProp_bTangentSpaceNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTangentSpaceNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateSphericalParticleNormals_MetaData[];
#endif
		static void NewProp_bGenerateSphericalParticleNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateSphericalParticleNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteOnlyAlpha_MetaData[];
#endif
		static void NewProp_bWriteOnlyAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteOnlyAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableDepthTest_MetaData[];
#endif
		static void NewProp_bDisableDepthTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDepthTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentShadowStartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentShadowStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentMultipleScatteringExtinction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslucentMultipleScatteringExtinction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentBackscatteringExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentBackscatteringExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSelfShadowSecondOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentSelfShadowSecondOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSelfShadowSecondDensityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentSelfShadowSecondDensityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSelfShadowDensityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentSelfShadowDensityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentShadowDensityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucentShadowDensityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowTranslucentCustomDepthWrites_MetaData[];
#endif
		static void NewProp_AllowTranslucentCustomDepthWrites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowTranslucentCustomDepthWrites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencyDirectionalLightingIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucencyDirectionalLightingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencyLightingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslucencyLightingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCustomizedUVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCustomizedUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNegativeEmissiveColor_MetaData[];
#endif
		static void NewProp_bAllowNegativeEmissiveColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNegativeEmissiveColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DitherOpacityMask_MetaData[];
#endif
		static void NewProp_DitherOpacityMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DitherOpacityMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DitheredLODTransition_MetaData[];
#endif
		static void NewProp_DitheredLODTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DitheredLODTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoSided_MetaData[];
#endif
		static void NewProp_TwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContactShadows_MetaData[];
#endif
		static void NewProp_bContactShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContactShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScreenSpaceReflections_MetaData[];
#endif
		static void NewProp_bScreenSpaceReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScreenSpaceReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableResponsiveAA_MetaData[];
#endif
		static void NewProp_bEnableResponsiveAA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableResponsiveAA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMobileSeparateTranslucency_MetaData[];
#endif
		static void NewProp_bEnableMobileSeparateTranslucency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMobileSeparateTranslucency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSeparateTranslucency_MetaData[];
#endif
		static void NewProp_bEnableSeparateTranslucency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSeparateTranslucency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelDepthOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelDepthOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizedUVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomizedUVs;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Refraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Refraction;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearCoatRoughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearCoatRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearCoat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearCoat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubsurfaceColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TessellationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDisplacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDisplacement;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadowAsMasked_MetaData[];
#endif
		static void NewProp_bCastDynamicShadowAsMasked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadowAsMasked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskClipValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskClipValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDecalResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialDecalResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalBlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DecalBlendMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDomain_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialDomain;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpacityMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Opacity;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roughness;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Specular;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Metallic;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecularColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiffuseColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "Materials/Material.h" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A Material is an asset which can be applied to a mesh to control the visual look of the scene.\nWhen light from the scene hits the surface, the shading model of the material is used to calculate how that light interacts with the surface.\n\nWarning: Creating new materials directly increases shader compile times!  Consider creating a Material Instance off of an existing material instead." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids = { "ReferencedTextureGuids", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, ReferencedTextureGuids), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids_Inner = { "ReferencedTextureGuids", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionTextureReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Cached texture references from all expressions in the material (including nested functions).\nThis is used to link uniform texture expressions which were stored in the DDC with the UTextures that they reference." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionTextureReferences = { "ExpressionTextureReferences", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, ExpressionTextureReferences), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionTextureReferences_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionTextureReferences_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionTextureReferences_Inner = { "ExpressionTextureReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_CachedQualityLevelsUsed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Caches the used quality levels of the material to save runtime graph traversal." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_CachedQualityLevelsUsed = { "CachedQualityLevelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, CachedQualityLevelsUsed), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_CachedQualityLevelsUsed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_CachedQualityLevelsUsed_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_CachedQualityLevelsUsed_Inner = { "CachedQualityLevelsUsed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_StateId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Guid that uniquely identifies this material.\nAny changes to the state of the material that do not appear separately in the shadermap DDC keys must cause this guid to be regenerated!\nFor example, a modification to the Expressions array.\nCode changes that cause the guid to be regenerated on load should be avoided, as that requires a resave of the content to stop recompiling every load." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_StateId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_StateId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionDepthBias_MetaData[] = {
		{ "Category", "Refraction" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "This is the refraction depth bias, larger values offset distortion to prevent closer objects from rendering into the distorted surface at acute viewing angles but increases the disconnect between surface and where the refraction starts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionDepthBias = { "RefractionDepthBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, RefractionDepthBias), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionDepthBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionDepthBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionMode_MetaData[] = {
		{ "Category", "Refraction" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Controls how the Refraction input is interpreted and how the refraction offset into scene color is computed for this material." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionMode = { "RefractionMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, RefractionMode), Z_Construct_UEnum_Engine_ERefractionMode, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "DisplayName", "Output Alpha" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If this is enabled, the blendable will output alpha" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->BlendableOutputAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha = { "BlendableOutputAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_BlendablePriority_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "DisplayName", "Blendable Priority" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If multiple nodes with the same  type are inserted at the same point, this defined order and if they get combined, only used if domain is PostProcess" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_BlendablePriority = { "BlendablePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, BlendablePriority), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_BlendablePriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_BlendablePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableLocation_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "DisplayName", "Blendable Location" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Where the node is inserted in the (post processing) graph, only used if domain is PostProcess" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableLocation = { "BlendableLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, BlendableLocation), Z_Construct_UEnum_Engine_EBlendableLocation, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_UsageFlagWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if we have printed a warning about material usage for a given usage flag." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_UsageFlagWarnings = { "UsageFlagWarnings", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, UsageFlagWarnings), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_UsageFlagWarnings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_UsageFlagWarnings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if this is a special material used for stats by the material editor." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bIsMaterialEditorStatsMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial = { "bIsMaterialEditorStatsMaterial", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If true the compilation environment will be changed to remove the global COMPILE_SHADERS_FOR_DEVELOPMENT flag." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bAllowDevelopmentShaderCompile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile = { "bAllowDevelopmentShaderCompile", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "When true, translucent materials have fog computed for every pixel, which costs more but fixes artifacts due to low tessellation." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bComputeFogPerPixel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel = { "bComputeFogPerPixel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Apply Fogging" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "When true, translucent materials are fogged. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUseTranslucencyVertexFog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog = { "bUseTranslucencyVertexFog", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "when true, the material attributes pin is used instead of the regular pins." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUseMaterialAttributes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes = { "bUseMaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if Material is the function preview material used in the material instance editor." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bIsFunctionPreviewMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial = { "bIsFunctionPreviewMaterial", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if Material is the preview material used in the material editor." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bIsPreviewMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial = { "bIsPreviewMaterial", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if Material is masked and uses custom opacity" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bIsMasked_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked = { "bIsMasked", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if this Material can be assumed Opaque when set to masked." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bCanMaskedBeAssumedOpaque = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque = { "bCanMaskedBeAssumedOpaque", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialParameterCollectionInfos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Array of all parameter collections this material depends on." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialParameterCollectionInfos = { "MaterialParameterCollectionInfos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, MaterialParameterCollectionInfos), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialParameterCollectionInfos_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialParameterCollectionInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialParameterCollectionInfos_Inner = { "MaterialParameterCollectionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialFunctionInfos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Array of all functions this material depends on." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialFunctionInfos = { "MaterialFunctionInfos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, MaterialFunctionInfos), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialFunctionInfos_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialFunctionInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialFunctionInfos_Inner = { "MaterialFunctionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialFunctionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData_MetaData[] = {
		{ "Category", "Group Sorting" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Controls where this parameter group is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData = { "ParameterGroupData", nullptr, (EPropertyFlags)0x0010000800000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, ParameterGroupData), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData_Inner = { "ParameterGroupData", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParameterGroupData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Array of comments associated with this material; viewed in the material editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments = { "EditorComments", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, EditorComments), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments_Inner = { "EditorComments", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Array of material expressions, excluding Comments.  Used by the material editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, Expressions), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions_Inner = { "Expressions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_EditorYaw_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorYaw = { "EditorYaw", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, EditorYaw), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_EditorYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_EditorYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_EditorPitch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorPitch = { "EditorPitch", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, EditorPitch), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_EditorPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_EditorPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_EditorY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorY = { "EditorY", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, EditorY), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_EditorY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_EditorY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_EditorX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorX = { "EditorX", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, EditorX), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_EditorX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_EditorX_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputVelocityOnBasePass_MetaData[] = {
		{ "Category", "Material" },
		{ "DisplayName", "Support accurate velocities from Vertex Deformation" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Skips outputting velocity during the base pass." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputVelocityOnBasePass_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bOutputVelocityOnBasePass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputVelocityOnBasePass = { "bOutputVelocityOnBasePass", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputVelocityOnBasePass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputVelocityOnBasePass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputVelocityOnBasePass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Enables a wireframe view of the mesh the material is applied to." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->Wireframe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe = { "Wireframe", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_MaxDisplacement_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaxDisplacement = { "MaxDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, MaxDisplacement), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_MaxDisplacement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_MaxDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableAdaptiveTessellation_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "DisplayName", "Adaptive Tessellation" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Enables adaptive tessellation, which tries to maintain a uniform number of pixels per triangle." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableAdaptiveTessellation_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bEnableAdaptiveTessellation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableAdaptiveTessellation = { "bEnableAdaptiveTessellation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableAdaptiveTessellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableAdaptiveTessellation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableAdaptiveTessellation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableCrackFreeDisplacement_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "DisplayName", "Crack Free Displacement" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Prevents cracks in the surface of the mesh when using tessellation." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableCrackFreeDisplacement_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bEnableCrackFreeDisplacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableCrackFreeDisplacement = { "bEnableCrackFreeDisplacement", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableCrackFreeDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableCrackFreeDisplacement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableCrackFreeDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_D3D11TessellationMode_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "The type of tessellation to apply to this object.  Note D3D11 required for anything except MTM_NoTessellation." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_D3D11TessellationMode = { "D3D11TessellationMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, D3D11TessellationMode), Z_Construct_UEnum_Engine_EMaterialTessellationMode, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_D3D11TessellationMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_D3D11TessellationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Reduce roughness based on screen space normal changes." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bNormalCurvatureToRoughness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness = { "bNormalCurvatureToRoughness", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections_MetaData[] = {
		{ "Category", "ForwardShading" },
		{ "DisplayName", "Planar Reflections" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Enables planar reflection when using the forward renderer or mobile. Enabling this setting reduces the number of samplers available to the material as one more sampler will be used for the planar reflection." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsePlanarForwardReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections = { "bUsePlanarForwardReflections", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections_MetaData[] = {
		{ "Category", "ForwardShading" },
		{ "DisplayName", "High Quality Reflections" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "* Forward renderer: enables multiple parallax-corrected reflection captures that blend together.\n* Mobile renderer: blend between nearest 3 reflection captures, but reduces the number of samplers available to the material as two more samplers will be used for reflection cubemaps." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUseHQForwardReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections = { "bUseHQForwardReflections", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Use lightmap directionality and per pixel normals. If disabled, lighting from lightmaps will be flat but cheaper." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUseLightmapDirectionality = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality = { "bUseLightmapDirectionality", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Forces this material to use full (highp) precision in the pixel shader.\nThis is slower than the default (mediump) but can be used to work around precision-related rendering errors.\nThis setting has no effect on older mobile devices that do not support high precision." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUseFullPrecision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision = { "bUseFullPrecision", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Forces the material to be completely rough. Saves a number of instructions and one sampler." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bFullyRough = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough = { "bFullyRough", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether to automatically set usage flags based on what the material is applied to in the editor.\nIt can be useful to disable this on a base material with many instances, where adding another usage flag accidentally (eg bUsedWithSkeletalMeshes) can add a lot of shader permutations." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bAutomaticallySetUsageInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor = { "bAutomaticallySetUsageInEditor", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with Slate UI and UMG\nThis will result in the shaders required to support UI materials being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithUI_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI = { "bUsedWithUI", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with clothing\nThis will result in the shaders required to support clothing being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithClothing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing = { "bUsedWithClothing", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with distortion\nThis will result in the shaders required to support distortion being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsesDistortion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion = { "bUsesDistortion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with instanced static meshes\nThis will result in the shaders required to support instanced static meshes being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithInstancedStaticMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes = { "bUsedWithInstancedStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with spline meshes\nThis will result in the shaders required to support spline meshes being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithSplineMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes = { "bUsedWithSplineMeshes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with morph targets\nThis will result in the shaders required to support morph targets being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets = { "bUsedWithMorphTargets", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with static lighting\nThis will result in the shaders required to support static lighting being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithStaticLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting = { "bUsedWithStaticLighting", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithGeometryCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache = { "bUsedWithGeometryCache", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithNiagaraMeshParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles = { "bUsedWithNiagaraMeshParticles", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithNiagaraRibbons = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons = { "bUsedWithNiagaraRibbons", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with Niagara sprites (meshes and ribbons, respectively)\nThis will result in the shaders required to support Niagara sprites being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithNiagaraSprites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites = { "bUsedWithNiagaraSprites", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with mesh particles\nThis will result in the shaders required to support mesh particles being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithMeshParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles = { "bUsedWithMeshParticles", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with beam trails\nThis will result in the shaders required to support beam trails being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithBeamTrails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails = { "bUsedWithBeamTrails", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with particle sprites\nThis will result in the shaders required to support particle sprites being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithParticleSprites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites = { "bUsedWithParticleSprites", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with editor compositing\nThis will result in the shaders required to support editor compositing being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithEditorCompositing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing = { "bUsedWithEditorCompositing", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with skeletal meshes.\nThis will result in the shaders required to support skeletal meshes being compiled which will increase shader compile time and memory usage." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedWithSkeletalMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh = { "bUsedWithSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "This is a special usage flag that allows a material to be assignable to any primitive type.\nThis is useful for materials used by code to implement certain viewmodes, for example the default material or lighting only material.\nThe cost is that nearly 20x more shaders will be compiled for the material than the average material, which will greatly increase shader compile time and memory usage.\nThis flag should only be enabled when absolutely necessary, and is purposefully not exposed to the UI to prevent abuse." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUsedAsSpecialEngineMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial = { "bUsedAsSpecialEngineMaterial", nullptr, (EPropertyFlags)0x0010000000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bBlockGI_MetaData[] = {
		{ "Category", "Material" },
		{ "DisplayName", "Block Global Illumination" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If enabled, the material's opacity defines how much GI is blocked when using the LightPropagationVolume feature" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bBlockGI_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bBlockGI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bBlockGI = { "bBlockGI", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bBlockGI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bBlockGI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bBlockGI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting_MetaData[] = {
		{ "Category", "Material" },
		{ "DisplayName", "Emissive (Dynamic Area Light)" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If enabled, the material's emissive colour is injected into the LightPropagationVolume" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bUseEmissiveForDynamicAreaLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting = { "bUseEmissiveForDynamicAreaLighting", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether the material takes a tangent space normal or a world space normal as input.\n(TangentSpace requires extra instructions but is often more convenient)." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bTangentSpaceNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal = { "bTangentSpaceNormal", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether to generate spherical normals for particles that use this material." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bGenerateSphericalParticleNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals = { "bGenerateSphericalParticleNormals", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether the transluency pass should write its alpha, and only the alpha, into the framebuffer" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bWriteOnlyAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha = { "bWriteOnlyAlpha", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether to draw on top of opaque pixels even if behind them. This only has meaning for translucency." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bDisableDepthTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest = { "bDisableDepthTest", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowStartOffset_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "DisplayName", "Start Offset" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Local space distance to bias the translucent shadow.  Positive values move the shadow away from the light." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowStartOffset = { "TranslucentShadowStartOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, TranslucentShadowStartOffset), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowStartOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentMultipleScatteringExtinction_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "DisplayName", "Multiple Scattering Extinction" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Colored extinction factor used to approximate multiple scattering in dense volumes.\nThis is only used when the object is casting a volumetric translucent shadow." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentMultipleScatteringExtinction = { "TranslucentMultipleScatteringExtinction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, TranslucentMultipleScatteringExtinction), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentMultipleScatteringExtinction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentMultipleScatteringExtinction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentBackscatteringExponent_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "DisplayName", "Backscattering Exponent" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Controls how diffuse the material's backscattering is when using the MSM_Subsurface shading model.\nLarger exponents give a less diffuse look (smaller, brighter backscattering highlight).\nThis is only used when the object is casting a volumetric translucent shadow from a directional light." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentBackscatteringExponent = { "TranslucentBackscatteringExponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, TranslucentBackscatteringExponent), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentBackscatteringExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentBackscatteringExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondOpacity_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "DisplayName", "Second Opacity" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Controls the strength of the second self shadow gradient." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondOpacity = { "TranslucentSelfShadowSecondOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, TranslucentSelfShadowSecondOpacity), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondDensityScale_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "DisplayName", "Second Density Scale" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Used to make a second self shadow gradient, to add interesting shading in the shadow of the first." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondDensityScale = { "TranslucentSelfShadowSecondDensityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, TranslucentSelfShadowSecondDensityScale), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondDensityScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondDensityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowDensityScale_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "DisplayName", "Self Shadow Density Scale" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Scale used to make translucent self-shadowing more or less opaque than the material's shadow on other objects.\nThis is only used when the object is casting a volumetric translucent shadow." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowDensityScale = { "TranslucentSelfShadowDensityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, TranslucentSelfShadowDensityScale), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowDensityScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowDensityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowDensityScale_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "DisplayName", "Shadow Density Scale" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Scale used to make translucent shadows more or less opaque than the material's actual opacity." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowDensityScale = { "TranslucentShadowDensityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, TranslucentShadowDensityScale), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowDensityScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowDensityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Allow Custom Depth Writes" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Allows a translucent material to be used with custom depth writing by compiling additional shaders." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->AllowTranslucentCustomDepthWrites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites = { "AllowTranslucentCustomDepthWrites", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyDirectionalLightingIntensity_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Directional Lighting Intensity" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Useful for artificially increasing the influence of the normal on the lighting result for translucency.\nA value larger than 1 increases the influence of the normal, a value smaller than 1 makes the lighting more ambient." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyDirectionalLightingIntensity = { "TranslucencyDirectionalLightingIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, TranslucencyDirectionalLightingIntensity), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyDirectionalLightingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyDirectionalLightingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyLightingMode_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Lighting Mode" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Sets the lighting mode that will be used on this material if it is translucent." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyLightingMode = { "TranslucencyLightingMode", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, TranslucencyLightingMode), Z_Construct_UEnum_Engine_ETranslucencyLightingMode, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyLightingMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyLightingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_NumCustomizedUVs_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Number of customized UV inputs to display.  Unconnected customized UV inputs will just pass through the vertex UVs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_NumCustomizedUVs = { "NumCustomizedUVs", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, NumCustomizedUVs), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_NumCustomizedUVs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_NumCustomizedUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether the material should allow outputting negative emissive color values.  Only allowed on unlit materials." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bAllowNegativeEmissiveColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor = { "bAllowNegativeEmissiveColor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Dither opacity mask. When combined with Temporal AA this can be used as a form of limited translucency which supports all lighting features." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->DitherOpacityMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask = { "DitherOpacityMask", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition_MetaData[] = {
		{ "Category", "Material" },
		{ "DisplayName", "Dithered LOD Transition" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether meshes rendered with the material should support dithered LOD transitions." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->DitheredLODTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition = { "DitheredLODTransition", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material should be rendered without backface culling and the normal should be flipped for backfaces." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->TwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Contact Shadows" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Contact shadows on translucency" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bContactShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows = { "bContactShadows", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Screen Space Reflections" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "SSR on translucency" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bScreenSpaceReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections = { "bScreenSpaceReflections", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Responsive AA" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material should be rendered using responsive anti-aliasing. Improves sharpness of small moving particles such as sparks.\nOnly use for small moving features because it will cause aliasing of the background." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bEnableResponsiveAA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA = { "bEnableResponsiveAA", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Mobile Separate Translucency" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the translucent material should not be affected by bloom or DOF. (Note: Depth testing is not available)" },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bEnableMobileSeparateTranslucency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency = { "bEnableMobileSeparateTranslucency", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Render After DOF" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material should be rendered in the SeparateTranslucency Pass (not affected by DOF, requires bAllowSeparateTranslucency to be set in .ini)." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bEnableSeparateTranslucency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency = { "bEnableSeparateTranslucency", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_PixelDepthOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_PixelDepthOffset = { "PixelDepthOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, PixelDepthOffset), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_PixelDepthOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_PixelDepthOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, MaterialAttributes), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialAttributes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialAttributes_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_CustomizedUVs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "These inputs are evaluated in the vertex shader and allow artists to do arbitrary vertex shader operations and access them in the pixel shader.\nWhen unconnected or hidden they default to passing through the vertex UVs." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_CustomizedUVs = { "CustomizedUVs", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CustomizedUVs, UMaterial), STRUCT_OFFSET(UMaterial, CustomizedUVs), Z_Construct_UScriptStruct_FVector2MaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_CustomizedUVs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_CustomizedUVs_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_Refraction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "output refraction index for translucent rendering\nAir:1.0 Water:1.333 Ice:1.3 Glass:~1.6 Diamond:2.42" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Refraction = { "Refraction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, Refraction), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_Refraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_Refraction_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_AmbientOcclusion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "output ambient occlusion to the GBuffer" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_AmbientOcclusion = { "AmbientOcclusion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, AmbientOcclusion), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_AmbientOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_AmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoatRoughness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoatRoughness = { "ClearCoatRoughness", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, ClearCoatRoughness), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoatRoughness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoatRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoat = { "ClearCoat", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, ClearCoat), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_SubsurfaceColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Inner material color, only used for ShadingModel=Subsurface" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_SubsurfaceColor = { "SubsurfaceColor", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, SubsurfaceColor), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_SubsurfaceColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_SubsurfaceColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_TessellationMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Multiplies the tessellation factors applied when a tessellation mode is set." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TessellationMultiplier = { "TessellationMultiplier", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, TessellationMultiplier), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_TessellationMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_TessellationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_WorldDisplacement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Offset in world space applied to tessellated vertices." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_WorldDisplacement = { "WorldDisplacement", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, WorldDisplacement), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_WorldDisplacement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_WorldDisplacement_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_WorldPositionOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Adds to world position in the vertex shader." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_WorldPositionOffset = { "WorldPositionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, WorldPositionOffset), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_WorldPositionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_WorldPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If true, translucent materials will cast dynamic shadows according to their opacity.\nOpacityMaskClipValue is used as the threshold value." },
	};
#endif
	void Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit(void* Obj)
	{
		((UMaterial*)Obj)->bCastDynamicShadowAsMasked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked = { "bCastDynamicShadowAsMasked", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMaskClipValue_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If BlendMode is BLEND_Masked, the surface is not rendered where OpacityMask < OpacityMaskClipValue." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMaskClipValue = { "OpacityMaskClipValue", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, OpacityMaskClipValue), METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMaskClipValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMaskClipValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModel_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Determines how inputs are combined to create the material's final color." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0040010000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDecalResponse_MetaData[] = {
		{ "Category", "Material" },
		{ "DisplayName", "Decal Response (DBuffer)" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Defines how the material reacts on DBuffer decals (Affects look, performance and texture/sample usage).\nNon DBuffer Decals can be disabled on the primitive (e.g. static mesh)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDecalResponse = { "MaterialDecalResponse", nullptr, (EPropertyFlags)0x0010050000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, MaterialDecalResponse), Z_Construct_UEnum_Engine_EMaterialDecalResponse, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDecalResponse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDecalResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_DecalBlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Defines how the GBuffer chanels are getting manipulated by a decal material pass. (only with MaterialDomain == MD_DeferredDecal)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_DecalBlendMode = { "DecalBlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, DecalBlendMode), Z_Construct_UEnum_Engine_EDecalBlendMode, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_DecalBlendMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_DecalBlendMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Determines how the material's color is blended with background colors." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010010000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_BlendMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_BlendMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDomain_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "The domain that the material's attributes will be evaluated in.\nCertain pieces of material functionality are only valid in certain domains, for example vertex normal is only valid on a surface." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDomain = { "MaterialDomain", nullptr, (EPropertyFlags)0x0010010000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, MaterialDomain), Z_Construct_UEnum_Engine_EMaterialDomain, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDomain_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDomain_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMask = { "OpacityMask", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, OpacityMask), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_Opacity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Transmission." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, Opacity), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_Opacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_Opacity_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_EmissiveColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Emission." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, EmissiveColor), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_EmissiveColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, Normal), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_Normal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_Normal_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_Roughness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, Roughness), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_Roughness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_Roughness_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_Specular_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, Specular), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_Specular_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_Specular_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_Metallic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Metallic = { "Metallic", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, Metallic), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_Metallic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_Metallic_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_BaseColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, BaseColor), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_BaseColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_BaseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_SpecularColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_SpecularColor = { "SpecularColor", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, SpecularColor_DEPRECATED), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_SpecularColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_SpecularColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_DiffuseColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_DiffuseColor = { "DiffuseColor", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, DiffuseColor_DEPRECATED), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_DiffuseColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_DiffuseColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterial_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Physical material to use for this graphics material. Used for sounds, effects etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterial, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::NewProp_PhysMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::NewProp_PhysMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterial_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionTextureReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionTextureReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_CachedQualityLevelsUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_CachedQualityLevelsUsed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_StateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionDepthBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_BlendablePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_UsageFlagWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialParameterCollectionInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialParameterCollectionInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialFunctionInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialFunctionInfos_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorX,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputVelocityOnBasePass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaxDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableAdaptiveTessellation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableCrackFreeDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_D3D11TessellationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bBlockGI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentMultipleScatteringExtinction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentBackscatteringExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondDensityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowDensityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowDensityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyDirectionalLightingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyLightingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_NumCustomizedUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_PixelDepthOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialAttributes,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_CustomizedUVs,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Refraction,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_AmbientOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoatRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_SubsurfaceColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TessellationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_WorldDisplacement,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_WorldPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMaskClipValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDecalResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_DecalBlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDomain,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Opacity,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EmissiveColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Normal,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Roughness,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Specular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Metallic,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_BaseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_SpecularColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_DiffuseColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_PhysMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterial_Statics::ClassParams = {
		&UMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterial_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterial, 3150776572);
	template<> ENGINE_API UClass* StaticClass<UMaterial>()
	{
		return UMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterial(Z_Construct_UClass_UMaterial, &UMaterial::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterial);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterial)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

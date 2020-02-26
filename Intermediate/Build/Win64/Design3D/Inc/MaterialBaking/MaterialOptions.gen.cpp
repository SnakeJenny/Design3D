// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialBaking/Public/MaterialOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialOptions() {}
// Cross Module References
	MATERIALBAKING_API UEnum* Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod();
	UPackage* Z_Construct_UPackage__Script_MaterialBaking();
	MATERIALBAKING_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialProperty();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UMaterialOptions_NoRegister();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UMaterialOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UAssetBakeOptions_NoRegister();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UAssetBakeOptions();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UMaterialMergeOptions_NoRegister();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UMaterialMergeOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
// End Cross Module References
	static UEnum* EMaterialBakeMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod, Z_Construct_UPackage__Script_MaterialBaking(), TEXT("EMaterialBakeMethod"));
		}
		return Singleton;
	}
	template<> MATERIALBAKING_API UEnum* StaticEnum<EMaterialBakeMethod>()
	{
		return EMaterialBakeMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialBakeMethod(EMaterialBakeMethod_StaticEnum, TEXT("/Script/MaterialBaking"), TEXT("EMaterialBakeMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Hash() { return 3253972531U; }
	UEnum* Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialBaking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialBakeMethod"), 0, Get_Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMaterialBakeMethod::IndividualMaterial", (int64)EMaterialBakeMethod::IndividualMaterial },
				{ "EMaterialBakeMethod::AtlasMaterial", (int64)EMaterialBakeMethod::AtlasMaterial },
				{ "EMaterialBakeMethod::BinnedMaterial", (int64)EMaterialBakeMethod::BinnedMaterial },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AtlasMaterial.DisplayName", "Combine Materials into Atlassed Material" },
				{ "BinnedMaterial.DisplayName", "Combine Materials into Binned Material" },
				{ "IndividualMaterial.DisplayName", "Bake out Materials Individually" },
				{ "ModuleRelativePath", "Public/MaterialOptions.h" },
				{ "ToolTip", "Enum to define different types of baking materials" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MaterialBaking,
				nullptr,
				"EMaterialBakeMethod",
				"EMaterialBakeMethod",
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
class UScriptStruct* FPropertyEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALBAKING_API uint32 Get_Z_Construct_UScriptStruct_FPropertyEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyEntry, Z_Construct_UPackage__Script_MaterialBaking(), TEXT("PropertyEntry"), sizeof(FPropertyEntry), Get_Z_Construct_UScriptStruct_FPropertyEntry_Hash());
	}
	return Singleton;
}
template<> MATERIALBAKING_API UScriptStruct* StaticStruct<FPropertyEntry>()
{
	return FPropertyEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyEntry(FPropertyEntry::StaticStruct, TEXT("/Script/MaterialBaking"), TEXT("PropertyEntry"), false, nullptr, nullptr);
static struct FScriptStruct_MaterialBaking_StaticRegisterNativesFPropertyEntry
{
	FScriptStruct_MaterialBaking_StaticRegisterNativesFPropertyEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyEntry")),new UScriptStruct::TCppStructOps<FPropertyEntry>);
	}
} ScriptStruct_MaterialBaking_StaticRegisterNativesFPropertyEntry;
	struct Z_Construct_UScriptStruct_FPropertyEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseConstantValue_MetaData[];
#endif
		static void NewProp_bUseConstantValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomSize_MetaData[];
#endif
		static void NewProp_bUseCustomSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Structure to represent a single property the user wants to bake out for a given set of materials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_ConstantValue_MetaData[] = {
		{ "Category", "Property" },
		{ "EditCondition", "bUseConstantValue" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Defines the value representing this property in the final proxy material" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_ConstantValue = { "ConstantValue", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEntry, ConstantValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_ConstantValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_ConstantValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue_MetaData[] = {
		{ "Category", "Property" },
		{ "ExposeOnSpawn", "" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Wheter or not to use Constant Value as the final 'baked out' value for the this property" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue_SetBit(void* Obj)
	{
		((FPropertyEntry*)Obj)->bUseConstantValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue = { "bUseConstantValue", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPropertyEntry), &Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_CustomSize_MetaData[] = {
		{ "Category", "Property" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bUseCustomSize" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Defines the size of the output textures for the baked out material properties" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_CustomSize = { "CustomSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEntry, CustomSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_CustomSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_CustomSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize_MetaData[] = {
		{ "Category", "Property" },
		{ "ExposeOnSpawn", "" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Whether or not to use the value of custom size for the output texture" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize_SetBit(void* Obj)
	{
		((FPropertyEntry*)Obj)->bUseCustomSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize = { "bUseCustomSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPropertyEntry), &Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_Property_MetaData[] = {
		{ "Category", "Property" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Property which should be baked out" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEntry, Property), Z_Construct_UEnum_Engine_EMaterialProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_Property_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_Property_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_ConstantValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_CustomSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_Property,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialBaking,
		nullptr,
		&NewStructOps,
		"PropertyEntry",
		sizeof(FPropertyEntry),
		alignof(FPropertyEntry),
		Z_Construct_UScriptStruct_FPropertyEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialBaking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyEntry"), sizeof(FPropertyEntry), Get_Z_Construct_UScriptStruct_FPropertyEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyEntry_Hash() { return 4223604121U; }
	void UMaterialOptions::StaticRegisterNativesUMaterialOptions()
	{
	}
	UClass* Z_Construct_UClass_UMaterialOptions_NoRegister()
	{
		return UMaterialOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureCoordinateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureCoordinateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSpecificUVIndex_MetaData[];
#endif
		static void NewProp_bUseSpecificUVIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSpecificUVIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMeshData_MetaData[];
#endif
		static void NewProp_bUseMeshData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMeshData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialBaking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MaterialOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Options object to define what and how a material should be baked out" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureCoordinateIndex_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "EditCondition", "bUseSpecificUVIndex" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Specific texture coordinate which should be used to while baking out material properties as the positions stream" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureCoordinateIndex = { "TextureCoordinateIndex", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialOptions, TextureCoordinateIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureCoordinateIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureCoordinateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "EditCondition", "bUseMeshData" },
		{ "ExposeOnSpawn", "" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Flag whether or not the value of TextureCoordinateIndex should be used while baking out material properties" },
	};
#endif
	void Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex_SetBit(void* Obj)
	{
		((UMaterialOptions*)Obj)->bUseSpecificUVIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex = { "bUseSpecificUVIndex", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialOptions), &Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Determines whether to not allow usage of the source mesh data while baking out material properties" },
	};
#endif
	void Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData_SetBit(void* Obj)
	{
		((UMaterialOptions*)Obj)->bUseMeshData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData = { "bUseMeshData", nullptr, (EPropertyFlags)0x0011000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialOptions), &Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "LOD indices for which the materials should be baked out" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices = { "LODIndices", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialOptions, LODIndices), METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices_Inner = { "LODIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "MaterialBakeSettings" },
		{ "ClampMin", "1" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Size of the final texture(s) containing the baked out property data" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0011000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialOptions, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "MaterialBakeSettings" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Properties which are supposed to be baked out for the material(s)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0011000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialOptions, Properties), METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureCoordinateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialOptions_Statics::ClassParams = {
		&UMaterialOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialOptions, 1048450570);
	template<> MATERIALBAKING_API UClass* StaticClass<UMaterialOptions>()
	{
		return UMaterialOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialOptions(Z_Construct_UClass_UMaterialOptions, &UMaterialOptions::StaticClass, TEXT("/Script/MaterialBaking"), TEXT("UMaterialOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialOptions);
	void UAssetBakeOptions::StaticRegisterNativesUAssetBakeOptions()
	{
	}
	UClass* Z_Construct_UClass_UAssetBakeOptions_NoRegister()
	{
		return UAssetBakeOptions::StaticClass();
	}
	struct Z_Construct_UClass_UAssetBakeOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetBakeOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialBaking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetBakeOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MaterialOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Asset bake options object" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetBakeOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetBakeOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetBakeOptions_Statics::ClassParams = {
		&UAssetBakeOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetBakeOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetBakeOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetBakeOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetBakeOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetBakeOptions, 1373336546);
	template<> MATERIALBAKING_API UClass* StaticClass<UAssetBakeOptions>()
	{
		return UAssetBakeOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetBakeOptions(Z_Construct_UClass_UAssetBakeOptions, &UAssetBakeOptions::StaticClass, TEXT("/Script/MaterialBaking"), TEXT("UAssetBakeOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetBakeOptions);
	void UMaterialMergeOptions::StaticRegisterNativesUMaterialMergeOptions()
	{
	}
	UClass* Z_Construct_UClass_UMaterialMergeOptions_NoRegister()
	{
		return UMaterialMergeOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialMergeOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialMergeOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialBaking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialMergeOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MaterialOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Material merge options object" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "OutputMaterialSettings" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Blend mode for the final proxy material(s)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0011000000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialMergeOptions, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_BlendMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_BlendMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "EditAnywhere, BlueprintReadWrite, config, Category = MeshSettings, meta = (ExposeOnSpawn)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialMergeOptions, Method), Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod, METADATA_PARAMS(Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialMergeOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialMergeOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialMergeOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialMergeOptions_Statics::ClassParams = {
		&UMaterialMergeOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialMergeOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialMergeOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialMergeOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialMergeOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialMergeOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialMergeOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialMergeOptions, 1141637042);
	template<> MATERIALBAKING_API UClass* StaticClass<UMaterialMergeOptions>()
	{
		return UMaterialMergeOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialMergeOptions(Z_Construct_UClass_UMaterialMergeOptions, &UMaterialMergeOptions::StaticClass, TEXT("/Script/MaterialBaking"), TEXT("UMaterialMergeOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialMergeOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

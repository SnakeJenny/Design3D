// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialUtilities/Public/MaterialUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialUtilities() {}
// Cross Module References
	MATERIALUTILITIES_API UEnum* Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties();
	UPackage* Z_Construct_UPackage__Script_MaterialUtilities();
// End Cross Module References
	static UEnum* EFlattenMaterialProperties_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties, Z_Construct_UPackage__Script_MaterialUtilities(), TEXT("EFlattenMaterialProperties"));
		}
		return Singleton;
	}
	template<> MATERIALUTILITIES_API UEnum* StaticEnum<EFlattenMaterialProperties>()
	{
		return EFlattenMaterialProperties_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlattenMaterialProperties(EFlattenMaterialProperties_StaticEnum, TEXT("/Script/MaterialUtilities"), TEXT("EFlattenMaterialProperties"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Hash() { return 2377732207U; }
	UEnum* Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlattenMaterialProperties"), 0, Get_Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlattenMaterialProperties::Diffuse", (int64)EFlattenMaterialProperties::Diffuse },
				{ "EFlattenMaterialProperties::Metallic", (int64)EFlattenMaterialProperties::Metallic },
				{ "EFlattenMaterialProperties::Specular", (int64)EFlattenMaterialProperties::Specular },
				{ "EFlattenMaterialProperties::Roughness", (int64)EFlattenMaterialProperties::Roughness },
				{ "EFlattenMaterialProperties::Normal", (int64)EFlattenMaterialProperties::Normal },
				{ "EFlattenMaterialProperties::Opacity", (int64)EFlattenMaterialProperties::Opacity },
				{ "EFlattenMaterialProperties::Emissive", (int64)EFlattenMaterialProperties::Emissive },
				{ "EFlattenMaterialProperties::SubSurface", (int64)EFlattenMaterialProperties::SubSurface },
				{ "EFlattenMaterialProperties::OpacityMask", (int64)EFlattenMaterialProperties::OpacityMask },
				{ "EFlattenMaterialProperties::AmbientOcclusion", (int64)EFlattenMaterialProperties::AmbientOcclusion },
				{ "EFlattenMaterialProperties::NumFlattenMaterialProperties", (int64)EFlattenMaterialProperties::NumFlattenMaterialProperties },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MaterialUtilities.h" },
				{ "ToolTip", "TODO replace this with rendering property enum when extending the system" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MaterialUtilities,
				nullptr,
				"EFlattenMaterialProperties",
				"EFlattenMaterialProperties",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

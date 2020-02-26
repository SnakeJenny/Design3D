// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Localization/Public/PortableObjectPipeline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortableObjectPipeline() {}
// Cross Module References
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode();
	UPackage* Z_Construct_UPackage__Script_Localization();
// End Cross Module References
	static UEnum* ELocalizedTextCollapseMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode, Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizedTextCollapseMode"));
		}
		return Singleton;
	}
	template<> LOCALIZATION_API UEnum* StaticEnum<ELocalizedTextCollapseMode>()
	{
		return ELocalizedTextCollapseMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocalizedTextCollapseMode(ELocalizedTextCollapseMode_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocalizedTextCollapseMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Hash() { return 1603935698U; }
	UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocalizedTextCollapseMode"), 0, Get_Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocalizedTextCollapseMode::IdenticalTextIdAndSource", (int64)ELocalizedTextCollapseMode::IdenticalTextIdAndSource },
				{ "ELocalizedTextCollapseMode::IdenticalPackageIdTextIdAndSource", (int64)ELocalizedTextCollapseMode::IdenticalPackageIdTextIdAndSource },
				{ "ELocalizedTextCollapseMode::IdenticalNamespaceAndSource", (int64)ELocalizedTextCollapseMode::IdenticalNamespaceAndSource },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IdenticalNamespaceAndSource.DisplayName", "Identical Namespace and Source Text" },
				{ "IdenticalNamespaceAndSource.ToolTip", "Collapse texts with the same namespace and source text (legacy pre-4.14 behavior)." },
				{ "IdenticalPackageIdTextIdAndSource.DisplayName", "Identical Package ID, Text Identity (Namespace + Key) and Source Text" },
				{ "IdenticalPackageIdTextIdAndSource.Hidden", "" },
				{ "IdenticalPackageIdTextIdAndSource.ToolTip", "Collapse texts with the same package ID, text identity (namespace + key), and source text (deprecated 4.14 behavior, removed in 4.17)." },
				{ "IdenticalTextIdAndSource.DisplayName", "Identical Text Identity (Namespace + Key) and Source Text" },
				{ "IdenticalTextIdAndSource.ToolTip", "Collapse texts with the same text identity (namespace + key) and source text (default 4.15+ behavior)." },
				{ "ModuleRelativePath", "Public/PortableObjectPipeline.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				"ELocalizedTextCollapseMode",
				"ELocalizedTextCollapseMode",
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

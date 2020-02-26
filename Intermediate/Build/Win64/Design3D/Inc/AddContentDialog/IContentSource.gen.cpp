// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AddContentDialog/Private/IContentSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIContentSource() {}
// Cross Module References
	ADDCONTENTDIALOG_API UEnum* Z_Construct_UEnum_AddContentDialog_EContentSourceCategory();
	UPackage* Z_Construct_UPackage__Script_AddContentDialog();
// End Cross Module References
	static UEnum* EContentSourceCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AddContentDialog_EContentSourceCategory, Z_Construct_UPackage__Script_AddContentDialog(), TEXT("EContentSourceCategory"));
		}
		return Singleton;
	}
	template<> ADDCONTENTDIALOG_API UEnum* StaticEnum<EContentSourceCategory>()
	{
		return EContentSourceCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContentSourceCategory(EContentSourceCategory_StaticEnum, TEXT("/Script/AddContentDialog"), TEXT("EContentSourceCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Hash() { return 3372168113U; }
	UEnum* Z_Construct_UEnum_AddContentDialog_EContentSourceCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AddContentDialog();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EContentSourceCategory"), 0, Get_Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EContentSourceCategory::BlueprintFeature", (int64)EContentSourceCategory::BlueprintFeature },
				{ "EContentSourceCategory::CodeFeature", (int64)EContentSourceCategory::CodeFeature },
				{ "EContentSourceCategory::EnterpriseFeature", (int64)EContentSourceCategory::EnterpriseFeature },
				{ "EContentSourceCategory::Content", (int64)EContentSourceCategory::Content },
				{ "EContentSourceCategory::EnterpriseContent", (int64)EContentSourceCategory::EnterpriseContent },
				{ "EContentSourceCategory::SharedPack", (int64)EContentSourceCategory::SharedPack },
				{ "EContentSourceCategory::Unknown", (int64)EContentSourceCategory::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/IContentSource.h" },
				{ "ToolTip", "Defines categories for content sources." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AddContentDialog,
				nullptr,
				"EContentSourceCategory",
				"EContentSourceCategory",
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

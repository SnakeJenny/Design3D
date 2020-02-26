// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeEditor/Public/LandscapeFileFormatInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeFileFormatInterface() {}
// Cross Module References
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult();
	UPackage* Z_Construct_UPackage__Script_LandscapeEditor();
// End Cross Module References
	static UEnum* ELandscapeImportResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeImportResult"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportResult>()
	{
		return ELandscapeImportResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeImportResult(ELandscapeImportResult_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("ELandscapeImportResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Hash() { return 720950336U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeImportResult"), 0, Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeImportResult::Success", (int64)ELandscapeImportResult::Success },
				{ "ELandscapeImportResult::Warning", (int64)ELandscapeImportResult::Warning },
				{ "ELandscapeImportResult::Error", (int64)ELandscapeImportResult::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LandscapeFileFormatInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"ELandscapeImportResult",
				"ELandscapeImportResult",
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

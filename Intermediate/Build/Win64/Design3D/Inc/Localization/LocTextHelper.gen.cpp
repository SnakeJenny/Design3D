// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Localization/Public/LocTextHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocTextHelper() {}
// Cross Module References
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode();
	UPackage* Z_Construct_UPackage__Script_Localization();
// End Cross Module References
	static UEnum* ELocTextPlatformSplitMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode, Z_Construct_UPackage__Script_Localization(), TEXT("ELocTextPlatformSplitMode"));
		}
		return Singleton;
	}
	template<> LOCALIZATION_API UEnum* StaticEnum<ELocTextPlatformSplitMode>()
	{
		return ELocTextPlatformSplitMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocTextPlatformSplitMode(ELocTextPlatformSplitMode_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocTextPlatformSplitMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode_Hash() { return 1688144427U; }
	UEnum* Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocTextPlatformSplitMode"), 0, Get_Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocTextPlatformSplitMode::None", (int64)ELocTextPlatformSplitMode::None },
				{ "ELocTextPlatformSplitMode::Restricted", (int64)ELocTextPlatformSplitMode::Restricted },
				{ "ELocTextPlatformSplitMode::All", (int64)ELocTextPlatformSplitMode::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.ToolTip", "Split platform specific localization data for all platforms" },
				{ "ModuleRelativePath", "Public/LocTextHelper.h" },
				{ "None.ToolTip", "Don't split platform specific localization data" },
				{ "Restricted.ToolTip", "Split platform specific localization data for restricted platforms only" },
				{ "ToolTip", "How should we split platform specific localization data?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				"ELocTextPlatformSplitMode",
				"ELocTextPlatformSplitMode",
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

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Input/NavigationReply.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationReply() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationRule();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static UEnum* EUINavigationRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EUINavigationRule, Z_Construct_UPackage__Script_SlateCore(), TEXT("EUINavigationRule"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EUINavigationRule>()
	{
		return EUINavigationRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUINavigationRule(EUINavigationRule_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EUINavigationRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EUINavigationRule_Hash() { return 1443385391U; }
	UEnum* Z_Construct_UEnum_SlateCore_EUINavigationRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUINavigationRule"), 0, Get_Z_Construct_UEnum_SlateCore_EUINavigationRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUINavigationRule::Escape", (int64)EUINavigationRule::Escape },
				{ "EUINavigationRule::Explicit", (int64)EUINavigationRule::Explicit },
				{ "EUINavigationRule::Wrap", (int64)EUINavigationRule::Wrap },
				{ "EUINavigationRule::Stop", (int64)EUINavigationRule::Stop },
				{ "EUINavigationRule::Custom", (int64)EUINavigationRule::Custom },
				{ "EUINavigationRule::CustomBoundary", (int64)EUINavigationRule::CustomBoundary },
				{ "EUINavigationRule::Invalid", (int64)EUINavigationRule::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Custom.ToolTip", "Custom navigation handled by user code." },
				{ "CustomBoundary.ToolTip", "Custom navigation handled by user code if the boundary is hit." },
				{ "Escape.ToolTip", "Allow the movement to continue in that direction, seeking the next navigable widget automatically." },
				{ "Explicit.ToolTip", "Move to a specific widget." },
				{ "Invalid.ToolTip", "Invalid Rule" },
				{ "ModuleRelativePath", "Public/Input/NavigationReply.h" },
				{ "Stop.ToolTip", "Stops movement in this direction" },
				{ "Wrap.ToolTip", "Wrap movement inside this container, causing the movement to cycle around from the opposite side,\nif the navigation attempt would have escaped." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EUINavigationRule",
				"EUINavigationRule",
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

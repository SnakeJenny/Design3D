// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kismet/Public/BlueprintActionMenuUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintActionMenuUtils() {}
// Cross Module References
	KISMET_API UEnum* Z_Construct_UEnum_Kismet_EContextTargetFlags();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References
	static UEnum* EContextTargetFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kismet_EContextTargetFlags, Z_Construct_UPackage__Script_Kismet(), TEXT("EContextTargetFlags"));
		}
		return Singleton;
	}
	template<> KISMET_API UEnum* StaticEnum<EContextTargetFlags::Type>()
	{
		return EContextTargetFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContextTargetFlags(EContextTargetFlags_StaticEnum, TEXT("/Script/Kismet"), TEXT("EContextTargetFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kismet_EContextTargetFlags_Hash() { return 2998498564U; }
	UEnum* Z_Construct_UEnum_Kismet_EContextTargetFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kismet();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EContextTargetFlags"), 0, Get_Z_Construct_UEnum_Kismet_EContextTargetFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EContextTargetFlags::TARGET_Blueprint", (int64)EContextTargetFlags::TARGET_Blueprint },
				{ "EContextTargetFlags::TARGET_SubComponents", (int64)EContextTargetFlags::TARGET_SubComponents },
				{ "EContextTargetFlags::TARGET_NodeTarget", (int64)EContextTargetFlags::TARGET_NodeTarget },
				{ "EContextTargetFlags::TARGET_PinObject", (int64)EContextTargetFlags::TARGET_PinObject },
				{ "EContextTargetFlags::TARGET_SiblingPinObjects", (int64)EContextTargetFlags::TARGET_SiblingPinObjects },
				{ "EContextTargetFlags::TARGET_BlueprintLibraries", (int64)EContextTargetFlags::TARGET_BlueprintLibraries },
				{ "EContextTargetFlags::ContextTargetFlagsEnd", (int64)EContextTargetFlags::ContextTargetFlagsEnd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ContextTargetFlagsEnd.Hidden", "" },
				{ "ContextTargetFlagsEnd.ToolTip", "+1 to the last flag (so we can easily iterate these flags)" },
				{ "ModuleRelativePath", "Public/BlueprintActionMenuUtils.h" },
				{ "TARGET_Blueprint.DisplayName", "This Blueprint" },
				{ "TARGET_Blueprint.ToolTip", "Include functions and variables that belong to this Blueprint." },
				{ "TARGET_BlueprintLibraries.DisplayName", "Libraries" },
				{ "TARGET_BlueprintLibraries.ToolTip", "Include static functions that are globally accessible (belonging to function/macro libraries, etc.)." },
				{ "TARGET_NodeTarget.DisplayName", "Node Target" },
				{ "TARGET_NodeTarget.ToolTip", "Include functions and variables that belong to the same class that the pin's node does." },
				{ "TARGET_PinObject.DisplayName", "Pin Type Class" },
				{ "TARGET_PinObject.ToolTip", "Include functions and variables that belong to this pin type." },
				{ "TARGET_SiblingPinObjects.DisplayName", "Other Object Outputs" },
				{ "TARGET_SiblingPinObjects.ToolTip", "Include functions and variables that belong to any of this node's output types." },
				{ "TARGET_SubComponents.DisplayName", "Components" },
				{ "TARGET_SubComponents.ToolTip", "Include functions that belong to components of this Blueprint and/or the other target classes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kismet,
				nullptr,
				"EContextTargetFlags",
				"EContextTargetFlags::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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

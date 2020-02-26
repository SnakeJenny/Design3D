// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Widgets/Views/STableViewBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTableViewBase() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EListItemAlignment();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static UEnum* EListItemAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EListItemAlignment, Z_Construct_UPackage__Script_Slate(), TEXT("EListItemAlignment"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EListItemAlignment>()
	{
		return EListItemAlignment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EListItemAlignment(EListItemAlignment_StaticEnum, TEXT("/Script/Slate"), TEXT("EListItemAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EListItemAlignment_Hash() { return 542619035U; }
	UEnum* Z_Construct_UEnum_Slate_EListItemAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EListItemAlignment"), 0, Get_Z_Construct_UEnum_Slate_EListItemAlignment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EListItemAlignment::EvenlyDistributed", (int64)EListItemAlignment::EvenlyDistributed },
				{ "EListItemAlignment::EvenlySize", (int64)EListItemAlignment::EvenlySize },
				{ "EListItemAlignment::EvenlyWide", (int64)EListItemAlignment::EvenlyWide },
				{ "EListItemAlignment::LeftAligned", (int64)EListItemAlignment::LeftAligned },
				{ "EListItemAlignment::RightAligned", (int64)EListItemAlignment::RightAligned },
				{ "EListItemAlignment::CenterAligned", (int64)EListItemAlignment::CenterAligned },
				{ "EListItemAlignment::Fill", (int64)EListItemAlignment::Fill },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CenterAligned.ToolTip", "Items are center aligned on the row (any extra space is halved and added to the left of the items)" },
				{ "EvenlyDistributed.DisplayName", "Evenly (Padding)" },
				{ "EvenlyDistributed.ToolTip", "Items are distributed evenly along the row (any extra space is added as padding between the items)" },
				{ "EvenlySize.DisplayName", "Evenly (Size)" },
				{ "EvenlySize.ToolTip", "Items are distributed evenly along the row (any extra space is used to scale up the size of the item proportionally.)" },
				{ "EvenlyWide.DisplayName", "Evenly (Wide)" },
				{ "EvenlyWide.ToolTip", "Items are distributed evenly along the row, any extra space is used to scale up width of the items proportionally.)" },
				{ "Fill.ToolTip", "Items are evenly horizontally stretched to distribute any extra space" },
				{ "LeftAligned.ToolTip", "Items are left aligned on the row (any extra space is added to the right of the items)" },
				{ "ModuleRelativePath", "Public/Widgets/Views/STableViewBase.h" },
				{ "RightAligned.ToolTip", "Items are right aligned on the row (any extra space is added to the left of the items)" },
				{ "ToolTip", "If the list panel is arranging items horizontally, this enum dictates how the items should be aligned (basically, where any extra space is placed)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EListItemAlignment",
				"EListItemAlignment",
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

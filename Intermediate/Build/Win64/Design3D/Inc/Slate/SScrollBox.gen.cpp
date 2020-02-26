// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Widgets/Layout/SScrollBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSScrollBox() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EDescendantScrollDestination();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static UEnum* EDescendantScrollDestination_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EDescendantScrollDestination, Z_Construct_UPackage__Script_Slate(), TEXT("EDescendantScrollDestination"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EDescendantScrollDestination>()
	{
		return EDescendantScrollDestination_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDescendantScrollDestination(EDescendantScrollDestination_StaticEnum, TEXT("/Script/Slate"), TEXT("EDescendantScrollDestination"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EDescendantScrollDestination_Hash() { return 3396022884U; }
	UEnum* Z_Construct_UEnum_Slate_EDescendantScrollDestination()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDescendantScrollDestination"), 0, Get_Z_Construct_UEnum_Slate_EDescendantScrollDestination_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDescendantScrollDestination::IntoView", (int64)EDescendantScrollDestination::IntoView },
				{ "EDescendantScrollDestination::TopOrLeft", (int64)EDescendantScrollDestination::TopOrLeft },
				{ "EDescendantScrollDestination::Center", (int64)EDescendantScrollDestination::Center },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Center.ToolTip", "Always scroll the widget so it appears at the center of the scrollable area, if possible.\nThis won't be possible for the first few items and the last few items, as there's not enough\nslack." },
				{ "IntoView.ToolTip", "Scroll the widget into view using the least amount of energy possible.  So if the new item\nis above the visible set, it will stop as soon as it's in view at the top.  If it's below the\nvisible set, it stop it comes into view at the bottom." },
				{ "ModuleRelativePath", "Public/Widgets/Layout/SScrollBox.h" },
				{ "ToolTip", "Where to scroll the descendant to" },
				{ "TopOrLeft.ToolTip", "Always scroll the widget so it appears at the top/Left of the scrollable area." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EDescendantScrollDestination",
				"EDescendantScrollDestination",
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

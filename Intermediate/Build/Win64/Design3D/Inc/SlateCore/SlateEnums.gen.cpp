// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Types/SlateEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateEnums() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EScrollDirection();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EMenuPlacement();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ENavigationGenesis();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ENavigationSource();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonPressMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonTouchMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonClickMethod();
// End Cross Module References
	static UEnum* ESelectInfo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESelectInfo, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESelectInfo"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESelectInfo::Type>()
	{
		return ESelectInfo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelectInfo(ESelectInfo_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESelectInfo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESelectInfo_Hash() { return 4284877366U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelectInfo"), 0, Get_Z_Construct_UEnum_SlateCore_ESelectInfo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESelectInfo::OnKeyPress", (int64)ESelectInfo::OnKeyPress },
				{ "ESelectInfo::OnNavigation", (int64)ESelectInfo::OnNavigation },
				{ "ESelectInfo::OnMouseClick", (int64)ESelectInfo::OnMouseClick },
				{ "ESelectInfo::Direct", (int64)ESelectInfo::Direct },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Direct.ToolTip", "Selection was directly set in code" },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "OnKeyPress.ToolTip", "User selected via a key press" },
				{ "OnMouseClick.ToolTip", "User selected by clicking on the item" },
				{ "OnNavigation.ToolTip", "User selected by navigating to the item" },
				{ "ToolTip", "Additional information about a selection event" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"ESelectInfo",
				"ESelectInfo::Type",
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
	static UEnum* ETextCommit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ETextCommit, Z_Construct_UPackage__Script_SlateCore(), TEXT("ETextCommit"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ETextCommit::Type>()
	{
		return ETextCommit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextCommit(ETextCommit_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ETextCommit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ETextCommit_Hash() { return 3129579410U; }
	UEnum* Z_Construct_UEnum_SlateCore_ETextCommit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextCommit"), 0, Get_Z_Construct_UEnum_SlateCore_ETextCommit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextCommit::Default", (int64)ETextCommit::Default },
				{ "ETextCommit::OnEnter", (int64)ETextCommit::OnEnter },
				{ "ETextCommit::OnUserMovedFocus", (int64)ETextCommit::OnUserMovedFocus },
				{ "ETextCommit::OnCleared", (int64)ETextCommit::OnCleared },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.ToolTip", "Losing focus or similar event caused implicit commit" },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "OnCleared.ToolTip", "Keyboard focus was explicitly cleared via the escape key or other similar action" },
				{ "OnEnter.ToolTip", "User committed via the enter key" },
				{ "OnUserMovedFocus.ToolTip", "User committed via tabbing away or moving focus explicitly away" },
				{ "ToolTip", "Additional information about a text committal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"ETextCommit",
				"ETextCommit::Type",
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
	static UEnum* EScrollDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EScrollDirection, Z_Construct_UPackage__Script_SlateCore(), TEXT("EScrollDirection"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EScrollDirection>()
	{
		return EScrollDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScrollDirection(EScrollDirection_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EScrollDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EScrollDirection_Hash() { return 2956449534U; }
	UEnum* Z_Construct_UEnum_SlateCore_EScrollDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScrollDirection"), 0, Get_Z_Construct_UEnum_SlateCore_EScrollDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Scroll_Down", (int64)Scroll_Down },
				{ "Scroll_Up", (int64)Scroll_Up },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "Scroll_Down.DisplayName", "Down" },
				{ "Scroll_Down.ToolTip", "Scroll down." },
				{ "Scroll_Up.DisplayName", "Up" },
				{ "Scroll_Up.ToolTip", "Scroll up." },
				{ "ToolTip", "Enumerates scroll directions." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EScrollDirection",
				"EScrollDirection",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EOrientation, Z_Construct_UPackage__Script_SlateCore(), TEXT("EOrientation"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EOrientation>()
	{
		return EOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOrientation(EOrientation_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EOrientation_Hash() { return 616929371U; }
	UEnum* Z_Construct_UEnum_SlateCore_EOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOrientation"), 0, Get_Z_Construct_UEnum_SlateCore_EOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Orient_Horizontal", (int64)Orient_Horizontal },
				{ "Orient_Vertical", (int64)Orient_Vertical },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "Orient_Horizontal.DisplayName", "Horizontal" },
				{ "Orient_Horizontal.ToolTip", "Orient horizontally, i.e. left to right." },
				{ "Orient_Vertical.DisplayName", "Vertical" },
				{ "Orient_Vertical.ToolTip", "Orient vertically, i.e. top to bottom." },
				{ "ToolTip", "Enumerates widget orientations." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EOrientation",
				"EOrientation",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMenuPlacement_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EMenuPlacement, Z_Construct_UPackage__Script_SlateCore(), TEXT("EMenuPlacement"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EMenuPlacement>()
	{
		return EMenuPlacement_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMenuPlacement(EMenuPlacement_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EMenuPlacement"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EMenuPlacement_Hash() { return 2241241042U; }
	UEnum* Z_Construct_UEnum_SlateCore_EMenuPlacement()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMenuPlacement"), 0, Get_Z_Construct_UEnum_SlateCore_EMenuPlacement_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MenuPlacement_BelowAnchor", (int64)MenuPlacement_BelowAnchor },
				{ "MenuPlacement_CenteredBelowAnchor", (int64)MenuPlacement_CenteredBelowAnchor },
				{ "MenuPlacement_BelowRightAnchor", (int64)MenuPlacement_BelowRightAnchor },
				{ "MenuPlacement_ComboBox", (int64)MenuPlacement_ComboBox },
				{ "MenuPlacement_ComboBoxRight", (int64)MenuPlacement_ComboBoxRight },
				{ "MenuPlacement_MenuRight", (int64)MenuPlacement_MenuRight },
				{ "MenuPlacement_AboveAnchor", (int64)MenuPlacement_AboveAnchor },
				{ "MenuPlacement_CenteredAboveAnchor", (int64)MenuPlacement_CenteredAboveAnchor },
				{ "MenuPlacement_AboveRightAnchor", (int64)MenuPlacement_AboveRightAnchor },
				{ "MenuPlacement_MenuLeft", (int64)MenuPlacement_MenuLeft },
				{ "MenuPlacement_Center", (int64)MenuPlacement_Center },
				{ "MenuPlacement_RightLeftCenter", (int64)MenuPlacement_RightLeftCenter },
				{ "MenuPlacement_MatchBottomLeft", (int64)MenuPlacement_MatchBottomLeft },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MenuPlacement_AboveAnchor.DisplayName", "Above" },
				{ "MenuPlacement_AboveAnchor.ToolTip", "Place the menu immediately above the anchor, no transition effect" },
				{ "MenuPlacement_AboveRightAnchor.DisplayName", "Above Right" },
				{ "MenuPlacement_AboveRightAnchor.ToolTip", "Place the menu immediately above the anchor aligned to the right of the content" },
				{ "MenuPlacement_BelowAnchor.DisplayName", "Below" },
				{ "MenuPlacement_BelowAnchor.ToolTip", "Place the menu immediately below the anchor" },
				{ "MenuPlacement_BelowRightAnchor.DisplayName", "Below Right" },
				{ "MenuPlacement_BelowRightAnchor.ToolTip", "Place the menu immediately below the anchor aligned to the right of the content" },
				{ "MenuPlacement_Center.DisplayName", "Center" },
				{ "MenuPlacement_Center.ToolTip", "Place the menu's center on top of the menu anchor's center point" },
				{ "MenuPlacement_CenteredAboveAnchor.DisplayName", "Centered Above" },
				{ "MenuPlacement_CenteredAboveAnchor.ToolTip", "Place the menu immediately centered above the anchor, no transition effect" },
				{ "MenuPlacement_CenteredBelowAnchor.DisplayName", "Centered Below" },
				{ "MenuPlacement_CenteredBelowAnchor.ToolTip", "Place the menu immediately centered below the anchor" },
				{ "MenuPlacement_ComboBox.DisplayName", "Combo Box" },
				{ "MenuPlacement_ComboBox.ToolTip", "Place the menu immediately below the anchor and match is width to the anchor's content" },
				{ "MenuPlacement_ComboBoxRight.DisplayName", "Combo Box Right" },
				{ "MenuPlacement_ComboBoxRight.ToolTip", "Place the menu immediately below the anchor and match is width to the anchor's content. If the width overflows, align with the right edge of the anchor." },
				{ "MenuPlacement_MatchBottomLeft.DisplayName", "Match Bottom Left Corner" },
				{ "MenuPlacement_MatchBottomLeft.ToolTip", "Place the menu's bottom left corner directly on top of the menu anchor's bottom left corner" },
				{ "MenuPlacement_MenuLeft.DisplayName", "Left" },
				{ "MenuPlacement_MenuLeft.ToolTip", "Place the menu to the left of the anchor" },
				{ "MenuPlacement_MenuRight.DisplayName", "Right" },
				{ "MenuPlacement_MenuRight.ToolTip", "Place the menu to the right of the anchor" },
				{ "MenuPlacement_RightLeftCenter.DisplayName", "Right Center, Left Center" },
				{ "MenuPlacement_RightLeftCenter.ToolTip", "Place the menu's vertical center on the left side at the menu anchor's vertical center on the right side" },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "ToolTip", "Enumerates possible placements for pop-up menus." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EMenuPlacement",
				"EMenuPlacement",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVerticalAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EVerticalAlignment, Z_Construct_UPackage__Script_SlateCore(), TEXT("EVerticalAlignment"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EVerticalAlignment>()
	{
		return EVerticalAlignment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVerticalAlignment(EVerticalAlignment_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EVerticalAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EVerticalAlignment_Hash() { return 1600997701U; }
	UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVerticalAlignment"), 0, Get_Z_Construct_UEnum_SlateCore_EVerticalAlignment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VAlign_Fill", (int64)VAlign_Fill },
				{ "VAlign_Top", (int64)VAlign_Top },
				{ "VAlign_Center", (int64)VAlign_Center },
				{ "VAlign_Bottom", (int64)VAlign_Bottom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "ToolTip", "Enumerates vertical alignment options, i.e. for widget slots." },
				{ "VAlign_Bottom.DisplayName", "Bottom" },
				{ "VAlign_Bottom.ToolTip", "Bottom-align." },
				{ "VAlign_Center.DisplayName", "Center" },
				{ "VAlign_Center.ToolTip", "Center-align." },
				{ "VAlign_Fill.DisplayName", "Fill" },
				{ "VAlign_Fill.ToolTip", "Fill the entire height." },
				{ "VAlign_Top.DisplayName", "Top" },
				{ "VAlign_Top.ToolTip", "Top-align." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EVerticalAlignment",
				"EVerticalAlignment",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHorizontalAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EHorizontalAlignment, Z_Construct_UPackage__Script_SlateCore(), TEXT("EHorizontalAlignment"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EHorizontalAlignment>()
	{
		return EHorizontalAlignment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHorizontalAlignment(EHorizontalAlignment_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EHorizontalAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Hash() { return 891237093U; }
	UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHorizontalAlignment"), 0, Get_Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HAlign_Fill", (int64)HAlign_Fill },
				{ "HAlign_Left", (int64)HAlign_Left },
				{ "HAlign_Center", (int64)HAlign_Center },
				{ "HAlign_Right", (int64)HAlign_Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HAlign_Center.DisplayName", "Center" },
				{ "HAlign_Center.ToolTip", "Center-align." },
				{ "HAlign_Fill.DisplayName", "Fill" },
				{ "HAlign_Fill.ToolTip", "Fill the entire width." },
				{ "HAlign_Left.DisplayName", "Left" },
				{ "HAlign_Left.ToolTip", "Left-align." },
				{ "HAlign_Right.DisplayName", "Right" },
				{ "HAlign_Right.ToolTip", "Right-align." },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "ToolTip", "Enumerates horizontal alignment options, i.e. for widget slots." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EHorizontalAlignment",
				"EHorizontalAlignment",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENavigationGenesis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ENavigationGenesis, Z_Construct_UPackage__Script_SlateCore(), TEXT("ENavigationGenesis"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ENavigationGenesis>()
	{
		return ENavigationGenesis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavigationGenesis(ENavigationGenesis_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ENavigationGenesis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ENavigationGenesis_Hash() { return 2622058992U; }
	UEnum* Z_Construct_UEnum_SlateCore_ENavigationGenesis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavigationGenesis"), 0, Get_Z_Construct_UEnum_SlateCore_ENavigationGenesis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavigationGenesis::Keyboard", (int64)ENavigationGenesis::Keyboard },
				{ "ENavigationGenesis::Controller", (int64)ENavigationGenesis::Controller },
				{ "ENavigationGenesis::User", (int64)ENavigationGenesis::User },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Controller.ToolTip", "Navigation caused by a Controller" },
				{ "Keyboard.ToolTip", "Navigation caused by the Keyboard" },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "ToolTip", "Enumerates the genesis of the navigation, where generated the navigation" },
				{ "User.ToolTip", "Navigate caused by a user generated event (Users = WIdgets, Client Code, ...)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"ENavigationGenesis",
				"ENavigationGenesis",
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
	static UEnum* ENavigationSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ENavigationSource, Z_Construct_UPackage__Script_SlateCore(), TEXT("ENavigationSource"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ENavigationSource>()
	{
		return ENavigationSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavigationSource(ENavigationSource_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ENavigationSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ENavigationSource_Hash() { return 2336478885U; }
	UEnum* Z_Construct_UEnum_SlateCore_ENavigationSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavigationSource"), 0, Get_Z_Construct_UEnum_SlateCore_ENavigationSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavigationSource::FocusedWidget", (int64)ENavigationSource::FocusedWidget },
				{ "ENavigationSource::WidgetUnderCursor", (int64)ENavigationSource::WidgetUnderCursor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FocusedWidget.ToolTip", "Navigate from the focused widget" },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "ToolTip", "Enumerates the source of the navigation" },
				{ "WidgetUnderCursor.ToolTip", "Navigate from the widget under the cursor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"ENavigationSource",
				"ENavigationSource",
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
	static UEnum* EUINavigation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EUINavigation, Z_Construct_UPackage__Script_SlateCore(), TEXT("EUINavigation"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EUINavigation>()
	{
		return EUINavigation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUINavigation(EUINavigation_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EUINavigation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EUINavigation_Hash() { return 2338514949U; }
	UEnum* Z_Construct_UEnum_SlateCore_EUINavigation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUINavigation"), 0, Get_Z_Construct_UEnum_SlateCore_EUINavigation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUINavigation::Left", (int64)EUINavigation::Left },
				{ "EUINavigation::Right", (int64)EUINavigation::Right },
				{ "EUINavigation::Up", (int64)EUINavigation::Up },
				{ "EUINavigation::Down", (int64)EUINavigation::Down },
				{ "EUINavigation::Next", (int64)EUINavigation::Next },
				{ "EUINavigation::Previous", (int64)EUINavigation::Previous },
				{ "EUINavigation::Num", (int64)EUINavigation::Num },
				{ "EUINavigation::Invalid", (int64)EUINavigation::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Invalid.Hidden", "" },
				{ "Invalid.ToolTip", "Denotes an invalid navigation, more important used to denote no specified navigation" },
				{ "Left.ToolTip", "Four cardinal directions" },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "Next.ToolTip", "Conceptual next and previous" },
				{ "Num.Hidden", "" },
				{ "Num.ToolTip", "Number of navigation types" },
				{ "ToolTip", "Navigation context for event" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EUINavigation",
				"EUINavigation",
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
	static UEnum* EButtonPressMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EButtonPressMethod, Z_Construct_UPackage__Script_SlateCore(), TEXT("EButtonPressMethod"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EButtonPressMethod::Type>()
	{
		return EButtonPressMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EButtonPressMethod(EButtonPressMethod_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EButtonPressMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EButtonPressMethod_Hash() { return 305692671U; }
	UEnum* Z_Construct_UEnum_SlateCore_EButtonPressMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EButtonPressMethod"), 0, Get_Z_Construct_UEnum_SlateCore_EButtonPressMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EButtonPressMethod::DownAndUp", (int64)EButtonPressMethod::DownAndUp },
				{ "EButtonPressMethod::ButtonPress", (int64)EButtonPressMethod::ButtonPress },
				{ "EButtonPressMethod::ButtonRelease", (int64)EButtonPressMethod::ButtonRelease },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ButtonPress.ToolTip", "Click will be triggered immediately on button press." },
				{ "ButtonRelease.ToolTip", "Click will always be triggered when a button release occurs on the focused button,\neven if the button wasn't pressed while focused." },
				{ "DownAndUp.ToolTip", "User must press the button, then release while the button has focus to trigger the click.\nThis is the most common type of button." },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "ToolTip", "Enumerates different methods that a button can be triggered with keyboard/controller. Normally, DownAndUp is appropriate." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EButtonPressMethod",
				"EButtonPressMethod::Type",
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
	static UEnum* EButtonTouchMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EButtonTouchMethod, Z_Construct_UPackage__Script_SlateCore(), TEXT("EButtonTouchMethod"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EButtonTouchMethod::Type>()
	{
		return EButtonTouchMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EButtonTouchMethod(EButtonTouchMethod_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EButtonTouchMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Hash() { return 808331351U; }
	UEnum* Z_Construct_UEnum_SlateCore_EButtonTouchMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EButtonTouchMethod"), 0, Get_Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EButtonTouchMethod::DownAndUp", (int64)EButtonTouchMethod::DownAndUp },
				{ "EButtonTouchMethod::Down", (int64)EButtonTouchMethod::Down },
				{ "EButtonTouchMethod::PreciseTap", (int64)EButtonTouchMethod::PreciseTap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Down.ToolTip", "Click will be triggered immediately on touch down, and touch will not be captured." },
				{ "DownAndUp.ToolTip", "Most buttons behave this way." },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "PreciseTap.ToolTip", "Inside a list, buttons can only be clicked with precise tap.\nMoving the pointer will scroll the list." },
				{ "ToolTip", "Ways in which touch interactions trigger a \"Clicked\" event." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EButtonTouchMethod",
				"EButtonTouchMethod::Type",
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
	static UEnum* EButtonClickMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EButtonClickMethod, Z_Construct_UPackage__Script_SlateCore(), TEXT("EButtonClickMethod"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EButtonClickMethod::Type>()
	{
		return EButtonClickMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EButtonClickMethod(EButtonClickMethod_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EButtonClickMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EButtonClickMethod_Hash() { return 4205258682U; }
	UEnum* Z_Construct_UEnum_SlateCore_EButtonClickMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EButtonClickMethod"), 0, Get_Z_Construct_UEnum_SlateCore_EButtonClickMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EButtonClickMethod::DownAndUp", (int64)EButtonClickMethod::DownAndUp },
				{ "EButtonClickMethod::MouseDown", (int64)EButtonClickMethod::MouseDown },
				{ "EButtonClickMethod::MouseUp", (int64)EButtonClickMethod::MouseUp },
				{ "EButtonClickMethod::PreciseClick", (int64)EButtonClickMethod::PreciseClick },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DownAndUp.ToolTip", "User must press the button, then release while over the button to trigger the click.\nThis is the most common type of button." },
				{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
				{ "MouseDown.ToolTip", "Click will be triggered immediately on mouse down, and mouse will not be captured." },
				{ "MouseUp.ToolTip", "Click will always be triggered when mouse button is released over the button,\neven if the button wasn't pressed down over it." },
				{ "PreciseClick.ToolTip", "Inside a list, buttons can only be clicked with precise tap.\nMoving the pointer will scroll the list, also allows drag-droppable buttons." },
				{ "ToolTip", "Enumerates different methods that a button click can be triggered. Normally, DownAndUp is appropriate." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EButtonClickMethod",
				"EButtonClickMethod::Type",
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

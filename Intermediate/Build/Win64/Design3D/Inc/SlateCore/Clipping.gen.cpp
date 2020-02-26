// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Layout/Clipping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClipping() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EWidgetClipping();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static UEnum* EWidgetClipping_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EWidgetClipping, Z_Construct_UPackage__Script_SlateCore(), TEXT("EWidgetClipping"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EWidgetClipping>()
	{
		return EWidgetClipping_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetClipping(EWidgetClipping_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EWidgetClipping"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EWidgetClipping_Hash() { return 2179705961U; }
	UEnum* Z_Construct_UEnum_SlateCore_EWidgetClipping()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetClipping"), 0, Get_Z_Construct_UEnum_SlateCore_EWidgetClipping_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetClipping::Inherit", (int64)EWidgetClipping::Inherit },
				{ "EWidgetClipping::ClipToBounds", (int64)EWidgetClipping::ClipToBounds },
				{ "EWidgetClipping::ClipToBoundsWithoutIntersecting", (int64)EWidgetClipping::ClipToBoundsWithoutIntersecting },
				{ "EWidgetClipping::ClipToBoundsAlways", (int64)EWidgetClipping::ClipToBoundsAlways },
				{ "EWidgetClipping::OnDemand", (int64)EWidgetClipping::OnDemand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClipToBounds.ToolTip", "This widget clips content the bounds of this widget.  It intersects those bounds with any previous clipping area." },
				{ "ClipToBoundsAlways.DisplayName", "Clip To Bounds - Always (Advanced)" },
				{ "ClipToBoundsAlways.ToolTip", "This widget clips to its bounds.  It intersects those bounds with any previous clipping area.\n\nNOTE: This clipping area can NOT be ignored, it will always clip children.  Useful for hard barriers\nin the UI where you never want animations or other effects to break this region." },
				{ "ClipToBoundsWithoutIntersecting.DisplayName", "Clip To Bounds - Without Intersecting (Advanced)" },
				{ "ClipToBoundsWithoutIntersecting.ToolTip", "This widget clips to its bounds.  It does NOT intersect with any existing clipping geometry, it pushes a new clipping\nstate.  Effectively allowing it to render outside the bounds of hierarchy that does clip.\n\nNOTE: This will NOT allow you ignore the clipping zone that is set to [Yes - Always]." },
				{ "Inherit.ToolTip", "This widget does not clip children, it and all children inherit the clipping area of the last widget that clipped." },
				{ "ModuleRelativePath", "Public/Layout/Clipping.h" },
				{ "OnDemand.DisplayName", "On Demand (Advanced)" },
				{ "OnDemand.ToolTip", "This widget clips to its bounds when it's Desired Size is larger than the allocated geometry\nthe widget is given.  If that occurs, it work like [Yes].\n\nNOTE: This mode was primarily added for Text, which is often placed into containers that eventually\nare resized to not be able to support the length of the text.  So rather than needing to tag every\ncontainer that could contain text with [Yes], which would result in almost no batching, this mode\nwas added to dynamically adjust the clipping if needed.  The reason not every panel is set to OnDemand,\nis because not every panel returns a Desired Size that matches what it plans to render at." },
				{ "ToolTip", "This enum controls clipping of widgets in Slate.  By default all SWidgets do not need to clip their children.\nMost of the time, you don't need to clip, the only times it becomes important is when something might become hidden\ndue to panning.  You should use this wisely, as Slate can not batch across clipping areas, so if widget A and widget B\nare set to EWidgetClipping::Yes, no drawing that happens inside their widget trees will ever be batch together, adding\nadditional GPU overhead." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EWidgetClipping",
				"EWidgetClipping",
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

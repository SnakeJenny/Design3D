// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Widgets/Layout/SScaleBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSScaleBox() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretch();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretchDirection();
// End Cross Module References
	static UEnum* EStretch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EStretch, Z_Construct_UPackage__Script_Slate(), TEXT("EStretch"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EStretch::Type>()
	{
		return EStretch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStretch(EStretch_StaticEnum, TEXT("/Script/Slate"), TEXT("EStretch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EStretch_Hash() { return 2214766409U; }
	UEnum* Z_Construct_UEnum_Slate_EStretch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStretch"), 0, Get_Z_Construct_UEnum_Slate_EStretch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStretch::None", (int64)EStretch::None },
				{ "EStretch::Fill", (int64)EStretch::Fill },
				{ "EStretch::ScaleToFit", (int64)EStretch::ScaleToFit },
				{ "EStretch::ScaleToFitX", (int64)EStretch::ScaleToFitX },
				{ "EStretch::ScaleToFitY", (int64)EStretch::ScaleToFitY },
				{ "EStretch::ScaleToFill", (int64)EStretch::ScaleToFill },
				{ "EStretch::ScaleBySafeZone", (int64)EStretch::ScaleBySafeZone },
				{ "EStretch::UserSpecified", (int64)EStretch::UserSpecified },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Fill.ToolTip", "Scales the content non-uniformly filling the entire space of the area." },
				{ "ModuleRelativePath", "Public/Widgets/Layout/SScaleBox.h" },
				{ "None.ToolTip", "Does not scale the content." },
				{ "ScaleBySafeZone.ToolTip", "Scales the content according to the size of the safe zone currently applied to the viewport." },
				{ "ScaleToFill.ToolTip", "Scales the content uniformly (preserving aspect ratio), until all sides meet\nor exceed the size of the area.  Will result in clipping the longer side." },
				{ "ScaleToFit.ToolTip", "Scales the content uniformly (preserving aspect ratio)\nuntil it can no longer scale the content without clipping it." },
				{ "ScaleToFitX.ToolTip", "Scales the content uniformly (preserving aspect ratio)\nuntil it can no longer scale the content without clipping it along the x-axis,\nthe y-axis can/will be clipped." },
				{ "ScaleToFitY.ToolTip", "Scales the content uniformly (preserving aspect ratio)\nuntil it can no longer scale the content without clipping it along the y-axis,\nthe x-axis can/will be clipped." },
				{ "UserSpecified.ToolTip", "Scales the content by the scale specified by the user." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EStretch",
				"EStretch::Type",
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
	static UEnum* EStretchDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EStretchDirection, Z_Construct_UPackage__Script_Slate(), TEXT("EStretchDirection"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EStretchDirection::Type>()
	{
		return EStretchDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStretchDirection(EStretchDirection_StaticEnum, TEXT("/Script/Slate"), TEXT("EStretchDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EStretchDirection_Hash() { return 3058324544U; }
	UEnum* Z_Construct_UEnum_Slate_EStretchDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStretchDirection"), 0, Get_Z_Construct_UEnum_Slate_EStretchDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStretchDirection::Both", (int64)EStretchDirection::Both },
				{ "EStretchDirection::DownOnly", (int64)EStretchDirection::DownOnly },
				{ "EStretchDirection::UpOnly", (int64)EStretchDirection::UpOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Both.ToolTip", "Will scale the content up or down." },
				{ "DownOnly.ToolTip", "Will only make the content smaller, will never scale it larger than the content's desired size." },
				{ "ModuleRelativePath", "Public/Widgets/Layout/SScaleBox.h" },
				{ "UpOnly.ToolTip", "Will only make the content larger, will never scale it smaller than the content's desired size." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EStretchDirection",
				"EStretchDirection::Type",
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

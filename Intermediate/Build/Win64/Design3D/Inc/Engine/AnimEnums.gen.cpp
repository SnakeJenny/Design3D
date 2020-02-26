// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimEnums() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveBasePoseType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
// End Cross Module References
	static UEnum* AnimationCompressionFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimationCompressionFormat, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationCompressionFormat"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<AnimationCompressionFormat>()
	{
		return AnimationCompressionFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimationCompressionFormat(AnimationCompressionFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("AnimationCompressionFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_AnimationCompressionFormat_Hash() { return 3436720024U; }
	UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimationCompressionFormat"), 0, Get_Z_Construct_UEnum_Engine_AnimationCompressionFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ACF_None", (int64)ACF_None },
				{ "ACF_Float96NoW", (int64)ACF_Float96NoW },
				{ "ACF_Fixed48NoW", (int64)ACF_Fixed48NoW },
				{ "ACF_IntervalFixed32NoW", (int64)ACF_IntervalFixed32NoW },
				{ "ACF_Fixed32NoW", (int64)ACF_Fixed32NoW },
				{ "ACF_Float32NoW", (int64)ACF_Float32NoW },
				{ "ACF_Identity", (int64)ACF_Identity },
				{ "ACF_MAX", (int64)ACF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACF_MAX.Hidden", "" },
				{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
				{ "ToolTip", "Indicates animation data compression format." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"AnimationCompressionFormat",
				"AnimationCompressionFormat",
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
	static UEnum* EAdditiveBasePoseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAdditiveBasePoseType, Z_Construct_UPackage__Script_Engine(), TEXT("EAdditiveBasePoseType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAdditiveBasePoseType>()
	{
		return EAdditiveBasePoseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdditiveBasePoseType(EAdditiveBasePoseType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAdditiveBasePoseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Hash() { return 23838074U; }
	UEnum* Z_Construct_UEnum_Engine_EAdditiveBasePoseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdditiveBasePoseType"), 0, Get_Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ABPT_None", (int64)ABPT_None },
				{ "ABPT_RefPose", (int64)ABPT_RefPose },
				{ "ABPT_AnimScaled", (int64)ABPT_AnimScaled },
				{ "ABPT_AnimFrame", (int64)ABPT_AnimFrame },
				{ "ABPT_MAX", (int64)ABPT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ABPT_AnimFrame.DisplayName", "Selected animation frame" },
				{ "ABPT_AnimFrame.ToolTip", "Use one frame of an animation as a base pose. BasePoseSeq and RefFrameIndex must be set (RefFrameIndex will be clamped)." },
				{ "ABPT_AnimScaled.DisplayName", "Selected animation scaled" },
				{ "ABPT_AnimScaled.ToolTip", "Use a whole animation as a base pose. BasePoseSeq must be set." },
				{ "ABPT_None.DisplayName", "None" },
				{ "ABPT_None.ToolTip", "Will be deprecated." },
				{ "ABPT_RefPose.DisplayName", "Skeleton Reference Pose" },
				{ "ABPT_RefPose.ToolTip", "Use the Skeleton's ref pose as base." },
				{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
				{ "ToolTip", "For an additive animation, indicates what the animation is relative to." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAdditiveBasePoseType",
				"EAdditiveBasePoseType",
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
	static UEnum* ERootMotionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERootMotionMode::Type>()
	{
		return ERootMotionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionMode(ERootMotionMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERootMotionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERootMotionMode_Hash() { return 1112158781U; }
	UEnum* Z_Construct_UEnum_Engine_ERootMotionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionMode"), 0, Get_Z_Construct_UEnum_Engine_ERootMotionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionMode::NoRootMotionExtraction", (int64)ERootMotionMode::NoRootMotionExtraction },
				{ "ERootMotionMode::IgnoreRootMotion", (int64)ERootMotionMode::IgnoreRootMotion },
				{ "ERootMotionMode::RootMotionFromEverything", (int64)ERootMotionMode::RootMotionFromEverything },
				{ "ERootMotionMode::RootMotionFromMontagesOnly", (int64)ERootMotionMode::RootMotionFromMontagesOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IgnoreRootMotion.ToolTip", "Extract root motion but do not apply it." },
				{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
				{ "NoRootMotionExtraction.ToolTip", "Leave root motion in animation." },
				{ "RootMotionFromEverything.ToolTip", "Root motion is taken from all animations contributing to the final pose, not suitable for network multiplayer setups." },
				{ "RootMotionFromMontagesOnly.ToolTip", "Root motion is only taken from montages, suitable for network multiplayer setups." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERootMotionMode",
				"ERootMotionMode::Type",
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
	static UEnum* ERootMotionRootLock_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionRootLock, Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionRootLock"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERootMotionRootLock::Type>()
	{
		return ERootMotionRootLock_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionRootLock(ERootMotionRootLock_StaticEnum, TEXT("/Script/Engine"), TEXT("ERootMotionRootLock"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERootMotionRootLock_Hash() { return 2036125754U; }
	UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionRootLock"), 0, Get_Z_Construct_UEnum_Engine_ERootMotionRootLock_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionRootLock::RefPose", (int64)ERootMotionRootLock::RefPose },
				{ "ERootMotionRootLock::AnimFirstFrame", (int64)ERootMotionRootLock::AnimFirstFrame },
				{ "ERootMotionRootLock::Zero", (int64)ERootMotionRootLock::Zero },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnimFirstFrame.ToolTip", "Use root bone position on first frame of animation." },
				{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
				{ "RefPose.ToolTip", "Use reference pose root bone position." },
				{ "ToolTip", "Root Bone Lock options when extracting Root Motion." },
				{ "Zero.ToolTip", "FTransform::Identity." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERootMotionRootLock",
				"ERootMotionRootLock::Type",
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

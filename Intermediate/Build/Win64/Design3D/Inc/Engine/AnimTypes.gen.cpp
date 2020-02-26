// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAxisOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENotifyFilterType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMontageNotifyTickType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneRotationSource();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSyncMarker();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLinkableElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeights();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight();
// End Cross Module References
	static UEnum* EComponentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EComponentType, Z_Construct_UPackage__Script_Engine(), TEXT("EComponentType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EComponentType::Type>()
	{
		return EComponentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EComponentType(EComponentType_StaticEnum, TEXT("/Script/Engine"), TEXT("EComponentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EComponentType_Hash() { return 2606926733U; }
	UEnum* Z_Construct_UEnum_Engine_EComponentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EComponentType"), 0, Get_Z_Construct_UEnum_Engine_EComponentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EComponentType::None", (int64)EComponentType::None },
				{ "EComponentType::TranslationX", (int64)EComponentType::TranslationX },
				{ "EComponentType::TranslationY", (int64)EComponentType::TranslationY },
				{ "EComponentType::TranslationZ", (int64)EComponentType::TranslationZ },
				{ "EComponentType::RotationX", (int64)EComponentType::RotationX },
				{ "EComponentType::RotationY", (int64)EComponentType::RotationY },
				{ "EComponentType::RotationZ", (int64)EComponentType::RotationZ },
				{ "EComponentType::Scale", (int64)EComponentType::Scale },
				{ "EComponentType::ScaleX", (int64)EComponentType::ScaleX },
				{ "EComponentType::ScaleY", (int64)EComponentType::ScaleY },
				{ "EComponentType::ScaleZ", (int64)EComponentType::ScaleZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "Scale.DisplayName", "Scale (largest component)" },
				{ "ToolTip", "The transform component (attribute) to read from" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EComponentType",
				"EComponentType::Type",
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
	static UEnum* EAxisOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAxisOption, Z_Construct_UPackage__Script_Engine(), TEXT("EAxisOption"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAxisOption::Type>()
	{
		return EAxisOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAxisOption(EAxisOption_StaticEnum, TEXT("/Script/Engine"), TEXT("EAxisOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAxisOption_Hash() { return 1071363081U; }
	UEnum* Z_Construct_UEnum_Engine_EAxisOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAxisOption"), 0, Get_Z_Construct_UEnum_Engine_EAxisOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAxisOption::X", (int64)EAxisOption::X },
				{ "EAxisOption::Y", (int64)EAxisOption::Y },
				{ "EAxisOption::Z", (int64)EAxisOption::Z },
				{ "EAxisOption::X_Neg", (int64)EAxisOption::X_Neg },
				{ "EAxisOption::Y_Neg", (int64)EAxisOption::Y_Neg },
				{ "EAxisOption::Z_Neg", (int64)EAxisOption::Z_Neg },
				{ "EAxisOption::Custom", (int64)EAxisOption::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAxisOption",
				"EAxisOption::Type",
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
	static UEnum* EAnimInterpolationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimInterpolationType, Z_Construct_UPackage__Script_Engine(), TEXT("EAnimInterpolationType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimInterpolationType>()
	{
		return EAnimInterpolationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimInterpolationType(EAnimInterpolationType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAnimInterpolationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAnimInterpolationType_Hash() { return 3935801320U; }
	UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimInterpolationType"), 0, Get_Z_Construct_UEnum_Engine_EAnimInterpolationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimInterpolationType::Linear", (int64)EAnimInterpolationType::Linear },
				{ "EAnimInterpolationType::Step", (int64)EAnimInterpolationType::Step },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Linear.DisplayName", "Linear" },
				{ "Linear.ToolTip", "Linear interpolation when looking up values between keys." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "Step.DisplayName", "Step" },
				{ "Step.ToolTip", "Step interpolation when looking up values between keys." },
				{ "ToolTip", "Indicates how animation should be evaluated between keys." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAnimInterpolationType",
				"EAnimInterpolationType",
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
	static UEnum* ECurveBlendOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECurveBlendOption, Z_Construct_UPackage__Script_Engine(), TEXT("ECurveBlendOption"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECurveBlendOption::Type>()
	{
		return ECurveBlendOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECurveBlendOption(ECurveBlendOption_StaticEnum, TEXT("/Script/Engine"), TEXT("ECurveBlendOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECurveBlendOption_Hash() { return 832513047U; }
	UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECurveBlendOption"), 0, Get_Z_Construct_UEnum_Engine_ECurveBlendOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECurveBlendOption::MaxWeight", (int64)ECurveBlendOption::MaxWeight },
				{ "ECurveBlendOption::NormalizeByWeight", (int64)ECurveBlendOption::NormalizeByWeight },
				{ "ECurveBlendOption::BlendByWeight", (int64)ECurveBlendOption::BlendByWeight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlendByWeight.ToolTip", "Blend By Weight without normalizing" },
				{ "MaxWeight.ToolTip", "Find Max Weight of curve and use that weight." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "NormalizeByWeight.ToolTip", "Normalize By Sum of Weight and use it to blend." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECurveBlendOption",
				"ECurveBlendOption::Type",
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
	static UEnum* EAdditiveAnimationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAdditiveAnimationType, Z_Construct_UPackage__Script_Engine(), TEXT("EAdditiveAnimationType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAdditiveAnimationType>()
	{
		return EAdditiveAnimationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdditiveAnimationType(EAdditiveAnimationType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAdditiveAnimationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAdditiveAnimationType_Hash() { return 605830828U; }
	UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdditiveAnimationType"), 0, Get_Z_Construct_UEnum_Engine_EAdditiveAnimationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AAT_None", (int64)AAT_None },
				{ "AAT_LocalSpaceBase", (int64)AAT_LocalSpaceBase },
				{ "AAT_RotationOffsetMeshSpace", (int64)AAT_RotationOffsetMeshSpace },
				{ "AAT_MAX", (int64)AAT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AAT_LocalSpaceBase.DisplayName", "Local Space" },
				{ "AAT_LocalSpaceBase.ToolTip", "Create Additive from LocalSpace Base." },
				{ "AAT_None.DisplayName", "No additive" },
				{ "AAT_None.ToolTip", "No additive." },
				{ "AAT_RotationOffsetMeshSpace.DisplayName", "Mesh Space" },
				{ "AAT_RotationOffsetMeshSpace.ToolTip", "Create Additive from MeshSpace Rotation Only, Translation still will be LocalSpace." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Indicates whether an animation is additive, and what kind." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAdditiveAnimationType",
				"EAdditiveAnimationType",
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
	static UEnum* ENotifyFilterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENotifyFilterType, Z_Construct_UPackage__Script_Engine(), TEXT("ENotifyFilterType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENotifyFilterType::Type>()
	{
		return ENotifyFilterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENotifyFilterType(ENotifyFilterType_StaticEnum, TEXT("/Script/Engine"), TEXT("ENotifyFilterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENotifyFilterType_Hash() { return 1811156613U; }
	UEnum* Z_Construct_UEnum_Engine_ENotifyFilterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENotifyFilterType"), 0, Get_Z_Construct_UEnum_Engine_ENotifyFilterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENotifyFilterType::NoFiltering", (int64)ENotifyFilterType::NoFiltering },
				{ "ENotifyFilterType::LOD", (int64)ENotifyFilterType::LOD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LOD.ToolTip", "Filter By Skeletal Mesh LOD." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "NoFiltering.ToolTip", "No filtering." },
				{ "ToolTip", "Filtering method for deciding whether to trigger a notify." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENotifyFilterType",
				"ENotifyFilterType::Type",
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
	static UEnum* EMontageNotifyTickType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMontageNotifyTickType, Z_Construct_UPackage__Script_Engine(), TEXT("EMontageNotifyTickType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMontageNotifyTickType::Type>()
	{
		return EMontageNotifyTickType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMontageNotifyTickType(EMontageNotifyTickType_StaticEnum, TEXT("/Script/Engine"), TEXT("EMontageNotifyTickType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMontageNotifyTickType_Hash() { return 3032577264U; }
	UEnum* Z_Construct_UEnum_Engine_EMontageNotifyTickType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMontageNotifyTickType"), 0, Get_Z_Construct_UEnum_Engine_EMontageNotifyTickType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMontageNotifyTickType::Queued", (int64)EMontageNotifyTickType::Queued },
				{ "EMontageNotifyTickType::BranchingPoint", (int64)EMontageNotifyTickType::BranchingPoint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BranchingPoint.ToolTip", "Trigger notifies as they are encountered (Slower). Suitable for changing sections or montage position." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "Queued.ToolTip", "Queue notifies, and trigger them at the end of the evaluation phase (faster). Not suitable for changing sections or montage position." },
				{ "ToolTip", "Ticking method for AnimNotifies in AnimMontages." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMontageNotifyTickType",
				"EMontageNotifyTickType::Type",
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
	static UEnum* EBoneRotationSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneRotationSource, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneRotationSource"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneRotationSource>()
	{
		return EBoneRotationSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneRotationSource(EBoneRotationSource_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneRotationSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneRotationSource_Hash() { return 267395465U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneRotationSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneRotationSource"), 0, Get_Z_Construct_UEnum_Engine_EBoneRotationSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BRS_KeepComponentSpaceRotation", (int64)BRS_KeepComponentSpaceRotation },
				{ "BRS_KeepLocalSpaceRotation", (int64)BRS_KeepLocalSpaceRotation },
				{ "BRS_CopyFromTarget", (int64)BRS_CopyFromTarget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BRS_CopyFromTarget.DisplayName", "Copy Target Rotation" },
				{ "BRS_CopyFromTarget.ToolTip", "Copy rotation of target to bone." },
				{ "BRS_KeepComponentSpaceRotation.DisplayName", "No Change (Preserve Existing Component Space Rotation)" },
				{ "BRS_KeepComponentSpaceRotation.ToolTip", "Don't change rotation at all." },
				{ "BRS_KeepLocalSpaceRotation.DisplayName", "Maintain Local Rotation Relative to Parent" },
				{ "BRS_KeepLocalSpaceRotation.ToolTip", "Keep forward direction vector relative to the parent bone." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Enum for specifying the source of a bone's rotation." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBoneRotationSource",
				"EBoneRotationSource",
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
	static UEnum* EBoneControlSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneControlSpace, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneControlSpace"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneControlSpace>()
	{
		return EBoneControlSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneControlSpace(EBoneControlSpace_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneControlSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneControlSpace_Hash() { return 1989736811U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneControlSpace"), 0, Get_Z_Construct_UEnum_Engine_EBoneControlSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BCS_WorldSpace", (int64)BCS_WorldSpace },
				{ "BCS_ComponentSpace", (int64)BCS_ComponentSpace },
				{ "BCS_ParentBoneSpace", (int64)BCS_ParentBoneSpace },
				{ "BCS_BoneSpace", (int64)BCS_BoneSpace },
				{ "BCS_MAX", (int64)BCS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BCS_BoneSpace.DisplayName", "Bone Space" },
				{ "BCS_BoneSpace.ToolTip", "Set position of bone in its own reference frame." },
				{ "BCS_ComponentSpace.DisplayName", "Component Space" },
				{ "BCS_ComponentSpace.ToolTip", "Set position of bone in SkeletalMeshComponent's reference frame." },
				{ "BCS_ParentBoneSpace.DisplayName", "Parent Bone Space" },
				{ "BCS_ParentBoneSpace.ToolTip", "Set position of bone relative to parent bone." },
				{ "BCS_WorldSpace.DisplayName", "World Space" },
				{ "BCS_WorldSpace.ToolTip", "Set absolute position of bone in world space." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Enum for controlling which reference frame a controller is applied in." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBoneControlSpace",
				"EBoneControlSpace",
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
	static UEnum* EBoneAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneAxis, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneAxis"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneAxis>()
	{
		return EBoneAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneAxis(EBoneAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneAxis_Hash() { return 82065963U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneAxis"), 0, Get_Z_Construct_UEnum_Engine_EBoneAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BA_X", (int64)BA_X },
				{ "BA_Y", (int64)BA_Y },
				{ "BA_Z", (int64)BA_Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BA_X.DisplayName", "X Axis" },
				{ "BA_Y.DisplayName", "Y Axis" },
				{ "BA_Z.DisplayName", "Z Axis" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Enum for specifying a specific axis of a bone" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBoneAxis",
				"EBoneAxis",
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
class UScriptStruct* FMarkerSyncData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMarkerSyncData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarkerSyncData, Z_Construct_UPackage__Script_Engine(), TEXT("MarkerSyncData"), sizeof(FMarkerSyncData), Get_Z_Construct_UScriptStruct_FMarkerSyncData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMarkerSyncData>()
{
	return FMarkerSyncData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMarkerSyncData(FMarkerSyncData::StaticStruct, TEXT("/Script/Engine"), TEXT("MarkerSyncData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMarkerSyncData
{
	FScriptStruct_Engine_StaticRegisterNativesFMarkerSyncData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MarkerSyncData")),new UScriptStruct::TCppStructOps<FMarkerSyncData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMarkerSyncData;
	struct Z_Construct_UScriptStruct_FMarkerSyncData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthoredSyncMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AuthoredSyncMarkers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthoredSyncMarkers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarkerSyncData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Authored Sync markers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers = { "AuthoredSyncMarkers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMarkerSyncData, AuthoredSyncMarkers), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers_Inner = { "AuthoredSyncMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimSyncMarker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMarkerSyncData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMarkerSyncData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MarkerSyncData",
		sizeof(FMarkerSyncData),
		alignof(FMarkerSyncData),
		Z_Construct_UScriptStruct_FMarkerSyncData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMarkerSyncData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MarkerSyncData"), sizeof(FMarkerSyncData), Get_Z_Construct_UScriptStruct_FMarkerSyncData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMarkerSyncData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMarkerSyncData_Hash() { return 4064272799U; }
class UScriptStruct* FAnimNotifyTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyTrack, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyTrack"), sizeof(FAnimNotifyTrack), Get_Z_Construct_UScriptStruct_FAnimNotifyTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyTrack>()
{
	return FAnimNotifyTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNotifyTrack(FAnimNotifyTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNotifyTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNotifyTrack")),new UScriptStruct::TCppStructOps<FAnimNotifyTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNotifyTrack;
	struct Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Keyframe position data for one track.  Pos(i) occurs at Time(i).  Pos.Num() always equals Time.Num()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackColor = { "TrackColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyTrack, TrackColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyTrack, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNotifyTrack",
		sizeof(FAnimNotifyTrack),
		alignof(FAnimNotifyTrack),
		Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNotifyTrack"), sizeof(FAnimNotifyTrack), Get_Z_Construct_UScriptStruct_FAnimNotifyTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyTrack_Hash() { return 3821538763U; }
class UScriptStruct* FAnimSyncMarker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSyncMarker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSyncMarker, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSyncMarker"), sizeof(FAnimSyncMarker), Get_Z_Construct_UScriptStruct_FAnimSyncMarker_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSyncMarker>()
{
	return FAnimSyncMarker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSyncMarker(FAnimSyncMarker::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSyncMarker"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSyncMarker
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSyncMarker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSyncMarker")),new UScriptStruct::TCppStructOps<FAnimSyncMarker>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSyncMarker;
	struct Z_Construct_UScriptStruct_FAnimSyncMarker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MarkerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSyncMarker>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_TrackIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "The editor track this marker sits on" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimSyncMarker, TrackIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_TrackIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_TrackIndex_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Time in seconds of this marker" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimSyncMarker, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "The name of this marker" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimSyncMarker, MarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_MarkerName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_MarkerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_TrackIndex,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_MarkerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimSyncMarker",
		sizeof(FAnimSyncMarker),
		alignof(FAnimSyncMarker),
		Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSyncMarker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSyncMarker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSyncMarker"), sizeof(FAnimSyncMarker), Get_Z_Construct_UScriptStruct_FAnimSyncMarker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSyncMarker_Hash() { return 713771147U; }
class UScriptStruct* FAnimNotifyEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyEvent, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyEvent"), sizeof(FAnimNotifyEvent), Get_Z_Construct_UScriptStruct_FAnimNotifyEvent_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyEvent>()
{
	return FAnimNotifyEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNotifyEvent(FAnimNotifyEvent::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNotifyEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyEvent
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNotifyEvent")),new UScriptStruct::TCppStructOps<FAnimNotifyEvent>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNotifyEvent;
	struct Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTriggerOnFollower_MetaData[];
#endif
		static void NewProp_bTriggerOnFollower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnFollower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTriggerOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bTriggerOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyFilterLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NotifyFilterLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyFilterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyFilterType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyTriggerChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NotifyTriggerChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageTickType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MontageTickType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConvertedFromBranchingPoint_MetaData[];
#endif
		static void NewProp_bConvertedFromBranchingPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertedFromBranchingPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NotifyStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notify_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Notify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerWeightThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerWeightThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTriggerTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTriggerTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Triggers an animation notify.  Each AnimNotifyEvent contains an AnimNotify object\nwhich has its Notify method called and passed to the animation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TrackIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "'Track' that the notify exists on, used for visual placement in editor and sorting priority in runtime" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, TrackIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TrackIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TrackIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Color of Notify in editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyColor = { "NotifyColor", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, NotifyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_MetaData[] = {
		{ "Category", "AnimNotifyTriggerSettings" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "If enabled this notify will trigger when the animation is a follower in a sync group (by default only the sync group leaders notifies trigger" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_SetBit(void* Obj)
	{
		((FAnimNotifyEvent*)Obj)->bTriggerOnFollower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower = { "bTriggerOnFollower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNotifyEvent), &Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_MetaData[] = {
		{ "Category", "AnimNotifyTriggerSettings" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "If disabled this notify will be skipped on dedicated servers" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_SetBit(void* Obj)
	{
		((FAnimNotifyEvent*)Obj)->bTriggerOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer = { "bTriggerOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNotifyEvent), &Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterLOD_MetaData[] = {
		{ "Category", "AnimNotifyTriggerSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "LOD to start filtering this notify from." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterLOD = { "NotifyFilterLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, NotifyFilterLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterLOD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterType_MetaData[] = {
		{ "Category", "AnimNotifyTriggerSettings" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Defines a method for filtering notifies (stopping them triggering) e.g. by looking at the meshes current LOD" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterType = { "NotifyFilterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, NotifyFilterType), Z_Construct_UEnum_Engine_ENotifyFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyTriggerChance_MetaData[] = {
		{ "Category", "AnimNotifyTriggerSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Defines the chance of of this notify triggering, 0 = No Chance, 1 = Always triggers" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyTriggerChance = { "NotifyTriggerChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, NotifyTriggerChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyTriggerChance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyTriggerChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_MontageTickType_MetaData[] = {
		{ "Category", "AnimNotifyEvent" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_MontageTickType = { "MontageTickType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, MontageTickType), Z_Construct_UEnum_Engine_EMontageNotifyTickType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_MontageTickType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_MontageTickType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "If TRUE, this notify has been converted from an old BranchingPoint." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_SetBit(void* Obj)
	{
		((FAnimNotifyEvent*)Obj)->bConvertedFromBranchingPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint = { "bConvertedFromBranchingPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNotifyEvent), &Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndLink_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Linkable element to use for the end handle representing a notify state duration" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndLink = { "EndLink", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, EndLink), Z_Construct_UScriptStruct_FAnimLinkableElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndLink_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyStateClass_MetaData[] = {
		{ "Category", "AnimNotifyEvent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyStateClass = { "NotifyStateClass", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, NotifyStateClass), Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyStateClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Notify_MetaData[] = {
		{ "Category", "AnimNotifyEvent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Notify = { "Notify", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, Notify), Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Notify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Notify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyName_MetaData[] = {
		{ "Category", "AnimNotifyEvent" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, NotifyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerWeightThreshold_MetaData[] = {
		{ "Category", "AnimNotifyEvent" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerWeightThreshold = { "TriggerWeightThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, TriggerWeightThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerWeightThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerWeightThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndTriggerTimeOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "An offset similar to TriggerTimeOffset but used for the end scrub handle of a notify state's duration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndTriggerTimeOffset = { "EndTriggerTimeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, EndTriggerTimeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndTriggerTimeOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndTriggerTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerTimeOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "An offset from the DisplayTime to the actual time we will trigger the notify, as we cannot always trigger it exactly at the time the user wants" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerTimeOffset = { "TriggerTimeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, TriggerTimeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerTimeOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "The user requested time for this notify" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNotifyEvent, DisplayTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_DisplayTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_DisplayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TrackIndex,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyTriggerChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_MontageTickType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Notify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerWeightThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndTriggerTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_DisplayTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimLinkableElement,
		&NewStructOps,
		"AnimNotifyEvent",
		sizeof(FAnimNotifyEvent),
		alignof(FAnimNotifyEvent),
		Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNotifyEvent"), sizeof(FAnimNotifyEvent), Get_Z_Construct_UScriptStruct_FAnimNotifyEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyEvent_Hash() { return 1086132747U; }
class UScriptStruct* FPerBoneBlendWeights::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeights_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerBoneBlendWeights, Z_Construct_UPackage__Script_Engine(), TEXT("PerBoneBlendWeights"), sizeof(FPerBoneBlendWeights), Get_Z_Construct_UScriptStruct_FPerBoneBlendWeights_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerBoneBlendWeights>()
{
	return FPerBoneBlendWeights::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerBoneBlendWeights(FPerBoneBlendWeights::StaticStruct, TEXT("/Script/Engine"), TEXT("PerBoneBlendWeights"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeights
{
	FScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeights()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerBoneBlendWeights")),new UScriptStruct::TCppStructOps<FPerBoneBlendWeights>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeights;
	struct Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneBlendWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneBlendWeights;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneBlendWeights_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerBoneBlendWeights>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights = { "BoneBlendWeights", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerBoneBlendWeights, BoneBlendWeights), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights_Inner = { "BoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerBoneBlendWeights",
		sizeof(FPerBoneBlendWeights),
		alignof(FPerBoneBlendWeights),
		Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeights()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeights_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerBoneBlendWeights"), sizeof(FPerBoneBlendWeights), Get_Z_Construct_UScriptStruct_FPerBoneBlendWeights_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeights_Hash() { return 3433204585U; }
class UScriptStruct* FPerBoneBlendWeight::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeight_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerBoneBlendWeight, Z_Construct_UPackage__Script_Engine(), TEXT("PerBoneBlendWeight"), sizeof(FPerBoneBlendWeight), Get_Z_Construct_UScriptStruct_FPerBoneBlendWeight_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerBoneBlendWeight>()
{
	return FPerBoneBlendWeight::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerBoneBlendWeight(FPerBoneBlendWeight::StaticStruct, TEXT("/Script/Engine"), TEXT("PerBoneBlendWeight"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeight
{
	FScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeight()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerBoneBlendWeight")),new UScriptStruct::TCppStructOps<FPerBoneBlendWeight>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeight;
	struct Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerBoneBlendWeight>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerBoneBlendWeight, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_BlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_SourceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Source index of the buffer." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerBoneBlendWeight, SourceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_SourceIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_SourceIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_BlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_SourceIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerBoneBlendWeight",
		sizeof(FPerBoneBlendWeight),
		alignof(FPerBoneBlendWeight),
		Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeight_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerBoneBlendWeight"), sizeof(FPerBoneBlendWeight), Get_Z_Construct_UScriptStruct_FPerBoneBlendWeight_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeight_Hash() { return 6352570U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

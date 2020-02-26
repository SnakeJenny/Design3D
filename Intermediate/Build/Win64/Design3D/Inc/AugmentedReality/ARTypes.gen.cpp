// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTypes() {}
// Cross Module References
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldMappingState();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionStatus();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARVideoFormat();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSessionStatus();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTypesDummyClass_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTypesDummyClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARCandidateImage_GetFriendlyName();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARCandidateImage_GetOrientation();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARCandidateObject_GetBoundingBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARCandidateObject_GetFriendlyName();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARCandidateObject_SetBoundingBox();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventOnARTransformUpdated_Parms
		{
			FTransform OldToNewTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldToNewTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldToNewTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::NewProp_OldToNewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::NewProp_OldToNewTransform = { "OldToNewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AugmentedReality_eventOnARTransformUpdated_Parms, OldToNewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::NewProp_OldToNewTransform_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::NewProp_OldToNewTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::NewProp_OldToNewTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "OnARTransformUpdated__DelegateSignature", sizeof(_Script_AugmentedReality_eventOnARTransformUpdated_Parms), Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventOnARTrackingStateChanged_Parms
		{
			EARTrackingState NewTrackingState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewTrackingState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewTrackingState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::NewProp_NewTrackingState = { "NewTrackingState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AugmentedReality_eventOnARTrackingStateChanged_Parms, NewTrackingState), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::NewProp_NewTrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::NewProp_NewTrackingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::NewProp_NewTrackingState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "OnARTrackingStateChanged__DelegateSignature", sizeof(_Script_AugmentedReality_eventOnARTrackingStateChanged_Parms), Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EARCandidateImageOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARCandidateImageOrientation"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARCandidateImageOrientation>()
	{
		return EARCandidateImageOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARCandidateImageOrientation(EARCandidateImageOrientation_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARCandidateImageOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Hash() { return 3985598094U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARCandidateImageOrientation"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARCandidateImageOrientation::Landscape", (int64)EARCandidateImageOrientation::Landscape },
				{ "EARCandidateImageOrientation::Portrait", (int64)EARCandidateImageOrientation::Portrait },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "ToolTip", "Tells the image detection code how to assume the image is oriented" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARCandidateImageOrientation",
				"EARCandidateImageOrientation",
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
	static UEnum* EARWorldMappingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARWorldMappingState, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARWorldMappingState"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldMappingState>()
	{
		return EARWorldMappingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARWorldMappingState(EARWorldMappingState_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARWorldMappingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Hash() { return 1591326466U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldMappingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARWorldMappingState"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARWorldMappingState::NotAvailable", (int64)EARWorldMappingState::NotAvailable },
				{ "EARWorldMappingState::StillMappingNotRelocalizable", (int64)EARWorldMappingState::StillMappingNotRelocalizable },
				{ "EARWorldMappingState::StillMappingRelocalizable", (int64)EARWorldMappingState::StillMappingRelocalizable },
				{ "EARWorldMappingState::Mapped", (int64)EARWorldMappingState::Mapped },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "Mapped.ToolTip", "World mapping has mapped the area and is fully relocalizable" },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "NotAvailable.ToolTip", "World mapping is not available" },
				{ "StillMappingNotRelocalizable.ToolTip", "World mapping is still in progress but without enough data for relocalization" },
				{ "StillMappingRelocalizable.ToolTip", "World mapping is still in progress but there is enough data captured for relocalization" },
				{ "ToolTip", "Gives feedback as to whether the AR data can be saved and relocalized or not" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARWorldMappingState",
				"EARWorldMappingState",
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
	static UEnum* EARSessionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionStatus, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionStatus"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionStatus>()
	{
		return EARSessionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARSessionStatus(EARSessionStatus_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARSessionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Hash() { return 3331952246U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARSessionStatus"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARSessionStatus::NotStarted", (int64)EARSessionStatus::NotStarted },
				{ "EARSessionStatus::Running", (int64)EARSessionStatus::Running },
				{ "EARSessionStatus::NotSupported", (int64)EARSessionStatus::NotSupported },
				{ "EARSessionStatus::FatalError", (int64)EARSessionStatus::FatalError },
				{ "EARSessionStatus::PermissionNotGranted", (int64)EARSessionStatus::PermissionNotGranted },
				{ "EARSessionStatus::UnsupportedConfiguration", (int64)EARSessionStatus::UnsupportedConfiguration },
				{ "EARSessionStatus::Other", (int64)EARSessionStatus::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FatalError.ToolTip", "The AR session encountered fatal error; the developer should call `StartARSession()` to re-start the AR subsystem." },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "NotStarted.ToolTip", "Unreal AR session has not started yet." },
				{ "NotSupported.ToolTip", "Unreal AR session failed to start due to the AR subsystem not being supported by the device." },
				{ "Other.ToolTip", "Session isn't running due to unknown reason; @see FARSessionStatus::AdditionalInfo for more information" },
				{ "PermissionNotGranted.ToolTip", "AR session failed to start because it lacks the necessary permission (likely access to the camera or the gyroscope)." },
				{ "Running.ToolTip", "Unreal AR session is running." },
				{ "ScriptName", "ARSessionStatusType" },
				{ "ToolTip", "Describes the current status of the AR session." },
				{ "UnsupportedConfiguration.ToolTip", "AR session failed to start because the configuration isn't supported." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARSessionStatus",
				"EARSessionStatus",
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
	static UEnum* EARTrackingQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingQuality, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARTrackingQuality"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingQuality>()
	{
		return EARTrackingQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARTrackingQuality(EARTrackingQuality_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARTrackingQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Hash() { return 1421392130U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARTrackingQuality"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARTrackingQuality::NotTracking", (int64)EARTrackingQuality::NotTracking },
				{ "EARTrackingQuality::OrientationOnly", (int64)EARTrackingQuality::OrientationOnly },
				{ "EARTrackingQuality::OrientationAndPosition", (int64)EARTrackingQuality::OrientationAndPosition },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "NotTracking.ToolTip", "The tracking quality is not available." },
				{ "OrientationAndPosition.ToolTip", "The tracking quality is good." },
				{ "OrientationOnly.ToolTip", "The tracking quality is limited, relying only on the device's motion." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARTrackingQuality",
				"EARTrackingQuality",
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
	static UEnum* EARLineTraceChannels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARLineTraceChannels"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLineTraceChannels>()
	{
		return EARLineTraceChannels_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARLineTraceChannels(EARLineTraceChannels_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARLineTraceChannels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Hash() { return 1268235801U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARLineTraceChannels"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARLineTraceChannels::None", (int64)EARLineTraceChannels::None },
				{ "EARLineTraceChannels::FeaturePoint", (int64)EARLineTraceChannels::FeaturePoint },
				{ "EARLineTraceChannels::GroundPlane", (int64)EARLineTraceChannels::GroundPlane },
				{ "EARLineTraceChannels::PlaneUsingExtent", (int64)EARLineTraceChannels::PlaneUsingExtent },
				{ "EARLineTraceChannels::PlaneUsingBoundaryPolygon", (int64)EARLineTraceChannels::PlaneUsingBoundaryPolygon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality|Trace Result" },
				{ "FeaturePoint.ToolTip", "Trace against points that the AR system considers significant ." },
				{ "GroundPlane.ToolTip", "Trace against estimated plane that does not have an associated tracked geometry." },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "PlaneUsingBoundaryPolygon.ToolTip", "Trace against any plane tracked geometries using the boundary polygon." },
				{ "PlaneUsingExtent.ToolTip", "Trace against any plane tracked geometries using Center and Extent." },
				{ "ToolTip", "Channels that let users select which kind of tracked geometry to trace against." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARLineTraceChannels",
				"EARLineTraceChannels",
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
	static UEnum* EARTrackingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingState, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARTrackingState"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingState>()
	{
		return EARTrackingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARTrackingState(EARTrackingState_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARTrackingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARTrackingState_Hash() { return 4127892256U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARTrackingState"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARTrackingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARTrackingState::Unknown", (int64)EARTrackingState::Unknown },
				{ "EARTrackingState::Tracking", (int64)EARTrackingState::Tracking },
				{ "EARTrackingState::NotTracking", (int64)EARTrackingState::NotTracking },
				{ "EARTrackingState::StoppedTracking", (int64)EARTrackingState::StoppedTracking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "NotTracking.ToolTip", "Currently not tracking, but may resume tracking later." },
				{ "StoppedTracking.ToolTip", "Stopped tracking forever." },
				{ "Tracking.ToolTip", "Currently tracking." },
				{ "Unknown.ToolTip", "Unknown tracking state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARTrackingState",
				"EARTrackingState",
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
class UScriptStruct* FARVideoFormat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARVideoFormat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARVideoFormat, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARVideoFormat"), sizeof(FARVideoFormat), Get_Z_Construct_UScriptStruct_FARVideoFormat_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARVideoFormat>()
{
	return FARVideoFormat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARVideoFormat(FARVideoFormat::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARVideoFormat"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARVideoFormat
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARVideoFormat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARVideoFormat")),new UScriptStruct::TCppStructOps<FARVideoFormat>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARVideoFormat;
	struct Z_Construct_UScriptStruct_FARVideoFormat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FPS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARVideoFormat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "A specific AR video format" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARVideoFormat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The desired or supported height in pixels for this video format" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARVideoFormat, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The desired or supported width in pixels for this video format" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARVideoFormat, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_FPS_MetaData[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The desired or supported number of frames per second for this video format" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARVideoFormat, FPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_FPS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_FPS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARVideoFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_FPS,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARVideoFormat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARVideoFormat",
		sizeof(FARVideoFormat),
		alignof(FARVideoFormat),
		Z_Construct_UScriptStruct_FARVideoFormat_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FARVideoFormat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARVideoFormat_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FARVideoFormat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARVideoFormat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARVideoFormat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARVideoFormat"), sizeof(FARVideoFormat), Get_Z_Construct_UScriptStruct_FARVideoFormat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARVideoFormat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARVideoFormat_Hash() { return 2054112267U; }
class UScriptStruct* FARSessionStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARSessionStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARSessionStatus, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARSessionStatus"), sizeof(FARSessionStatus), Get_Z_Construct_UScriptStruct_FARSessionStatus_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARSessionStatus>()
{
	return FARSessionStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARSessionStatus(FARSessionStatus::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARSessionStatus"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARSessionStatus
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARSessionStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARSessionStatus")),new UScriptStruct::TCppStructOps<FARSessionStatus>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARSessionStatus;
	struct Z_Construct_UScriptStruct_FARSessionStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The current state of the AR subsystem including an optional explanation string." },
	};
#endif
	void* Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARSessionStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The current status of the AR subsystem." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARSessionStatus, Status), Z_Construct_UEnum_AugmentedReality_EARSessionStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_AdditionalInfo_MetaData[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Optional information about the current status of the system." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_AdditionalInfo = { "AdditionalInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARSessionStatus, AdditionalInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_AdditionalInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_AdditionalInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARSessionStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_AdditionalInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARSessionStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARSessionStatus",
		sizeof(FARSessionStatus),
		alignof(FARSessionStatus),
		Z_Construct_UScriptStruct_FARSessionStatus_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionStatus_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARSessionStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARSessionStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARSessionStatus"), sizeof(FARSessionStatus), Get_Z_Construct_UScriptStruct_FARSessionStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARSessionStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARSessionStatus_Hash() { return 4192192688U; }
	void UARTypesDummyClass::StaticRegisterNativesUARTypesDummyClass()
	{
	}
	UClass* Z_Construct_UClass_UARTypesDummyClass_NoRegister()
	{
		return UARTypesDummyClass::StaticClass();
	}
	struct Z_Construct_UClass_UARTypesDummyClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTypesDummyClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTypesDummyClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARTypes.h" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTypesDummyClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTypesDummyClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTypesDummyClass_Statics::ClassParams = {
		&UARTypesDummyClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTypesDummyClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARTypesDummyClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTypesDummyClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTypesDummyClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTypesDummyClass, 1540382919);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTypesDummyClass>()
	{
		return UARTypesDummyClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTypesDummyClass(Z_Construct_UClass_UARTypesDummyClass, &UARTypesDummyClass::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTypesDummyClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTypesDummyClass);
	void UARCandidateImage::StaticRegisterNativesUARCandidateImage()
	{
		UClass* Class = UARCandidateImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCandidateTexture", &UARCandidateImage::execGetCandidateTexture },
			{ "GetFriendlyName", &UARCandidateImage::execGetFriendlyName },
			{ "GetOrientation", &UARCandidateImage::execGetOrientation },
			{ "GetPhysicalHeight", &UARCandidateImage::execGetPhysicalHeight },
			{ "GetPhysicalWidth", &UARCandidateImage::execGetPhysicalWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics
	{
		struct ARCandidateImage_eventGetCandidateTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCandidateImage_eventGetCandidateTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see CandidateTexture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateImage, nullptr, "GetCandidateTexture", sizeof(ARCandidateImage_eventGetCandidateTexture_Parms), Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics
	{
		struct ARCandidateImage_eventGetFriendlyName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCandidateImage_eventGetFriendlyName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see FriendlyName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateImage, nullptr, "GetFriendlyName", sizeof(ARCandidateImage_eventGetFriendlyName_Parms), Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateImage_GetFriendlyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics
	{
		struct ARCandidateImage_eventGetOrientation_Parms
		{
			EARCandidateImageOrientation ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCandidateImage_eventGetOrientation_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see Orientation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateImage, nullptr, "GetOrientation", sizeof(ARCandidateImage_eventGetOrientation_Parms), Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateImage_GetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics
	{
		struct ARCandidateImage_eventGetPhysicalHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCandidateImage_eventGetPhysicalHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see Height" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateImage, nullptr, "GetPhysicalHeight", sizeof(ARCandidateImage_eventGetPhysicalHeight_Parms), Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics
	{
		struct ARCandidateImage_eventGetPhysicalWidth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCandidateImage_eventGetPhysicalWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see Width" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateImage, nullptr, "GetPhysicalWidth", sizeof(ARCandidateImage_eventGetPhysicalWidth_Parms), Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARCandidateImage_NoRegister()
	{
		return UARCandidateImage::StaticClass();
	}
	struct Z_Construct_UClass_UARCandidateImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CandidateTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandidateTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARCandidateImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARCandidateImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture, "GetCandidateTexture" }, // 1489561090
		{ &Z_Construct_UFunction_UARCandidateImage_GetFriendlyName, "GetFriendlyName" }, // 63540900
		{ &Z_Construct_UFunction_UARCandidateImage_GetOrientation, "GetOrientation" }, // 1503069963
		{ &Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight, "GetPhysicalHeight" }, // 3383197042
		{ &Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth, "GetPhysicalWidth" }, // 2721037640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTypes.h" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "An asset that points to an image to be detected in a scene and provides the size of the object in real life" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The orientation to treat the candidate image as. Ignored in ARCore" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCandidateImage, Orientation), Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation, METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The physical height in centimeters of the object that this candidate image represents. Ignored in ARCore" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCandidateImage, Height), METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The physical width in centimeters of the object that this candidate image represents" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCandidateImage, Width), METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The friendly name to report back when the image is detected in scenes" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCandidateImage, FriendlyName), METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_FriendlyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::NewProp_CandidateTexture_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The image to detect in scenes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_CandidateTexture = { "CandidateTexture", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCandidateImage, CandidateTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_CandidateTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_CandidateTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARCandidateImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_CandidateTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARCandidateImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARCandidateImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARCandidateImage_Statics::ClassParams = {
		&UARCandidateImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARCandidateImage_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARCandidateImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARCandidateImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARCandidateImage, 4276358102);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARCandidateImage>()
	{
		return UARCandidateImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARCandidateImage(Z_Construct_UClass_UARCandidateImage, &UARCandidateImage::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARCandidateImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARCandidateImage);
	void UARCandidateObject::StaticRegisterNativesUARCandidateObject()
	{
		UClass* Class = UARCandidateObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundingBox", &UARCandidateObject::execGetBoundingBox },
			{ "GetCandidateObjectData", &UARCandidateObject::execGetCandidateObjectData },
			{ "GetFriendlyName", &UARCandidateObject::execGetFriendlyName },
			{ "SetBoundingBox", &UARCandidateObject::execSetBoundingBox },
			{ "SetCandidateObjectData", &UARCandidateObject::execSetCandidateObjectData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics
	{
		struct ARCandidateObject_eventGetBoundingBox_Parms
		{
			FBox ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCandidateObject_eventGetBoundingBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see BoundingBox" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "GetBoundingBox", sizeof(ARCandidateObject_eventGetBoundingBox_Parms), Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_GetBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics
	{
		struct ARCandidateObject_eventGetCandidateObjectData_Parms
		{
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCandidateObject_eventGetCandidateObjectData_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see CandidateObjectData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "GetCandidateObjectData", sizeof(ARCandidateObject_eventGetCandidateObjectData_Parms), Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics
	{
		struct ARCandidateObject_eventGetFriendlyName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCandidateObject_eventGetFriendlyName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see FriendlyName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "GetFriendlyName", sizeof(ARCandidateObject_eventGetFriendlyName_Parms), Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_GetFriendlyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics
	{
		struct ARCandidateObject_eventSetBoundingBox_Parms
		{
			FBox InBoundingBox;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBoundingBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::NewProp_InBoundingBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::NewProp_InBoundingBox = { "InBoundingBox", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCandidateObject_eventSetBoundingBox_Parms, InBoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::NewProp_InBoundingBox_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::NewProp_InBoundingBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::NewProp_InBoundingBox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "SetBoundingBox", sizeof(ARCandidateObject_eventSetBoundingBox_Parms), Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_SetBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics
	{
		struct ARCandidateObject_eventSetCandidateObjectData_Parms
		{
			TArray<uint8> InCandidateObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCandidateObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCandidateObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCandidateObject_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject = { "InCandidateObject", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCandidateObject_eventSetCandidateObjectData_Parms, InCandidateObject), METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject_Inner = { "InCandidateObject", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "SetCandidateObjectData", sizeof(ARCandidateObject_eventSetCandidateObjectData_Parms), Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARCandidateObject_NoRegister()
	{
		return UARCandidateObject::StaticClass();
	}
	struct Z_Construct_UClass_UARCandidateObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CandidateObjectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CandidateObjectData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CandidateObjectData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARCandidateObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARCandidateObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARCandidateObject_GetBoundingBox, "GetBoundingBox" }, // 1115817047
		{ &Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData, "GetCandidateObjectData" }, // 3679116258
		{ &Z_Construct_UFunction_UARCandidateObject_GetFriendlyName, "GetFriendlyName" }, // 1844140492
		{ &Z_Construct_UFunction_UARCandidateObject_SetBoundingBox, "SetBoundingBox" }, // 3702345965
		{ &Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData, "SetCandidateObjectData" }, // 1388814157
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTypes.h" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "An asset that points to an object to be detected in a scene" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateObject_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The physical bounds in centimeters of the object that this candidate object represents" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCandidateObject_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCandidateObject, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_BoundingBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_BoundingBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateObject_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "AR Candidate Object" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The friendly name to report back when the object is detected in scenes" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UARCandidateObject_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCandidateObject, FriendlyName), METADATA_PARAMS(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_FriendlyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData_MetaData[] = {
		{ "Category", "AR Candidate Object" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The object to detect in scenes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData = { "CandidateObjectData", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCandidateObject, CandidateObjectData), METADATA_PARAMS(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData_Inner = { "CandidateObjectData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARCandidateObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateObject_Statics::NewProp_BoundingBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateObject_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARCandidateObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARCandidateObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARCandidateObject_Statics::ClassParams = {
		&UARCandidateObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARCandidateObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARCandidateObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARCandidateObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARCandidateObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARCandidateObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARCandidateObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARCandidateObject, 1009722380);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARCandidateObject>()
	{
		return UARCandidateObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARCandidateObject(Z_Construct_UClass_UARCandidateObject, &UARCandidateObject::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARCandidateObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARCandidateObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

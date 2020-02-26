// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/Public/VREditorInteractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorInteractor() {}
// Cross Module References
	VREDITOR_API UEnum* Z_Construct_UEnum_VREditor_ETouchSwipeDirection();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UEnum* Z_Construct_UEnum_VREditor_EControllerType();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetControllerSide();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetControllerType();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetLaserStart();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_Init();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_SetControllerType();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_SetupComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	static UEnum* ETouchSwipeDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VREditor_ETouchSwipeDirection, Z_Construct_UPackage__Script_VREditor(), TEXT("ETouchSwipeDirection"));
		}
		return Singleton;
	}
	template<> VREDITOR_API UEnum* StaticEnum<ETouchSwipeDirection>()
	{
		return ETouchSwipeDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETouchSwipeDirection(ETouchSwipeDirection_StaticEnum, TEXT("/Script/VREditor"), TEXT("ETouchSwipeDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Hash() { return 1664668701U; }
	UEnum* Z_Construct_UEnum_VREditor_ETouchSwipeDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VREditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETouchSwipeDirection"), 0, Get_Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "Left", (int64)Left },
				{ "Right", (int64)Right },
				{ "Up", (int64)Up },
				{ "Down", (int64)Down },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
				{ "ToolTip", "Directions the trackpad can be swiped to" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VREditor,
				nullptr,
				"ETouchSwipeDirection",
				"ETouchSwipeDirection",
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
	static UEnum* EControllerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VREditor_EControllerType, Z_Construct_UPackage__Script_VREditor(), TEXT("EControllerType"));
		}
		return Singleton;
	}
	template<> VREDITOR_API UEnum* StaticEnum<EControllerType>()
	{
		return EControllerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EControllerType(EControllerType_StaticEnum, TEXT("/Script/VREditor"), TEXT("EControllerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VREditor_EControllerType_Hash() { return 2627243217U; }
	UEnum* Z_Construct_UEnum_VREditor_EControllerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VREditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EControllerType"), 0, Get_Z_Construct_UEnum_VREditor_EControllerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EControllerType::Laser", (int64)EControllerType::Laser },
				{ "EControllerType::AssistingLaser", (int64)EControllerType::AssistingLaser },
				{ "EControllerType::UI", (int64)EControllerType::UI },
				{ "EControllerType::Navigation", (int64)EControllerType::Navigation },
				{ "EControllerType::Unknown", (int64)EControllerType::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VREditor,
				nullptr,
				"EControllerType",
				"EControllerType",
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
	static FName NAME_UVREditorInteractor_GetSlideDelta = FName(TEXT("GetSlideDelta"));
	float UVREditorInteractor::GetSlideDelta() const
	{
		VREditorInteractor_eventGetSlideDelta_Parms Parms;
		const_cast<UVREditorInteractor*>(this)->ProcessEvent(FindFunctionChecked(NAME_UVREditorInteractor_GetSlideDelta),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVREditorInteractor_Init = FName(TEXT("Init"));
	void UVREditorInteractor::Init(UVREditorMode* InVRMode)
	{
		VREditorInteractor_eventInit_Parms Parms;
		Parms.InVRMode=InVRMode;
		ProcessEvent(FindFunctionChecked(NAME_UVREditorInteractor_Init),&Parms);
	}
	static FName NAME_UVREditorInteractor_SetupComponent = FName(TEXT("SetupComponent"));
	void UVREditorInteractor::SetupComponent(AActor* OwningActor)
	{
		VREditorInteractor_eventSetupComponent_Parms Parms;
		Parms.OwningActor=OwningActor;
		ProcessEvent(FindFunctionChecked(NAME_UVREditorInteractor_SetupComponent),&Parms);
	}
	void UVREditorInteractor::StaticRegisterNativesUVREditorInteractor()
	{
		UClass* Class = UVREditorInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerSide", &UVREditorInteractor::execGetControllerSide },
			{ "GetControllerType", &UVREditorInteractor::execGetControllerType },
			{ "GetHMDDeviceType", &UVREditorInteractor::execGetHMDDeviceType },
			{ "GetLaserEnd", &UVREditorInteractor::execGetLaserEnd },
			{ "GetLaserStart", &UVREditorInteractor::execGetLaserStart },
			{ "GetLastTrackpadPosition", &UVREditorInteractor::execGetLastTrackpadPosition },
			{ "GetMotionControllerComponent", &UVREditorInteractor::execGetMotionControllerComponent },
			{ "GetSelectAndMoveTriggerValue", &UVREditorInteractor::execGetSelectAndMoveTriggerValue },
			{ "GetSlideDelta", &UVREditorInteractor::execGetSlideDelta },
			{ "GetTeleportActor", &UVREditorInteractor::execGetTeleportActor },
			{ "GetTrackpadPosition", &UVREditorInteractor::execGetTrackpadPosition },
			{ "Init", &UVREditorInteractor::execInit },
			{ "IsClickingOnUI", &UVREditorInteractor::execIsClickingOnUI },
			{ "IsHoveringOverUI", &UVREditorInteractor::execIsHoveringOverUI },
			{ "IsTouchingTrackpad", &UVREditorInteractor::execIsTouchingTrackpad },
			{ "SetControllerHandSide", &UVREditorInteractor::execSetControllerHandSide },
			{ "SetControllerType", &UVREditorInteractor::execSetControllerType },
			{ "SetForceLaserColor", &UVREditorInteractor::execSetForceLaserColor },
			{ "SetForceShowLaser", &UVREditorInteractor::execSetForceShowLaser },
			{ "SetupComponent", &UVREditorInteractor::execSetupComponent },
			{ "TryOverrideControllerType", &UVREditorInteractor::execTryOverrideControllerType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics
	{
		struct VREditorInteractor_eventGetControllerSide_Parms
		{
			EControllerHand ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetControllerSide_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Get the side of the controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetControllerSide", sizeof(VREditorInteractor_eventGetControllerSide_Parms), Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetControllerSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics
	{
		struct VREditorInteractor_eventGetControllerType_Parms
		{
			EControllerType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetControllerType_Parms, ReturnValue), Z_Construct_UEnum_VREditor_EControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Returns what controller type this is for asymmetric control schemes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetControllerType", sizeof(VREditorInteractor_eventGetControllerType_Parms), Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics
	{
		struct VREditorInteractor_eventGetHMDDeviceType_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetHMDDeviceType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "@return Returns the type of HMD we're dealing with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetHMDDeviceType", sizeof(VREditorInteractor_eventGetHMDDeviceType_Parms), Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics
	{
		struct VREditorInteractor_eventGetLaserEnd_Parms
		{
			FVector ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetLaserEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetLaserEnd", sizeof(VREditorInteractor_eventGetLaserEnd_Parms), Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics
	{
		struct VREditorInteractor_eventGetLaserStart_Parms
		{
			FVector ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetLaserStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Getters and setters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetLaserStart", sizeof(VREditorInteractor_eventGetLaserStart_Parms), Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetLaserStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics
	{
		struct VREditorInteractor_eventGetLastTrackpadPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetLastTrackpadPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Get the last position of the trackpad or analog stick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetLastTrackpadPosition", sizeof(VREditorInteractor_eventGetLastTrackpadPosition_Parms), Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics
	{
		struct VREditorInteractor_eventGetMotionControllerComponent_Parms
		{
			UMotionControllerComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetMotionControllerComponent_Parms, ReturnValue), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Get the motioncontroller component of this interactor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetMotionControllerComponent", sizeof(VREditorInteractor_eventGetMotionControllerComponent_Parms), Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics
	{
		struct VREditorInteractor_eventGetSelectAndMoveTriggerValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetSelectAndMoveTriggerValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Gets the trigger value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetSelectAndMoveTriggerValue", sizeof(VREditorInteractor_eventGetSelectAndMoveTriggerValue_Parms), Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetSlideDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Returns the slide delta for pushing and pulling objects. Needs to be implemented by derived classes (e.g. touchpad for vive controller or scrollweel for mouse )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetSlideDelta", sizeof(VREditorInteractor_eventGetSlideDelta_Parms), Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics
	{
		struct VREditorInteractor_eventGetTeleportActor_Parms
		{
			AVREditorTeleporter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetTeleportActor_Parms, ReturnValue), Z_Construct_UClass_AVREditorTeleporter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetTeleportActor", sizeof(VREditorInteractor_eventGetTeleportActor_Parms), Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics
	{
		struct VREditorInteractor_eventGetTrackpadPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventGetTrackpadPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Get the current position of the trackpad or analog stick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetTrackpadPosition", sizeof(VREditorInteractor_eventGetTrackpadPosition_Parms), Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_Init_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InVRMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVREditorInteractor_Init_Statics::NewProp_InVRMode = { "InVRMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventInit_Parms, InVRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_Init_Statics::NewProp_InVRMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_Init_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Initialize default values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "Init", sizeof(VREditorInteractor_eventInit_Parms), Z_Construct_UFunction_UVREditorInteractor_Init_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_Init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics
	{
		struct VREditorInteractor_eventIsClickingOnUI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorInteractor_eventIsClickingOnUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREditorInteractor_eventIsClickingOnUI_Parms), &Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Gets if the interactor is clicking on any UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "IsClickingOnUI", sizeof(VREditorInteractor_eventIsClickingOnUI_Parms), Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics
	{
		struct VREditorInteractor_eventIsHoveringOverUI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorInteractor_eventIsHoveringOverUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREditorInteractor_eventIsHoveringOverUI_Parms), &Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Gets if this interactor is hovering over UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "IsHoveringOverUI", sizeof(VREditorInteractor_eventIsHoveringOverUI_Parms), Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics
	{
		struct VREditorInteractor_eventIsTouchingTrackpad_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorInteractor_eventIsTouchingTrackpad_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREditorInteractor_eventIsTouchingTrackpad_Parms), &Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Check if the touchpad is currently touched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "IsTouchingTrackpad", sizeof(VREditorInteractor_eventIsTouchingTrackpad_Parms), Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics
	{
		struct VREditorInteractor_eventSetControllerHandSide_Parms
		{
			FName InControllerHandSide;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InControllerHandSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InControllerHandSide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::NewProp_InControllerHandSide_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::NewProp_InControllerHandSide = { "InControllerHandSide", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventSetControllerHandSide_Parms, InControllerHandSide), METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::NewProp_InControllerHandSide_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::NewProp_InControllerHandSide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::NewProp_InControllerHandSide,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Sets the EControllerHand for this motioncontroller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "SetControllerHandSide", sizeof(VREditorInteractor_eventSetControllerHandSide_Parms), Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics
	{
		struct VREditorInteractor_eventSetControllerType_Parms
		{
			EControllerType InControllerType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InControllerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InControllerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InControllerType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType = { "InControllerType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventSetControllerType_Parms, InControllerType), Z_Construct_UEnum_VREditor_EControllerType, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Set what controller type this is for asymmetric control schemes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "SetControllerType", sizeof(VREditorInteractor_eventSetControllerType_Parms), Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_SetControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics
	{
		struct VREditorInteractor_eventSetForceLaserColor_Parms
		{
			FLinearColor InColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventSetForceLaserColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::NewProp_InColor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::NewProp_InColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Next frame this will be used as color for the laser" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "SetForceLaserColor", sizeof(VREditorInteractor_eventSetForceLaserColor_Parms), Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics
	{
		struct VREditorInteractor_eventSetForceShowLaser_Parms
		{
			bool bInForceShow;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInForceShow_MetaData[];
#endif
		static void NewProp_bInForceShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInForceShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow_SetBit(void* Obj)
	{
		((VREditorInteractor_eventSetForceShowLaser_Parms*)Obj)->bInForceShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow = { "bInForceShow", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREditorInteractor_eventSetForceShowLaser_Parms), &Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Set if we want to force to show the laser" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "SetForceShowLaser", sizeof(VREditorInteractor_eventSetForceShowLaser_Parms), Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventSetupComponent_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Sets up all components" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "SetupComponent", sizeof(VREditorInteractor_eventSetupComponent_Parms), Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_SetupComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics
	{
		struct VREditorInteractor_eventTryOverrideControllerType_Parms
		{
			EControllerType InControllerType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InControllerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InControllerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InControllerType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorInteractor_eventTryOverrideControllerType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREditorInteractor_eventTryOverrideControllerType_Parms), &Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType = { "InControllerType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorInteractor_eventTryOverrideControllerType_Parms, InControllerType), Z_Construct_UEnum_VREditor_EControllerType, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Temporary set what controller type this is for asymmetric control schemes.\nYou can't override the controller type when there's already an override.\nRemove the temporary controller type with EControllerType::Unknown\n@return true if the controller type was changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "TryOverrideControllerType", sizeof(VREditorInteractor_eventTryOverrideControllerType_Parms), Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister()
	{
		return UVREditorInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerMotionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerMotionSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideControllerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OverrideControllerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverrideControllerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMeshMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandMeshMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverPointLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoverPointLightComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoverMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentLaserPointerMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentLaserPointerMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserPointerMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserPointerMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserSplineMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaserSplineMeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserSplineMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserSplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionControllerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionControllerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVREditorInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVREditorInteractor_GetControllerSide, "GetControllerSide" }, // 2138292898
		{ &Z_Construct_UFunction_UVREditorInteractor_GetControllerType, "GetControllerType" }, // 1761138541
		{ &Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType, "GetHMDDeviceType" }, // 896235377
		{ &Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd, "GetLaserEnd" }, // 2471773679
		{ &Z_Construct_UFunction_UVREditorInteractor_GetLaserStart, "GetLaserStart" }, // 1380715793
		{ &Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition, "GetLastTrackpadPosition" }, // 1367638418
		{ &Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent, "GetMotionControllerComponent" }, // 4113188657
		{ &Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue, "GetSelectAndMoveTriggerValue" }, // 2288636227
		{ &Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta, "GetSlideDelta" }, // 2599282905
		{ &Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor, "GetTeleportActor" }, // 195005828
		{ &Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition, "GetTrackpadPosition" }, // 965450799
		{ &Z_Construct_UFunction_UVREditorInteractor_Init, "Init" }, // 1421299001
		{ &Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI, "IsClickingOnUI" }, // 3896716952
		{ &Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI, "IsHoveringOverUI" }, // 56622422
		{ &Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad, "IsTouchingTrackpad" }, // 488104623
		{ &Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide, "SetControllerHandSide" }, // 1736816558
		{ &Z_Construct_UFunction_UVREditorInteractor_SetControllerType, "SetControllerType" }, // 1632756559
		{ &Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor, "SetForceLaserColor" }, // 3085426949
		{ &Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser, "SetForceShowLaser" }, // 396531327
		{ &Z_Construct_UFunction_UVREditorInteractor_SetupComponent, "SetupComponent" }, // 3017747484
		{ &Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType, "TryOverrideControllerType" }, // 814824276
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VREditorInteractor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "VREditor default interactor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_VRMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "The mode that owns this interactor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_VRMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_VRMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerMotionSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Right or left hand" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerMotionSource = { "ControllerMotionSource", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, ControllerMotionSource), METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerMotionSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerMotionSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "What was our previous controller type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType = { "OverrideControllerType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, OverrideControllerType), Z_Construct_UEnum_VREditor_EControllerType, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "For asymmetrical systems - what type of controller this is" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, ControllerType), Z_Construct_UEnum_VREditor_EControllerType, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "MID for hand mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshMID = { "HandMeshMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, HandMeshMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverPointLightComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Hover point light" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverPointLightComponent = { "HoverPointLightComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, HoverPointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverPointLightComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverPointLightComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Hover impact indicator mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverMeshComponent = { "HoverMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, HoverMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_TranslucentLaserPointerMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "MID for laser pointer material (translucent parts)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_TranslucentLaserPointerMID = { "TranslucentLaserPointerMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, TranslucentLaserPointerMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_TranslucentLaserPointerMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_TranslucentLaserPointerMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserPointerMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "MID for laser pointer material (opaque parts)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserPointerMID = { "LaserPointerMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, LaserPointerMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserPointerMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserPointerMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Spline meshes for curved laser" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents = { "LaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, LaserSplineMeshComponents), METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents_Inner = { "LaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Spline for this hand's laser pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineComponent = { "LaserSplineComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, LaserSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Mesh for this hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshComponent = { "HandMeshComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, HandMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_MotionControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Motion controller component which handles late-frame transform updates of all parented sub-components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_MotionControllerComponent = { "MotionControllerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorInteractor, MotionControllerComponent), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_MotionControllerComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_MotionControllerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_VRMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerMotionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverPointLightComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_TranslucentLaserPointerMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserPointerMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_MotionControllerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVREditorInteractor_Statics::ClassParams = {
		&UVREditorInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVREditorInteractor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVREditorInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVREditorInteractor, 4265478536);
	template<> VREDITOR_API UClass* StaticClass<UVREditorInteractor>()
	{
		return UVREditorInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVREditorInteractor(Z_Construct_UClass_UVREditorInteractor, &UVREditorInteractor::StaticClass, TEXT("/Script/VREditor"), TEXT("UVREditorInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorInteractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

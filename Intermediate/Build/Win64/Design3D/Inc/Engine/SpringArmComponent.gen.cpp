// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/SpringArmComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringArmComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_USpringArmComponent_GetTargetRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	void USpringArmComponent::StaticRegisterNativesUSpringArmComponent()
	{
		UClass* Class = USpringArmComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetRotation", &USpringArmComponent::execGetTargetRotation },
			{ "GetUnfixedCameraPosition", &USpringArmComponent::execGetUnfixedCameraPosition },
			{ "IsCollisionFixApplied", &USpringArmComponent::execIsCollisionFixApplied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics
	{
		struct SpringArmComponent_eventGetTargetRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpringArmComponent_eventGetTargetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Get the target rotation we inherit, used as the base target for the boom rotation.\nThis is derived from attachment to our parent and considering the UsePawnControlRotation and absolute rotation flags." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpringArmComponent, nullptr, "GetTargetRotation", sizeof(SpringArmComponent_eventGetTargetRotation_Parms), Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpringArmComponent_GetTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics
	{
		struct SpringArmComponent_eventGetUnfixedCameraPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpringArmComponent_eventGetUnfixedCameraPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraCollision" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Get the position where the camera should be without applying the Collision Test displacement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpringArmComponent, nullptr, "GetUnfixedCameraPosition", sizeof(SpringArmComponent_eventGetUnfixedCameraPosition_Parms), Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics
	{
		struct SpringArmComponent_eventIsCollisionFixApplied_Parms
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
	void Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpringArmComponent_eventIsCollisionFixApplied_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpringArmComponent_eventIsCollisionFixApplied_Parms), &Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraCollision" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Is the Collision Test displacement being applied?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpringArmComponent, nullptr, "IsCollisionFixApplied", sizeof(SpringArmComponent_eventIsCollisionFixApplied_Parms), Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpringArmComponent_NoRegister()
	{
		return USpringArmComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpringArmComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLagMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraLagMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLagMaxTimeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraLagMaxTimeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRotationLagSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraRotationLagSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLagMarkers_MetaData[];
#endif
		static void NewProp_bDrawDebugLagMarkers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLagMarkers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCameraLagSubstepping_MetaData[];
#endif
		static void NewProp_bUseCameraLagSubstepping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCameraLagSubstepping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraRotationLag_MetaData[];
#endif
		static void NewProp_bEnableCameraRotationLag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraRotationLag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLag_MetaData[];
#endif
		static void NewProp_bEnableCameraLag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritRoll_MetaData[];
#endif
		static void NewProp_bInheritRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritYaw_MetaData[];
#endif
		static void NewProp_bInheritYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritPitch_MetaData[];
#endif
		static void NewProp_bInheritPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[];
#endif
		static void NewProp_bUsePawnControlRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoCollisionTest_MetaData[];
#endif
		static void NewProp_bDoCollisionTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCollisionTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProbeChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProbeSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpringArmComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpringArmComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpringArmComponent_GetTargetRotation, "GetTargetRotation" }, // 3452360713
		{ &Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition, "GetUnfixedCameraPosition" }, // 201806945
		{ &Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied, "IsCollisionFixApplied" }, // 1394459312
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "GameFramework/SpringArmComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "This component tries to maintain its children at a fixed distance from the parent,\nbut will retract the children if there is a collision, and spring back when there is no collision.\n\nExample: Use as a 'camera boom' to keep the follow camera for a player from colliding into the world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxDistance_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bEnableCameraLag" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Max distance the camera target may lag behind the current location. If set to zero, no max distance is enforced." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxDistance = { "CameraLagMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpringArmComponent, CameraLagMaxDistance), METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxTimeStep_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.005" },
		{ "editcondition", "bUseCameraLagSubstepping" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Max time step used when sub-stepping camera lag." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0.005" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxTimeStep = { "CameraLagMaxTimeStep", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpringArmComponent, CameraLagMaxTimeStep), METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxTimeStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxTimeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraRotationLagSpeed_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bEnableCameraRotationLag" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If bEnableCameraRotationLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag)." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraRotationLagSpeed = { "CameraRotationLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpringArmComponent, CameraRotationLagSpeed), METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraRotationLagSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraRotationLagSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagSpeed_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bEnableCameraLag" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If bEnableCameraLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag)." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagSpeed = { "CameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpringArmComponent, CameraLagSpeed), METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers_MetaData[] = {
		{ "Category", "Lag" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If true and camera location lag is enabled, draws markers at the camera target (in green) and the lagged position (in yellow).\nA line is drawn between the two locations, in green normally but in red if the distance to the lag target has been clamped (by CameraLagMaxDistance)." },
	};
#endif
	void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers_SetBit(void* Obj)
	{
		((USpringArmComponent*)Obj)->bDrawDebugLagMarkers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers = { "bDrawDebugLagMarkers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping_MetaData[] = {
		{ "Category", "Lag" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If bUseCameraLagSubstepping is true, sub-step camera damping so that it handles fluctuating frame rates well (though this comes at a cost).\n@see CameraLagMaxTimeStep" },
	};
#endif
	void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping_SetBit(void* Obj)
	{
		((USpringArmComponent*)Obj)->bUseCameraLagSubstepping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping = { "bUseCameraLagSubstepping", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag_MetaData[] = {
		{ "Category", "Lag" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If true, camera lags behind target rotation to smooth its movement.\n@see CameraRotationLagSpeed" },
	};
#endif
	void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag_SetBit(void* Obj)
	{
		((USpringArmComponent*)Obj)->bEnableCameraRotationLag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag = { "bEnableCameraRotationLag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag_MetaData[] = {
		{ "Category", "Lag" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If true, camera lags behind target position to smooth its movement.\n@see CameraLagSpeed" },
	};
#endif
	void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag_SetBit(void* Obj)
	{
		((USpringArmComponent*)Obj)->bEnableCameraLag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag = { "bEnableCameraLag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Should we inherit roll from parent component. Does nothing if using Absolute Rotation." },
	};
#endif
	void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll_SetBit(void* Obj)
	{
		((USpringArmComponent*)Obj)->bInheritRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll = { "bInheritRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Should we inherit yaw from parent component. Does nothing if using Absolute Rotation." },
	};
#endif
	void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw_SetBit(void* Obj)
	{
		((USpringArmComponent*)Obj)->bInheritYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw = { "bInheritYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Should we inherit pitch from parent component. Does nothing if using Absolute Rotation." },
	};
#endif
	void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch_SetBit(void* Obj)
	{
		((USpringArmComponent*)Obj)->bInheritPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch = { "bInheritPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If this component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\nWhen disabled, the component will revert to using the stored RelativeRotation of the component.\nNote that this component itself does not rotate, but instead maintains its relative rotation to its parent as normal,\nand just repositions and rotates its children as desired by the inherited rotation settings. Use GetTargetRotation()\nif you want the rotation target based on all the settings (UsePawnControlRotation, InheritPitch, etc).\n\n@see GetTargetRotation(), APawn::GetViewRotation()" },
	};
#endif
	void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation_SetBit(void* Obj)
	{
		((USpringArmComponent*)Obj)->bUsePawnControlRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation = { "bUsePawnControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If true, do a collision test using ProbeChannel and ProbeSize to prevent camera clipping into level." },
	};
#endif
	void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest_SetBit(void* Obj)
	{
		((USpringArmComponent*)Obj)->bDoCollisionTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest = { "bDoCollisionTest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeChannel_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "editcondition", "bDoCollisionTest" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Collision channel of the query probe (defaults to ECC_Camera)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeChannel = { "ProbeChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpringArmComponent, ProbeChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeSize_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "editcondition", "bDoCollisionTest" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "How big should the query probe sphere be (in unreal units)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeSize = { "ProbeSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpringArmComponent, ProbeSize), METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Offset at start of spring, applied in world space. Use this if you want a world-space offset from the parent component instead of the usual relative-space offset." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpringArmComponent, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_SocketOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "offset at end of spring arm; use this instead of the relative offset of the attached component to ensure the line trace works as desired" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_SocketOffset = { "SocketOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpringArmComponent, SocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_SocketOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_SocketOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Natural length of the spring arm when there are no collisions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpringArmComponent, TargetArmLength), METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetArmLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetArmLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpringArmComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxTimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraRotationLagSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_SocketOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetArmLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpringArmComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpringArmComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpringArmComponent_Statics::ClassParams = {
		&USpringArmComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpringArmComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpringArmComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpringArmComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpringArmComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpringArmComponent, 1426885962);
	template<> ENGINE_API UClass* StaticClass<USpringArmComponent>()
	{
		return USpringArmComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpringArmComponent(Z_Construct_UClass_USpringArmComponent, &USpringArmComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USpringArmComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpringArmComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

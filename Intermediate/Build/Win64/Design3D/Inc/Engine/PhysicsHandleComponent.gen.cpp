// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsHandleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsHandleComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation();
// End Cross Module References
	void UPhysicsHandleComponent::StaticRegisterNativesUPhysicsHandleComponent()
	{
		UClass* Class = UPhysicsHandleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGrabbedComponent", &UPhysicsHandleComponent::execGetGrabbedComponent },
			{ "GetTargetLocationAndRotation", &UPhysicsHandleComponent::execGetTargetLocationAndRotation },
			{ "GrabComponent", &UPhysicsHandleComponent::execGrabComponent },
			{ "GrabComponentAtLocation", &UPhysicsHandleComponent::execGrabComponentAtLocation },
			{ "GrabComponentAtLocationWithRotation", &UPhysicsHandleComponent::execGrabComponentAtLocationWithRotation },
			{ "ReleaseComponent", &UPhysicsHandleComponent::execReleaseComponent },
			{ "SetAngularDamping", &UPhysicsHandleComponent::execSetAngularDamping },
			{ "SetAngularStiffness", &UPhysicsHandleComponent::execSetAngularStiffness },
			{ "SetInterpolationSpeed", &UPhysicsHandleComponent::execSetInterpolationSpeed },
			{ "SetLinearDamping", &UPhysicsHandleComponent::execSetLinearDamping },
			{ "SetLinearStiffness", &UPhysicsHandleComponent::execSetLinearStiffness },
			{ "SetTargetLocation", &UPhysicsHandleComponent::execSetTargetLocation },
			{ "SetTargetLocationAndRotation", &UPhysicsHandleComponent::execSetTargetLocationAndRotation },
			{ "SetTargetRotation", &UPhysicsHandleComponent::execSetTargetRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics
	{
		struct PhysicsHandleComponent_eventGetGrabbedComponent_Parms
		{
			UPrimitiveComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGetGrabbedComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Returns the currently grabbed component, or null if nothing is grabbed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "GetGrabbedComponent", sizeof(PhysicsHandleComponent_eventGetGrabbedComponent_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics
	{
		struct PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms
		{
			FVector TargetLocation;
			FRotator TargetRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Get the current location and rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "GetTargetLocationAndRotation", sizeof(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics
	{
		struct PhysicsHandleComponent_eventGrabComponent_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector GrabLocation;
			bool bConstrainRotation;
		};
		static void NewProp_bConstrainRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabLocation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation_SetBit(void* Obj)
	{
		((PhysicsHandleComponent_eventGrabComponent_Parms*)Obj)->bConstrainRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation = { "bConstrainRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhysicsHandleComponent_eventGrabComponent_Parms), &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_GrabLocation = { "GrabLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, GrabLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_GrabLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_InBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GrabComponentAtLocation or GrabComponentAtLocationWithRotation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "GrabComponent", sizeof(PhysicsHandleComponent_eventGrabComponent_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics
	{
		struct PhysicsHandleComponent_eventGrabComponentAtLocation_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector GrabLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabLocation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_GrabLocation = { "GrabLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, GrabLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_GrabLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_InBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Grab the specified component at a given location. Does NOT constraint rotation which means the handle will pivot about GrabLocation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "GrabComponentAtLocation", sizeof(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics
	{
		struct PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector Location;
			FRotator Rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_InBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Grab the specified component at a given location and rotation. Constrains rotation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "GrabComponentAtLocationWithRotation", sizeof(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Release the currently held component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "ReleaseComponent", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics
	{
		struct PhysicsHandleComponent_eventSetAngularDamping_Parms
		{
			float NewAngularDamping;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAngularDamping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::NewProp_NewAngularDamping = { "NewAngularDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventSetAngularDamping_Parms, NewAngularDamping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::NewProp_NewAngularDamping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set angular damping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetAngularDamping", sizeof(PhysicsHandleComponent_eventSetAngularDamping_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics
	{
		struct PhysicsHandleComponent_eventSetAngularStiffness_Parms
		{
			float NewAngularStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAngularStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::NewProp_NewAngularStiffness = { "NewAngularStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventSetAngularStiffness_Parms, NewAngularStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::NewProp_NewAngularStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set angular stiffness" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetAngularStiffness", sizeof(PhysicsHandleComponent_eventSetAngularStiffness_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics
	{
		struct PhysicsHandleComponent_eventSetInterpolationSpeed_Parms
		{
			float NewInterpolationSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewInterpolationSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::NewProp_NewInterpolationSpeed = { "NewInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventSetInterpolationSpeed_Parms, NewInterpolationSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::NewProp_NewInterpolationSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set interpolation speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetInterpolationSpeed", sizeof(PhysicsHandleComponent_eventSetInterpolationSpeed_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics
	{
		struct PhysicsHandleComponent_eventSetLinearDamping_Parms
		{
			float NewLinearDamping;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLinearDamping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::NewProp_NewLinearDamping = { "NewLinearDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventSetLinearDamping_Parms, NewLinearDamping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::NewProp_NewLinearDamping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set linear damping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetLinearDamping", sizeof(PhysicsHandleComponent_eventSetLinearDamping_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics
	{
		struct PhysicsHandleComponent_eventSetLinearStiffness_Parms
		{
			float NewLinearStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLinearStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::NewProp_NewLinearStiffness = { "NewLinearStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventSetLinearStiffness_Parms, NewLinearStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::NewProp_NewLinearStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set linear stiffness" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetLinearStiffness", sizeof(PhysicsHandleComponent_eventSetLinearStiffness_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics
	{
		struct PhysicsHandleComponent_eventSetTargetLocation_Parms
		{
			FVector NewLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set the target location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetTargetLocation", sizeof(PhysicsHandleComponent_eventSetTargetLocation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics
	{
		struct PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set target location and rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetTargetLocationAndRotation", sizeof(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics
	{
		struct PhysicsHandleComponent_eventSetTargetRotation_Parms
		{
			FRotator NewRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set the target rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetTargetRotation", sizeof(PhysicsHandleComponent_eventSetTargetRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister()
	{
		return UPhysicsHandleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsHandleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolateTarget_MetaData[];
#endif
		static void NewProp_bInterpolateTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolateTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftLinearConstraint_MetaData[];
#endif
		static void NewProp_bSoftLinearConstraint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoftLinearConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftAngularConstraint_MetaData[];
#endif
		static void NewProp_bSoftAngularConstraint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoftAngularConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabbedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabbedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsHandleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsHandleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent, "GetGrabbedComponent" }, // 1442369496
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation, "GetTargetLocationAndRotation" }, // 3499013050
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent, "GrabComponent" }, // 4063472283
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation, "GrabComponentAtLocation" }, // 1678239018
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation, "GrabComponentAtLocationWithRotation" }, // 1827883233
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent, "ReleaseComponent" }, // 2036704884
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping, "SetAngularDamping" }, // 3507142858
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness, "SetAngularStiffness" }, // 3172271313
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed, "SetInterpolationSpeed" }, // 3607148831
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping, "SetLinearDamping" }, // 321209782
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness, "SetLinearStiffness" }, // 921507909
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation, "SetTargetLocation" }, // 2704056754
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation, "SetTargetLocationAndRotation" }, // 196748870
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation, "SetTargetRotation" }, // 1143778644
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Utility object for moving physics objects around." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "EditCondition", "bInterpolateTarget" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "How quickly we interpolate the physics target transform" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsHandleComponent, InterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "EditCondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Angular stiffness of the handle spring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness = { "AngularStiffness", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsHandleComponent, AngularStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "EditCondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Angular damping of the handle spring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping = { "AngularDamping", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsHandleComponent, AngularDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "EditCondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Linear stiffness of the handle spring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness = { "LinearStiffness", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsHandleComponent, LinearStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "EditCondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Linear damping of the handle spring." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsHandleComponent, LinearDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_SetBit(void* Obj)
	{
		((UPhysicsHandleComponent*)Obj)->bInterpolateTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget = { "bInterpolateTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPhysicsHandleComponent), &Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_SetBit(void* Obj)
	{
		((UPhysicsHandleComponent*)Obj)->bSoftLinearConstraint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint = { "bSoftLinearConstraint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPhysicsHandleComponent), &Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_SetBit(void* Obj)
	{
		((UPhysicsHandleComponent*)Obj)->bSoftAngularConstraint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint = { "bSoftAngularConstraint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPhysicsHandleComponent), &Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Component we are currently holding" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent = { "GrabbedComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsHandleComponent, GrabbedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsHandleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsHandleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsHandleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::ClassParams = {
		&UPhysicsHandleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhysicsHandleComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::PropPointers),
		0,
		0x00B020A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsHandleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsHandleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsHandleComponent, 2229061333);
	template<> ENGINE_API UClass* StaticClass<UPhysicsHandleComponent>()
	{
		return UPhysicsHandleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsHandleComponent(Z_Construct_UClass_UPhysicsHandleComponent, &UPhysicsHandleComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsHandleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsHandleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

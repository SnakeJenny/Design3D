// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadMountedDisplay/Public/VRNotificationsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRNotificationsComponent() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UVRNotificationsComponent();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UVRNotificationsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRNotificationsComponent, nullptr, "VRNotificationsDelegate__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UVRNotificationsComponent::StaticRegisterNativesUVRNotificationsComponent()
	{
	}
	UClass* Z_Construct_UClass_UVRNotificationsComponent_NoRegister()
	{
		return UVRNotificationsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRNotificationsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRControllerRecenteredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_VRControllerRecenteredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDRemovedFromHeadDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDRemovedFromHeadDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDPutOnHeadDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDPutOnHeadDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDConnectCanceledDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDConnectCanceledDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDReconnectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDReconnectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDLostDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDLostDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDRecenteredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDRecenteredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDTrackingInitializedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDTrackingInitializedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRNotificationsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRNotificationsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, "VRNotificationsDelegate__DelegateSignature" }, // 277840299
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRNotificationsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "HeadMountedDisplay" },
		{ "IncludePath", "VRNotificationsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_VRControllerRecenteredDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
		{ "ToolTip", "This will be called when the VR system recenters a controller." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_VRControllerRecenteredDelegate = { "VRControllerRecenteredDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRNotificationsComponent, VRControllerRecenteredDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_VRControllerRecenteredDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_VRControllerRecenteredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDRemovedFromHeadDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
		{ "ToolTip", "This will be called when the HMD detects that it has been taken off by a player (disconnecting the hmd also causes it to register as taken off)." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDRemovedFromHeadDelegate = { "HMDRemovedFromHeadDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRNotificationsComponent, HMDRemovedFromHeadDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDRemovedFromHeadDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDRemovedFromHeadDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDPutOnHeadDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
		{ "ToolTip", "This will be called when the HMD detects that it has been put on by a player." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDPutOnHeadDelegate = { "HMDPutOnHeadDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRNotificationsComponent, HMDPutOnHeadDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDPutOnHeadDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDPutOnHeadDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDConnectCanceledDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
		{ "ToolTip", "This will be called when the user declines to connect the HMD when prompted to do so by a system dialog. (PS4 Only)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDConnectCanceledDelegate = { "HMDConnectCanceledDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRNotificationsComponent, HMDConnectCanceledDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDConnectCanceledDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDConnectCanceledDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDReconnectedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
		{ "ToolTip", "This will be called when connection to HMD is restored." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDReconnectedDelegate = { "HMDReconnectedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRNotificationsComponent, HMDReconnectedDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDReconnectedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDReconnectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDLostDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
		{ "ToolTip", "This will be called when connection to HMD is lost." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDLostDelegate = { "HMDLostDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRNotificationsComponent, HMDLostDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDLostDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDLostDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDRecenteredDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
		{ "ToolTip", "This will be called when the application is asked for VR headset recenter." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDRecenteredDelegate = { "HMDRecenteredDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRNotificationsComponent, HMDRecenteredDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDRecenteredDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDRecenteredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDTrackingInitializedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
		{ "ToolTip", "This will be called on Morpheus when the HMD is done initializing and therefore\nreprojection will start functioning.\nThe app can continue now. (PS4 Only)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDTrackingInitializedDelegate = { "HMDTrackingInitializedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRNotificationsComponent, HMDTrackingInitializedDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDTrackingInitializedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDTrackingInitializedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
		{ "ToolTip", "This will be called on Morpheus if the HMD starts up and is not fully initialized (in NOT_STARTED or CALIBRATING states).\nThe HMD will stay in NOT_STARTED until it is successfully position tracked.  Until it exits NOT_STARTED orientation\nbased reprojection does not happen.  Therefore we do not update rotation at all to avoid user discomfort.\nInstructions to get the hmd tracked should be shown to the user.\nSony may fix this eventually. (PS4 Only)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate = { "HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRNotificationsComponent, HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRNotificationsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_VRControllerRecenteredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDRemovedFromHeadDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDPutOnHeadDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDConnectCanceledDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDReconnectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDLostDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDRecenteredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDTrackingInitializedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRNotificationsComponent_Statics::NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRNotificationsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRNotificationsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRNotificationsComponent_Statics::ClassParams = {
		&UVRNotificationsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UVRNotificationsComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
		ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRNotificationsComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRNotificationsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRNotificationsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRNotificationsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRNotificationsComponent, 123506072);
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UVRNotificationsComponent>()
	{
		return UVRNotificationsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRNotificationsComponent(Z_Construct_UClass_UVRNotificationsComponent, &UVRNotificationsComponent::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UVRNotificationsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRNotificationsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

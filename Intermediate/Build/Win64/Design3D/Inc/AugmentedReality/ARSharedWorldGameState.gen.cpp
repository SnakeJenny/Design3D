// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARSharedWorldGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSharedWorldGameState() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameState_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady();
// End Cross Module References
	static FName NAME_AARSharedWorldGameState_K2_OnARWorldMapIsReady = FName(TEXT("K2_OnARWorldMapIsReady"));
	void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_AARSharedWorldGameState_K2_OnARWorldMapIsReady),NULL);
	}
	void AARSharedWorldGameState::StaticRegisterNativesAARSharedWorldGameState()
	{
	}
	struct Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World" },
		{ "DisplayName", "OnARWorldMapIsReady" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ScriptName", "OnARWorldMapIsReady" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldGameState, nullptr, "K2_OnARWorldMapIsReady", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARSharedWorldGameState_NoRegister()
	{
		return AARSharedWorldGameState::StaticClass();
	}
	struct Z_Construct_UClass_AARSharedWorldGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARWorldBytesDelivered_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ARWorldBytesDelivered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewImageBytesDelivered_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewImageBytesDelivered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARWorldBytesTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ARWorldBytesTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewImageBytesTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewImageBytesTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARWorldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ARWorldData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ARWorldData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewImageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewImageData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewImageData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARSharedWorldGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARSharedWorldGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady, "K2_OnARWorldMapIsReady" }, // 3839267239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARSharedWorldGameState.h" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesDelivered_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "The amount of the AR world data that has been replicated to this client so far" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesDelivered = { "ARWorldBytesDelivered", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARSharedWorldGameState, ARWorldBytesDelivered), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesDelivered_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesDelivered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesDelivered_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "The amount of the preview image data that has been replicated to this client so far" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesDelivered = { "PreviewImageBytesDelivered", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARSharedWorldGameState, PreviewImageBytesDelivered), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesDelivered_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesDelivered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesTotal_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "The size of the AR world data that will be replicated to each client" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesTotal = { "ARWorldBytesTotal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARSharedWorldGameState, ARWorldBytesTotal), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesTotal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesTotal_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "The size of the image that will be replicated to each client" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesTotal = { "PreviewImageBytesTotal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARSharedWorldGameState, PreviewImageBytesTotal), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesTotal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "Each client and the host have a copy of the shared world data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData = { "ARWorldData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARSharedWorldGameState, ARWorldData), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData_Inner = { "ARWorldData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "The image taken at the time of world saving for use when aligning the AR world later in the session" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData = { "PreviewImageData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARSharedWorldGameState, PreviewImageData), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData_Inner = { "PreviewImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARSharedWorldGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesDelivered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesDelivered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARSharedWorldGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARSharedWorldGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARSharedWorldGameState_Statics::ClassParams = {
		&AARSharedWorldGameState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARSharedWorldGameState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARSharedWorldGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARSharedWorldGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARSharedWorldGameState, 1467209644);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AARSharedWorldGameState>()
	{
		return AARSharedWorldGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARSharedWorldGameState(Z_Construct_UClass_AARSharedWorldGameState, &AARSharedWorldGameState::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("AARSharedWorldGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARSharedWorldGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

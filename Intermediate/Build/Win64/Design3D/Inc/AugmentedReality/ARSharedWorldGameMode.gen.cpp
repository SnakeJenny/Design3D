// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARSharedWorldGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSharedWorldGameMode() {}
// Cross Module References
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSharedWorldReplicationState();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameMode_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameState_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData();
// End Cross Module References
class UScriptStruct* FARSharedWorldReplicationState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARSharedWorldReplicationState, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARSharedWorldReplicationState"), sizeof(FARSharedWorldReplicationState), Get_Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARSharedWorldReplicationState>()
{
	return FARSharedWorldReplicationState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARSharedWorldReplicationState(FARSharedWorldReplicationState::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARSharedWorldReplicationState"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARSharedWorldReplicationState
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARSharedWorldReplicationState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARSharedWorldReplicationState")),new UScriptStruct::TCppStructOps<FARSharedWorldReplicationState>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARSharedWorldReplicationState;
	struct Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARWorldOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ARWorldOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewImageOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewImageOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "Per player information about what data has been sent to them" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARSharedWorldReplicationState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_ARWorldOffset_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "The offset in the overall ARWorld data buffer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_ARWorldOffset = { "ARWorldOffset", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARSharedWorldReplicationState, ARWorldOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_ARWorldOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_ARWorldOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_PreviewImageOffset_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "The offset in the overall image data buffer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_PreviewImageOffset = { "PreviewImageOffset", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARSharedWorldReplicationState, PreviewImageOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_PreviewImageOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_PreviewImageOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_ARWorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_PreviewImageOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARSharedWorldReplicationState",
		sizeof(FARSharedWorldReplicationState),
		alignof(FARSharedWorldReplicationState),
		Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARSharedWorldReplicationState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARSharedWorldReplicationState"), sizeof(FARSharedWorldReplicationState), Get_Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Hash() { return 749201385U; }
	void AARSharedWorldGameMode::StaticRegisterNativesAARSharedWorldGameMode()
	{
		UClass* Class = AARSharedWorldGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetARSharedWorldGameState", &AARSharedWorldGameMode::execGetARSharedWorldGameState },
			{ "SetARSharedWorldData", &AARSharedWorldGameMode::execSetARSharedWorldData },
			{ "SetARWorldSharingIsReady", &AARSharedWorldGameMode::execSetARWorldSharingIsReady },
			{ "SetPreviewImageData", &AARSharedWorldGameMode::execSetPreviewImageData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics
	{
		struct ARSharedWorldGameMode_eventGetARSharedWorldGameState_Parms
		{
			AARSharedWorldGameState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSharedWorldGameMode_eventGetARSharedWorldGameState_Parms, ReturnValue), Z_Construct_UClass_AARSharedWorldGameState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "@return the game state for this game mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldGameMode, nullptr, "GetARSharedWorldGameState", sizeof(ARSharedWorldGameMode_eventGetARSharedWorldGameState_Parms), Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics
	{
		struct ARSharedWorldGameMode_eventSetARSharedWorldData_Parms
		{
			TArray<uint8> ARWorldData;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ARWorldData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ARWorldData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::NewProp_ARWorldData = { "ARWorldData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSharedWorldGameMode_eventSetARSharedWorldData_Parms, ARWorldData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::NewProp_ARWorldData_Inner = { "ARWorldData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::NewProp_ARWorldData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::NewProp_ARWorldData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World" },
		{ "DisplayName", "Set AR Shared World Data" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "Sets the image data for the shared world game session\n\n@param ARWorldData the blob to use as the AR world data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldGameMode, nullptr, "SetARSharedWorldData", sizeof(ARSharedWorldGameMode_eventSetARSharedWorldData_Parms), Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World" },
		{ "DisplayName", "Set AR World Sharing Is Ready" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "Tells the game mode that the AR data is ready and should be replicated to all connected clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldGameMode, nullptr, "SetARWorldSharingIsReady", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics
	{
		struct ARSharedWorldGameMode_eventSetPreviewImageData_Parms
		{
			TArray<uint8> ImageData;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImageData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImageData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::NewProp_ImageData = { "ImageData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSharedWorldGameMode_eventSetPreviewImageData_Parms, ImageData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::NewProp_ImageData_Inner = { "ImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::NewProp_ImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::NewProp_ImageData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World" },
		{ "DisplayName", "Set AR Preview Image Data" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "Sets the image data for the shared world game session\n\n@param ImageData the blob to use as the image data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldGameMode, nullptr, "SetPreviewImageData", sizeof(ARSharedWorldGameMode_eventSetPreviewImageData_Parms), Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARSharedWorldGameMode_NoRegister()
	{
		return AARSharedWorldGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AARSharedWorldGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferSizePerChunk_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BufferSizePerChunk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARSharedWorldGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARSharedWorldGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState, "GetARSharedWorldGameState" }, // 1642074176
		{ &Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData, "SetARSharedWorldData" }, // 2960275316
		{ &Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady, "SetARWorldSharingIsReady" }, // 2060921533
		{ &Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData, "SetPreviewImageData" }, // 1732292191
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARSharedWorldGameMode.h" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameMode_Statics::NewProp_BufferSizePerChunk_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "The size of the buffer to use per send request. Must be between 1 and 65535, though should not be max to avoid saturation" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AARSharedWorldGameMode_Statics::NewProp_BufferSizePerChunk = { "BufferSizePerChunk", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARSharedWorldGameMode, BufferSizePerChunk), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameMode_Statics::NewProp_BufferSizePerChunk_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameMode_Statics::NewProp_BufferSizePerChunk_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARSharedWorldGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameMode_Statics::NewProp_BufferSizePerChunk,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARSharedWorldGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARSharedWorldGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARSharedWorldGameMode_Statics::ClassParams = {
		&AARSharedWorldGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARSharedWorldGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARSharedWorldGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARSharedWorldGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARSharedWorldGameMode, 173884139);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AARSharedWorldGameMode>()
	{
		return AARSharedWorldGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARSharedWorldGameMode(Z_Construct_UClass_AARSharedWorldGameMode, &AARSharedWorldGameMode::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("AARSharedWorldGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARSharedWorldGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

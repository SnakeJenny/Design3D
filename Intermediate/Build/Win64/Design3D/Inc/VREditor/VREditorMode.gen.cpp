// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/Public/VREditorMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorMode() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtension();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorAssetContainer_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorPlacement_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorAutoScaler_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorUISystem_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorAvatarActor_NoRegister();
// End Cross Module References
	void UVREditorMode::StaticRegisterNativesUVREditorMode()
	{
		UClass* Class = UVREditorMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWorldScaleFactor", &UVREditorMode::execGetWorldScaleFactor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics
	{
		struct VREditorMode_eventGetWorldScaleFactor_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorMode_eventGetWorldScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorMode" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Gets the world scale factor, which can be multiplied by a scale vector to convert to room space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorMode, nullptr, "GetWorldScaleFactor", sizeof(VREditorMode_eventGetWorldScaleFactor_Parms), Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVREditorMode_NoRegister()
	{
		return UVREditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Interactors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlacementSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoScalerSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AutoScalerSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UISystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UISystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AvatarActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorWorldExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVREditorMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor, "GetWorldScaleFactor" }, // 739782446
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VREditorMode.h" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "VR Editor Mode. Extends editor viewports with functionality for VR controls and object manipulation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_AssetContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Container of assets" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_AssetContainer = { "AssetContainer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorMode, AssetContainer), Z_Construct_UClass_UVREditorAssetContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AssetContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AssetContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Interactors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors = { "Interactors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorMode, Interactors), METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors_Inner = { "Interactors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_PlacementSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_PlacementSystem = { "PlacementSystem", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorMode, PlacementSystem), Z_Construct_UClass_UVREditorPlacement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_PlacementSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_PlacementSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_WorldInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "World interaction manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_WorldInteraction = { "WorldInteraction", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorMode, WorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_WorldInteraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_WorldInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_AutoScalerSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Automatic scale system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_AutoScalerSystem = { "AutoScalerSystem", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorMode, AutoScalerSystem), Z_Construct_UClass_UVREditorAutoScaler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AutoScalerSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AutoScalerSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleportActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Teleporter system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleportActor = { "TeleportActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorMode, TeleportActor), Z_Construct_UClass_AVREditorTeleporter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleportActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleportActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_UISystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "VR UI system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_UISystem = { "UISystem", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorMode, UISystem), Z_Construct_UClass_UVREditorUISystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_UISystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_UISystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_AvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Actor with components to represent the VR avatar in the world, including motion controller meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_AvatarActor = { "AvatarActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorMode, AvatarActor), Z_Construct_UClass_AVREditorAvatarActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AvatarActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AvatarActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_AssetContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_PlacementSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_WorldInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_AutoScalerSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleportActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_UISystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_AvatarActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVREditorMode_Statics::ClassParams = {
		&UVREditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVREditorMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVREditorMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVREditorMode, 2603705757);
	template<> VREDITOR_API UClass* StaticClass<UVREditorMode>()
	{
		return UVREditorMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVREditorMode(Z_Construct_UClass_UVREditorMode, &UVREditorMode::StaticClass, TEXT("/Script/VREditor"), TEXT("UVREditorMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

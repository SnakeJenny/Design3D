// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Preferences/PersonaOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaOptions() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOptions();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FViewportConfigOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	UNREALED_API UClass* Z_Construct_UClass_UPersonaOptions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPersonaOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* EAnimationViewportCameraFollowMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EAnimationViewportCameraFollowMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EAnimationViewportCameraFollowMode>()
	{
		return EAnimationViewportCameraFollowMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimationViewportCameraFollowMode(EAnimationViewportCameraFollowMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EAnimationViewportCameraFollowMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Hash() { return 3602215345U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimationViewportCameraFollowMode"), 0, Get_Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimationViewportCameraFollowMode::None", (int64)EAnimationViewportCameraFollowMode::None },
				{ "EAnimationViewportCameraFollowMode::Bounds", (int64)EAnimationViewportCameraFollowMode::Bounds },
				{ "EAnimationViewportCameraFollowMode::Bone", (int64)EAnimationViewportCameraFollowMode::Bone },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bone.ToolTip", "Follow a bone or socket" },
				{ "Bounds.ToolTip", "Follow the bounds of the mesh" },
				{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
				{ "None.ToolTip", "Standard camera controls" },
				{ "ToolTip", "Persisted camera follow mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EAnimationViewportCameraFollowMode",
				"EAnimationViewportCameraFollowMode",
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
class UScriptStruct* FAssetEditorOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorOptions, Z_Construct_UPackage__Script_UnrealEd(), TEXT("AssetEditorOptions"), sizeof(FAssetEditorOptions), Get_Z_Construct_UScriptStruct_FAssetEditorOptions_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FAssetEditorOptions>()
{
	return FAssetEditorOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetEditorOptions(FAssetEditorOptions::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("AssetEditorOptions"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFAssetEditorOptions
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFAssetEditorOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetEditorOptions")),new UScriptStruct::TCppStructOps<FAssetEditorOptions>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFAssetEditorOptions;
	struct Z_Construct_UScriptStruct_FAssetEditorOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportConfigs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportConfigs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Options that should be unique per asset editor (like skeletal mesh or anim sequence editors)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetEditorOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_ViewportConfigs_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Per-viewport configuration" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_ViewportConfigs = { "ViewportConfigs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ViewportConfigs, FAssetEditorOptions), STRUCT_OFFSET(FAssetEditorOptions, ViewportConfigs), Z_Construct_UScriptStruct_FViewportConfigOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_ViewportConfigs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_ViewportConfigs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "the name of the asset editor properties apply to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetEditorOptions, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_ViewportConfigs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_Context,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"AssetEditorOptions",
		sizeof(FAssetEditorOptions),
		alignof(FAssetEditorOptions),
		Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetEditorOptions"), sizeof(FAssetEditorOptions), Get_Z_Construct_UScriptStruct_FAssetEditorOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOptions_Hash() { return 1119812225U; }
class UScriptStruct* FViewportConfigOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FViewportConfigOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewportConfigOptions, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ViewportConfigOptions"), sizeof(FViewportConfigOptions), Get_Z_Construct_UScriptStruct_FViewportConfigOptions_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FViewportConfigOptions>()
{
	return FViewportConfigOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FViewportConfigOptions(FViewportConfigOptions::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("ViewportConfigOptions"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFViewportConfigOptions
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFViewportConfigOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ViewportConfigOptions")),new UScriptStruct::TCppStructOps<FViewportConfigOptions>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFViewportConfigOptions;
	struct Z_Construct_UScriptStruct_FViewportConfigOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFollowBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CameraFollowBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFollowMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraFollowMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraFollowMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewModeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ViewModeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Persistent per-viewport options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewportConfigOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowBoneName = { "CameraFollowBoneName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FViewportConfigOptions, CameraFollowBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowBoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Persisted camera follow mode for a viewport" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode = { "CameraFollowMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FViewportConfigOptions, CameraFollowMode), Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewFOV_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewFOV = { "ViewFOV", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FViewportConfigOptions, ViewFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewFOV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewModeIndex_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewModeIndex = { "ViewModeIndex", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FViewportConfigOptions, ViewModeIndex), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewModeIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewModeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewModeIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ViewportConfigOptions",
		sizeof(FViewportConfigOptions),
		alignof(FViewportConfigOptions),
		Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FViewportConfigOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FViewportConfigOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ViewportConfigOptions"), sizeof(FViewportConfigOptions), Get_Z_Construct_UScriptStruct_FViewportConfigOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FViewportConfigOptions_Hash() { return 3349415822U; }
	void UPersonaOptions::StaticRegisterNativesUPersonaOptions()
	{
	}
	UClass* Z_Construct_UClass_UPersonaOptions_NoRegister()
	{
		return UPersonaOptions::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetEditorOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetEditorOptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetEditorOptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumFolderFiltersInAssetBrowser_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumFolderFiltersInAssetBrowser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMeshSectionSelection_MetaData[];
#endif
		static void NewProp_bAllowMeshSectionSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMeshSectionSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_MetaData[];
#endif
		static void NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_MetaData[];
#endif
		static void NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideParentsWhenFiltering_MetaData[];
#endif
		static void NewProp_bHideParentsWhenFiltering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideParentsWhenFiltering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlattenSkeletonHierarchyWhenFiltering_MetaData[];
#endif
		static void NewProp_bFlattenSkeletonHierarchyWhenFiltering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlattenSkeletonHierarchyWhenFiltering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInlineSocketEditor_MetaData[];
#endif
		static void NewProp_bUseInlineSocketEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInlineSocketEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointTimingNodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointTimingNodeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyTimingNodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyTimingNodeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionTimingNodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionTimingNodeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBoneDrawSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DefaultBoneDrawSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLocalAxesSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DefaultLocalAxesSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowMeshStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShowMeshStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAudioAttenuation_MetaData[];
#endif
		static void NewProp_bUseAudioAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAudioAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMuteAudio_MetaData[];
#endif
		static void NewProp_bMuteAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMuteAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighlightOrigin_MetaData[];
#endif
		static void NewProp_bHighlightOrigin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighlightOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowGrid_MetaData[];
#endif
		static void NewProp_bShowGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoAlignFloorToMesh_MetaData[];
#endif
		static void NewProp_bAutoAlignFloorToMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoAlignFloorToMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/PersonaOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Options that should be unique per asset editor (like skeletal mesh or anim sequence editors)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions = { "AssetEditorOptions", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaOptions, AssetEditorOptions), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions_Inner = { "AssetEditorOptions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetEditorOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NumFolderFiltersInAssetBrowser_MetaData[] = {
		{ "Category", "Asset Browser" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "The number of folder filters to allow at any one time in the animation tool's asset browser" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NumFolderFiltersInAssetBrowser = { "NumFolderFiltersInAssetBrowser", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaOptions, NumFolderFiltersInAssetBrowser), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NumFolderFiltersInAssetBrowser_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NumFolderFiltersInAssetBrowser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not Skeletal Mesh Section selection should be enabled by default for the Animation Editor(s)" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bAllowMeshSectionSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection = { "bAllowMeshSectionSelection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_MetaData[] = {
		{ "Category", "Preview Scene|AdditionalMesh" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bAllowPreviewMeshCollectionsToUseCustomAnimBP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP = { "bAllowPreviewMeshCollectionsToUseCustomAnimBP", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_MetaData[] = {
		{ "Category", "Preview Scene|AdditionalMesh" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons = { "bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering_MetaData[] = {
		{ "Category", "Skeleton Tree" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to hide parent items when filtering or to display them grayed out" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bHideParentsWhenFiltering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering = { "bHideParentsWhenFiltering", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering_MetaData[] = {
		{ "Category", "Skeleton Tree" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to keep the hierarchy or flatten it when searching for bones, sockets etc." },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bFlattenSkeletonHierarchyWhenFiltering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering = { "bFlattenSkeletonHierarchyWhenFiltering", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor_MetaData[] = {
		{ "Category", "Skeleton Tree" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to use a socket editor that is created in-line inside the skeleton tree, or whether to use the separate details panel" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bUseInlineSocketEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor = { "bUseInlineSocketEditor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_BranchingPointTimingNodeColor_MetaData[] = {
		{ "Category", "Composites and Montages" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_BranchingPointTimingNodeColor = { "BranchingPointTimingNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaOptions, BranchingPointTimingNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_BranchingPointTimingNodeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_BranchingPointTimingNodeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NotifyTimingNodeColor_MetaData[] = {
		{ "Category", "Composites and Montages" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NotifyTimingNodeColor = { "NotifyTimingNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaOptions, NotifyTimingNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NotifyTimingNodeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NotifyTimingNodeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SectionTimingNodeColor_MetaData[] = {
		{ "Category", "Composites and Montages" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SectionTimingNodeColor = { "SectionTimingNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaOptions, SectionTimingNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SectionTimingNodeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SectionTimingNodeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneDrawSelection_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Index used to determine which Bone Draw Mode should be used by default for the Animation Editor(s)" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneDrawSelection = { "DefaultBoneDrawSelection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaOptions, DefaultBoneDrawSelection), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneDrawSelection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneDrawSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultLocalAxesSelection_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Index used to determine which ViewMode should be used by default for the Animation Editor(s)" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultLocalAxesSelection = { "DefaultLocalAxesSelection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaOptions, DefaultLocalAxesSelection), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultLocalAxesSelection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultLocalAxesSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ShowMeshStats_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Currently Stats can have None, Basic and Detailed. Please refer to EDisplayInfoMode." },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ShowMeshStats = { "ShowMeshStats", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersonaOptions, ShowMeshStats), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ShowMeshStats_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ShowMeshStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bUseAudioAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation = { "bUseAudioAttenuation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not audio should be muted by default for the Animation Editor(s)" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bMuteAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio = { "bMuteAudio", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not the XYZ axis at the origin should be highlighted on the grid by default" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bHighlightOrigin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin = { "bHighlightOrigin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not the grid should be visible by default for the Animation Editor(s)" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bShowGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid = { "bShowGrid", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh_MetaData[] = {
		{ "Category", "Preview Scene" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not the floor should be aligned to the Skeletal Mesh's bounds by default for the Animation Editor(s)" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bAutoAlignFloorToMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh = { "bAutoAlignFloorToMesh", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersonaOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NumFolderFiltersInAssetBrowser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_BranchingPointTimingNodeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NotifyTimingNodeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SectionTimingNodeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneDrawSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultLocalAxesSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ShowMeshStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPersonaOptions_Statics::ClassParams = {
		&UPersonaOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPersonaOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPersonaOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPersonaOptions, 3546952494);
	template<> UNREALED_API UClass* StaticClass<UPersonaOptions>()
	{
		return UPersonaOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPersonaOptions(Z_Construct_UClass_UPersonaOptions, &UPersonaOptions::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPersonaOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

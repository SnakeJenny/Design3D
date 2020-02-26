// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeInfo.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeInfo() {}
// Cross Module References
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
// End Cross Module References
class UScriptStruct* FLandscapeInfoLayerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeInfoLayerSettings"), sizeof(FLandscapeInfoLayerSettings), Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeInfoLayerSettings>()
{
	return FLandscapeInfoLayerSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeInfoLayerSettings(FLandscapeInfoLayerSettings::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeInfoLayerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeInfoLayerSettings
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeInfoLayerSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeInfoLayerSettings")),new UScriptStruct::TCppStructOps<FLandscapeInfoLayerSettings>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeInfoLayerSettings;
	struct Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColorChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugColorChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailMIC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailMIC;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfoObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfoObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeInfoLayerSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((FLandscapeInfoLayerSettings*)Obj)->bValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLandscapeInfoLayerSettings), &Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_DebugColorChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_DebugColorChannel = { "DebugColorChannel", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeInfoLayerSettings, DebugColorChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_DebugColorChannel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_DebugColorChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeInfoLayerSettings, Owner), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_Owner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_ThumbnailMIC_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_ThumbnailMIC = { "ThumbnailMIC", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeInfoLayerSettings, ThumbnailMIC), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_ThumbnailMIC_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_ThumbnailMIC_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeInfoLayerSettings, LayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerInfoObj_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerInfoObj = { "LayerInfoObj", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeInfoLayerSettings, LayerInfoObj), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerInfoObj_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerInfoObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_DebugColorChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_ThumbnailMIC,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerInfoObj,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeInfoLayerSettings",
		sizeof(FLandscapeInfoLayerSettings),
		alignof(FLandscapeInfoLayerSettings),
		Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeInfoLayerSettings"), sizeof(FLandscapeInfoLayerSettings), Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Hash() { return 505600680U; }
	void ULandscapeInfo::StaticRegisterNativesULandscapeInfo()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister()
	{
		return ULandscapeInfo::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proxies_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Proxies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proxies_ElementProp;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentNumSubsections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComponentNumSubsections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsectionSizeQuads_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubsectionSizeQuads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentSizeQuads_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComponentSizeQuads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_LandscapeActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeInfo.h" },
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Proxies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Proxies = { "Proxies", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeInfo, Proxies), METADATA_PARAMS(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Proxies_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Proxies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Proxies_ElementProp = { "Proxies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeInfo, Layers), METADATA_PARAMS(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_DrawScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_DrawScale = { "DrawScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeInfo, DrawScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_DrawScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_DrawScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentNumSubsections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentNumSubsections = { "ComponentNumSubsections", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeInfo, ComponentNumSubsections), METADATA_PARAMS(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentNumSubsections_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentNumSubsections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SubsectionSizeQuads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SubsectionSizeQuads = { "SubsectionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeInfo, SubsectionSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SubsectionSizeQuads_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SubsectionSizeQuads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentSizeQuads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentSizeQuads = { "ComponentSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeInfo, ComponentSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentSizeQuads_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentSizeQuads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeGuid = { "LandscapeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeInfo, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeActor = { "LandscapeActor", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeInfo, LandscapeActor), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Proxies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Proxies_ElementProp,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_DrawScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentNumSubsections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SubsectionSizeQuads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentSizeQuads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeInfo_Statics::ClassParams = {
		&ULandscapeInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeInfo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeInfo, 1520928673);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeInfo>()
	{
		return ULandscapeInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeInfo(Z_Construct_UClass_ULandscapeInfo, &ULandscapeInfo::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeInfo);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeInfo)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ThumbnailRendering/ThumbnailManager.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnailManager() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EThumbnailPrimType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FThumbnailRenderingInfo();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailManager_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* EThumbnailPrimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EThumbnailPrimType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EThumbnailPrimType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EThumbnailPrimType>()
	{
		return EThumbnailPrimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EThumbnailPrimType(EThumbnailPrimType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EThumbnailPrimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Hash() { return 2766065380U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EThumbnailPrimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EThumbnailPrimType"), 0, Get_Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TPT_None", (int64)TPT_None },
				{ "TPT_Sphere", (int64)TPT_Sphere },
				{ "TPT_Cube", (int64)TPT_Cube },
				{ "TPT_Plane", (int64)TPT_Plane },
				{ "TPT_Cylinder", (int64)TPT_Cylinder },
				{ "TPT_MAX", (int64)TPT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
				{ "ToolTip", "Types of primitives for drawing thumbnails of resources." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EThumbnailPrimType",
				"EThumbnailPrimType",
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
class UScriptStruct* FThumbnailRenderingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FThumbnailRenderingInfo, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ThumbnailRenderingInfo"), sizeof(FThumbnailRenderingInfo), Get_Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FThumbnailRenderingInfo>()
{
	return FThumbnailRenderingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FThumbnailRenderingInfo(FThumbnailRenderingInfo::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("ThumbnailRenderingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFThumbnailRenderingInfo
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFThumbnailRenderingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ThumbnailRenderingInfo")),new UScriptStruct::TCppStructOps<FThumbnailRenderingInfo>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFThumbnailRenderingInfo;
	struct Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Renderer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Renderer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RendererClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RendererClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassNeedingThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassNeedingThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassNeedingThumbnailName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassNeedingThumbnailName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "Holds the settings for a class that needs a thumbnail renderer. Each entry\nmaps to a corresponding class and holds the information needed\nto render the thumbnail, including which object to render via and its\nborder color." },
	};
#endif
	void* Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThumbnailRenderingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_Renderer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "The instance of the renderer class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_Renderer = { "Renderer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThumbnailRenderingInfo, Renderer), Z_Construct_UClass_UThumbnailRenderer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_Renderer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_Renderer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_RendererClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "The name of the class to load when rendering this thumbnail\nNOTE: This is a string to avoid any dependencies of compilation" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_RendererClassName = { "RendererClassName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThumbnailRenderingInfo, RendererClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_RendererClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_RendererClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnail_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "This is the class that this entry is for, i.e. the class that\nwill be rendered in the thumbnail views" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnail = { "ClassNeedingThumbnail", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThumbnailRenderingInfo, ClassNeedingThumbnail), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnail_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnailName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "The name of the class that this thumbnail is for (so we can lazy bind)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnailName = { "ClassNeedingThumbnailName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThumbnailRenderingInfo, ClassNeedingThumbnailName), METADATA_PARAMS(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnailName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnailName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_Renderer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_RendererClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnailName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ThumbnailRenderingInfo",
		sizeof(FThumbnailRenderingInfo),
		alignof(FThumbnailRenderingInfo),
		Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FThumbnailRenderingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ThumbnailRenderingInfo"), sizeof(FThumbnailRenderingInfo), Get_Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Hash() { return 1933945255U; }
	void UThumbnailManager::StaticRegisterNativesUThumbnailManager()
	{
	}
	UClass* Z_Construct_UClass_UThumbnailManager_NoRegister()
	{
		return UThumbnailManager::StaticClass();
	}
	struct Z_Construct_UClass_UThumbnailManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailManagerClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ThumbnailManagerClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckerboardTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckerboardTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbientCubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorPlaneMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorPlaneMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSkySphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorSkySphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCylinder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorCylinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCube_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorCube;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotSupported_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotSupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderableThumbnailTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RenderableThumbnailTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderableThumbnailTypes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThumbnailManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/ThumbnailManager.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_ThumbnailManagerClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "Holds the name of the thumbnail manager singleton class to instantiate" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_ThumbnailManagerClassName = { "ThumbnailManagerClassName", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, ThumbnailManagerClassName), METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_ThumbnailManagerClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_ThumbnailManagerClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_CheckerboardTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_CheckerboardTexture = { "CheckerboardTexture", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, CheckerboardTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_CheckerboardTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_CheckerboardTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_AmbientCubemap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_AmbientCubemap = { "AmbientCubemap", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, AmbientCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_AmbientCubemap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_AmbientCubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_FloorPlaneMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_FloorPlaneMaterial = { "FloorPlaneMaterial", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, FloorPlaneMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_FloorPlaneMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_FloorPlaneMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSkySphere_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSkySphere = { "EditorSkySphere", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, EditorSkySphere), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSkySphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSkySphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorPlane_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorPlane = { "EditorPlane", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, EditorPlane), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorPlane_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCylinder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCylinder = { "EditorCylinder", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, EditorCylinder), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCylinder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCylinder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSphere_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSphere = { "EditorSphere", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, EditorSphere), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCube_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "All these meshes/materials/textures are preloaded via default properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCube = { "EditorCube", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, EditorCube), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCube_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCube_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_NotSupported_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "The render info to share across all object types when the object doesn't\nsupport rendering of thumbnails" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_NotSupported = { "NotSupported", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, NotSupported), Z_Construct_UScriptStruct_FThumbnailRenderingInfo, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_NotSupported_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_NotSupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "The array of thumbnail rendering information entries. Each type that supports\nthumbnail rendering has an entry in here." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes = { "RenderableThumbnailTypes", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThumbnailManager, RenderableThumbnailTypes), METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes_Inner = { "RenderableThumbnailTypes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FThumbnailRenderingInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThumbnailManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_ThumbnailManagerClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_CheckerboardTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_AmbientCubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_FloorPlaneMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSkySphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCylinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCube,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_NotSupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThumbnailManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThumbnailManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThumbnailManager_Statics::ClassParams = {
		&UThumbnailManager::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UThumbnailManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThumbnailManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThumbnailManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThumbnailManager, 1431659960);
	template<> UNREALED_API UClass* StaticClass<UThumbnailManager>()
	{
		return UThumbnailManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThumbnailManager(Z_Construct_UClass_UThumbnailManager, &UThumbnailManager::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UThumbnailManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThumbnailManager);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UThumbnailManager)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

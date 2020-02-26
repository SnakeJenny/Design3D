// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeSplineSegment.h"
#include "Landscape/Classes/LandscapeSplinesComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplineSegment() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
// End Cross Module References
	static UEnum* LandscapeSplineMeshOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineMeshOrientation"));
		}
		return Singleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<LandscapeSplineMeshOrientation>()
	{
		return LandscapeSplineMeshOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_LandscapeSplineMeshOrientation(LandscapeSplineMeshOrientation_StaticEnum, TEXT("/Script/Landscape"), TEXT("LandscapeSplineMeshOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Hash() { return 2473569230U; }
	UEnum* Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("LandscapeSplineMeshOrientation"), 0, Get_Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LSMO_XUp", (int64)LSMO_XUp },
				{ "LSMO_YUp", (int64)LSMO_YUp },
				{ "LSMO_MAX", (int64)LSMO_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Deprecated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				"LandscapeSplineMeshOrientation",
				"LandscapeSplineMeshOrientation",
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
class UScriptStruct* FLandscapeSplineMeshEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineMeshEntry"), sizeof(FLandscapeSplineMeshEntry), Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeSplineMeshEntry>()
{
	return FLandscapeSplineMeshEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeSplineMeshEntry(FLandscapeSplineMeshEntry::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeSplineMeshEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineMeshEntry
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineMeshEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeSplineMeshEntry")),new UScriptStruct::TCppStructOps<FLandscapeSplineMeshEntry>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineMeshEntry;
	struct Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForwardAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleToWidth_MetaData[];
#endif
		static void NewProp_bScaleToWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleToWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterAdjust_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterAdjust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterH_MetaData[];
#endif
		static void NewProp_bCenterH_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterH;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineMeshEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_UpAxis_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Chooses the up axis for the spline mesh orientation" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineMeshEntry, UpAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_UpAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_UpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_ForwardAxis_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Chooses the forward axis for the spline mesh orientation" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineMeshEntry, ForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_ForwardAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_ForwardAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Orientation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Orientation of the spline mesh, X=Up or Y=Up" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineMeshEntry, Orientation_DEPRECATED), Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Scale of the spline mesh, (Z=Forwards)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineMeshEntry, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Whether to scale the mesh to fit the width of the spline" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth_SetBit(void* Obj)
	{
		((FLandscapeSplineMeshEntry*)Obj)->bScaleToWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth = { "bScaleToWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLandscapeSplineMeshEntry), &Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_CenterAdjust_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "DisplayName", "Center Adjust" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Tweak to center the mesh correctly on the spline" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_CenterAdjust = { "CenterAdjust", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineMeshEntry, CenterAdjust), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_CenterAdjust_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_CenterAdjust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "DisplayName", "Center Horizontally" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Whether to automatically center the mesh horizontally on the spline" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH_SetBit(void* Obj)
	{
		((FLandscapeSplineMeshEntry*)Obj)->bCenterH = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH = { "bCenterH", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLandscapeSplineMeshEntry), &Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Overrides mesh's materials" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineMeshEntry, MaterialOverrides), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Mesh to use on the spline" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineMeshEntry, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_UpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_ForwardAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_CenterAdjust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Mesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeSplineMeshEntry",
		sizeof(FLandscapeSplineMeshEntry),
		alignof(FLandscapeSplineMeshEntry),
		Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeSplineMeshEntry"), sizeof(FLandscapeSplineMeshEntry), Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Hash() { return 2139877095U; }
class UScriptStruct* FLandscapeSplineSegmentConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineSegmentConnection"), sizeof(FLandscapeSplineSegmentConnection), Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeSplineSegmentConnection>()
{
	return FLandscapeSplineSegmentConnection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeSplineSegmentConnection(FLandscapeSplineSegmentConnection::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeSplineSegmentConnection"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineSegmentConnection
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineSegmentConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeSplineSegmentConnection")),new UScriptStruct::TCppStructOps<FLandscapeSplineSegmentConnection>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineSegmentConnection;
	struct Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TangentLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineSegmentConnection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "LandscapeSplineSegmentConnection" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Socket on the control point that we are connected to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineSegmentConnection, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_SocketName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_TangentLen_MetaData[] = {
		{ "Category", "LandscapeSplineSegmentConnection" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Tangent length of the connection" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_TangentLen = { "TangentLen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineSegmentConnection, TangentLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_TangentLen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_TangentLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_ControlPoint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Control point connected to this end of the segment" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_ControlPoint = { "ControlPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineSegmentConnection, ControlPoint), Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_ControlPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_ControlPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_TangentLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_ControlPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeSplineSegmentConnection",
		sizeof(FLandscapeSplineSegmentConnection),
		alignof(FLandscapeSplineSegmentConnection),
		Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeSplineSegmentConnection"), sizeof(FLandscapeSplineSegmentConnection), Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Hash() { return 4018101251U; }
class UScriptStruct* FLandscapeSplineInterpPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineInterpPoint"), sizeof(FLandscapeSplineInterpPoint), Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeSplineInterpPoint>()
{
	return FLandscapeSplineInterpPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeSplineInterpPoint(FLandscapeSplineInterpPoint::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeSplineInterpPoint"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineInterpPoint
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineInterpPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeSplineInterpPoint")),new UScriptStruct::TCppStructOps<FLandscapeSplineInterpPoint>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineInterpPoint;
	struct Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartEndFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartEndFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FalloffRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FalloffLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineInterpPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_StartEndFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Start/End Falloff fraction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_StartEndFalloff = { "StartEndFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineInterpPoint, StartEndFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_StartEndFalloff_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_StartEndFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffRight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Right FalloffPoint" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffRight = { "FalloffRight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineInterpPoint, FalloffRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffRight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffLeft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Left Falloff Point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffLeft = { "FalloffLeft", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineInterpPoint, FalloffLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffLeft_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Right_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Right Point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineInterpPoint, Right), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Right_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Left_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Left Point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineInterpPoint, Left), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Left_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Center_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Center Point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeSplineInterpPoint, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Center_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_StartEndFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Center,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeSplineInterpPoint",
		sizeof(FLandscapeSplineInterpPoint),
		alignof(FLandscapeSplineInterpPoint),
		Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeSplineInterpPoint"), sizeof(FLandscapeSplineInterpPoint), Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Hash() { return 2934753542U; }
	void ULandscapeSplineSegment::StaticRegisterNativesULandscapeSplineSegment()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister()
	{
		return ULandscapeSplineSegment::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeSplineSegment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModificationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignWorlds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForeignWorlds;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ForeignWorlds_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalMeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineInfo;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavDirty_MetaData[];
#endif
		static void NewProp_bNavDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData[];
#endif
		static void NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaceSplineMeshesInStreamingLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[];
#endif
		static void NewProp_bHiddenInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LDMaxDrawDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LDMaxDrawDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplineMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLowerTerrain_MetaData[];
#endif
		static void NewProp_bLowerTerrain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLowerTerrain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRaiseTerrain_MetaData[];
#endif
		static void NewProp_bRaiseTerrain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaiseTerrain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Connections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeSplineSegment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "LandscapeSplineSegment LandscapeSplineMeshes" },
		{ "IncludePath", "LandscapeSplineSegment.h" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ModificationKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Key for tracking whether this segment has been modified relative to the mesh components stored in other streaming levels" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ModificationKey = { "ModificationKey", nullptr, (EPropertyFlags)0x0020c80800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ModificationKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ModificationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "World references for mesh components stored in other streaming levels" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds = { "ForeignWorlds", nullptr, (EPropertyFlags)0x0024c80800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, ForeignWorlds), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds_Inner = { "ForeignWorlds", nullptr, (EPropertyFlags)0x0004000800000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Spline meshes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents = { "LocalMeshComponents", nullptr, (EPropertyFlags)0x0020488000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, LocalMeshComponents), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents_Inner = { "LocalMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Bounds of points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Bounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Spline points" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, Points), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Actual data for spline." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineInfo = { "SplineInfo", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, SplineInfo), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineInfo_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bNavDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty = { "bNavDirty", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Mesh Collision Settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000800000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_BodyInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_BodyInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Whether spline meshes should be placed in landscape proxy streaming levels (true) or the spline's level (false)" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bPlaceSplineMeshesInStreamingLevels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels = { "bPlaceSplineMeshesInStreamingLevels", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Whether to hide the mesh in game" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bHiddenInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Translucent objects with a lower sort priority draw behind objects with a higher priority.\nTranslucent objects with the same priority are rendered from back-to-front based on their bounds origin.\n\nIgnored if the object is not translucent.  The default priority is zero.\nWarning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, TranslucencySortPriority), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_TranslucencySortPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_TranslucencySortPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LDMaxDrawDistance_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "DisplayName", "Max Draw Distance" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Max draw distance for all the mesh pieces used in this spline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LDMaxDrawDistance = { "LDMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, LDMaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LDMaxDrawDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LDMaxDrawDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Random seed used for choosing which order to use spline meshes. Ignored if only one mesh is set." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RandomSeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Whether the Spline Meshes should cast a shadow." },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bCastShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Name of the collision profile to use for this spline //\n// TODO: This field does not have proper Slate customization.\n// Instead of a text field, this should be a dropdown with the\n// default option.\n//" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, CollisionProfileName), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CollisionProfileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bEnableCollision_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Spline meshes from this list are used in random order along the spline." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes = { "SplineMeshes", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, SplineMeshes), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes_Inner = { "SplineMeshes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain_MetaData[] = {
		{ "Category", "LandscapeDeformation" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape." },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bLowerTerrain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain = { "bLowerTerrain", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain_MetaData[] = {
		{ "Category", "LandscapeDeformation" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape." },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bRaiseTerrain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain = { "bRaiseTerrain", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "LandscapeDeformation" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Name of blend layer to paint when applying spline to landscape\nIf \"none\", no layer is painted" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplineSegment, LayerName), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LayerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LayerName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Connections_MetaData[] = {
		{ "Category", "LandscapeSplineSegment" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Directly editable data:" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Connections, ULandscapeSplineSegment), STRUCT_OFFSET(ULandscapeSplineSegment, Connections), Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Connections_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Connections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeSplineSegment_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ModificationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineInfo,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_BodyInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_TranslucencySortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LDMaxDrawDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CollisionProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LayerName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Connections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeSplineSegment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSplineSegment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::ClassParams = {
		&ULandscapeSplineSegment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeSplineSegment_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeSplineSegment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeSplineSegment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeSplineSegment, 4247213473);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSplineSegment>()
	{
		return ULandscapeSplineSegment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeSplineSegment(Z_Construct_UClass_ULandscapeSplineSegment, &ULandscapeSplineSegment::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeSplineSegment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSplineSegment);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplineSegment)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

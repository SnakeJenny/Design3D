// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshPaint/Public/MeshPaintTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintTypes() {}
// Cross Module References
	MESHPAINT_API UEnum* Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget();
	UPackage* Z_Construct_UPackage__Script_MeshPaint();
	MESHPAINT_API UEnum* Z_Construct_UEnum_MeshPaint_EMeshPaintMode();
// End Cross Module References
	static UEnum* EMeshVertexPaintTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget, Z_Construct_UPackage__Script_MeshPaint(), TEXT("EMeshVertexPaintTarget"));
		}
		return Singleton;
	}
	template<> MESHPAINT_API UEnum* StaticEnum<EMeshVertexPaintTarget>()
	{
		return EMeshVertexPaintTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshVertexPaintTarget(EMeshVertexPaintTarget_StaticEnum, TEXT("/Script/MeshPaint"), TEXT("EMeshVertexPaintTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Hash() { return 2811840475U; }
	UEnum* Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MeshPaint();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshVertexPaintTarget"), 0, Get_Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshVertexPaintTarget::ComponentInstance", (int64)EMeshVertexPaintTarget::ComponentInstance },
				{ "EMeshVertexPaintTarget::Mesh", (int64)EMeshVertexPaintTarget::Mesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ComponentInstance.ToolTip", "Paint the static mesh component instance in the level" },
				{ "Mesh.ToolTip", "Paint the actual static mesh asset" },
				{ "ModuleRelativePath", "Public/MeshPaintTypes.h" },
				{ "ToolTip", "Vertex paint target" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MeshPaint,
				nullptr,
				"EMeshVertexPaintTarget",
				"EMeshVertexPaintTarget",
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
	static UEnum* EMeshPaintMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MeshPaint_EMeshPaintMode, Z_Construct_UPackage__Script_MeshPaint(), TEXT("EMeshPaintMode"));
		}
		return Singleton;
	}
	template<> MESHPAINT_API UEnum* StaticEnum<EMeshPaintMode>()
	{
		return EMeshPaintMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshPaintMode(EMeshPaintMode_StaticEnum, TEXT("/Script/MeshPaint"), TEXT("EMeshPaintMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Hash() { return 2837125431U; }
	UEnum* Z_Construct_UEnum_MeshPaint_EMeshPaintMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MeshPaint();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshPaintMode"), 0, Get_Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshPaintMode::PaintColors", (int64)EMeshPaintMode::PaintColors },
				{ "EMeshPaintMode::PaintWeights", (int64)EMeshPaintMode::PaintWeights },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MeshPaintTypes.h" },
				{ "PaintColors.ToolTip", "Painting colors directly" },
				{ "PaintWeights.ToolTip", "Painting texture blend weights" },
				{ "ToolTip", "Mesh paint mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MeshPaint,
				nullptr,
				"EMeshPaintMode",
				"EMeshPaintMode",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

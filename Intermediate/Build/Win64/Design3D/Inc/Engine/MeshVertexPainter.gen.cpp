// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/MeshVertexPainter/MeshVertexPainter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexPainter() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVertexPaintAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static UEnum* EVertexPaintAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVertexPaintAxis, Z_Construct_UPackage__Script_Engine(), TEXT("EVertexPaintAxis"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVertexPaintAxis>()
	{
		return EVertexPaintAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVertexPaintAxis(EVertexPaintAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("EVertexPaintAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVertexPaintAxis_Hash() { return 1765811413U; }
	UEnum* Z_Construct_UEnum_Engine_EVertexPaintAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVertexPaintAxis"), 0, Get_Z_Construct_UEnum_Engine_EVertexPaintAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVertexPaintAxis::X", (int64)EVertexPaintAxis::X },
				{ "EVertexPaintAxis::Y", (int64)EVertexPaintAxis::Y },
				{ "EVertexPaintAxis::Z", (int64)EVertexPaintAxis::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EVertexPaintAxis",
				"EVertexPaintAxis",
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

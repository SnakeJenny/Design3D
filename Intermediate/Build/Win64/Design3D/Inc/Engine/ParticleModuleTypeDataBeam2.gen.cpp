// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataBeam2() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBeamTaperMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBeam2Method();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBeamTargetData();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	static UEnum* EBeamTaperMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBeamTaperMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EBeamTaperMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBeamTaperMethod>()
	{
		return EBeamTaperMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBeamTaperMethod(EBeamTaperMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EBeamTaperMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBeamTaperMethod_Hash() { return 1473079615U; }
	UEnum* Z_Construct_UEnum_Engine_EBeamTaperMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBeamTaperMethod"), 0, Get_Z_Construct_UEnum_Engine_EBeamTaperMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PEBTM_None", (int64)PEBTM_None },
				{ "PEBTM_Full", (int64)PEBTM_Full },
				{ "PEBTM_Partial", (int64)PEBTM_Partial },
				{ "PEBTM_MAX", (int64)PEBTM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "PEBTM_Full.DisplayName", "Full" },
				{ "PEBTM_None.DisplayName", "None" },
				{ "PEBTM_Partial.DisplayName", "Partial" },
				{ "ToolTip", "Beam Tapering Variables." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBeamTaperMethod",
				"EBeamTaperMethod",
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
	static UEnum* EBeam2Method_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBeam2Method, Z_Construct_UPackage__Script_Engine(), TEXT("EBeam2Method"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBeam2Method>()
	{
		return EBeam2Method_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBeam2Method(EBeam2Method_StaticEnum, TEXT("/Script/Engine"), TEXT("EBeam2Method"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBeam2Method_Hash() { return 227616358U; }
	UEnum* Z_Construct_UEnum_Engine_EBeam2Method()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBeam2Method"), 0, Get_Z_Construct_UEnum_Engine_EBeam2Method_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PEB2M_Distance", (int64)PEB2M_Distance },
				{ "PEB2M_Target", (int64)PEB2M_Target },
				{ "PEB2M_Branch", (int64)PEB2M_Branch },
				{ "PEB2M_MAX", (int64)PEB2M_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "PEB2M_Branch.DisplayName", "Branch" },
				{ "PEB2M_Distance.DisplayName", "Distance" },
				{ "PEB2M_Target.DisplayName", "Target" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBeam2Method",
				"EBeam2Method",
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
class UScriptStruct* FBeamTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBeamTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeamTargetData, Z_Construct_UPackage__Script_Engine(), TEXT("BeamTargetData"), sizeof(FBeamTargetData), Get_Z_Construct_UScriptStruct_FBeamTargetData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBeamTargetData>()
{
	return FBeamTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBeamTargetData(FBeamTargetData::StaticStruct, TEXT("/Script/Engine"), TEXT("BeamTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBeamTargetData
{
	FScriptStruct_Engine_StaticRegisterNativesFBeamTargetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BeamTargetData")),new UScriptStruct::TCppStructOps<FBeamTargetData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBeamTargetData;
	struct Z_Construct_UScriptStruct_FBeamTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamTargetData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Beam Multi-target Variables." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeamTargetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetPercentage_MetaData[] = {
		{ "Category", "BeamTargetData" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Percentage chance the target will be selected (100 = always)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetPercentage = { "TargetPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBeamTargetData, TargetPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetName_MetaData[] = {
		{ "Category", "BeamTargetData" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Name of the target." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBeamTargetData, TargetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeamTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeamTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BeamTargetData",
		sizeof(FBeamTargetData),
		alignof(FBeamTargetData),
		Z_Construct_UScriptStruct_FBeamTargetData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamTargetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamTargetData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBeamTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBeamTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BeamTargetData"), sizeof(FBeamTargetData), Get_Z_Construct_UScriptStruct_FBeamTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBeamTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBeamTargetData_Hash() { return 4065960300U; }
	void UParticleModuleTypeDataBeam2::StaticRegisterNativesUParticleModuleTypeDataBeam2()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister()
	{
		return UParticleModuleTypeDataBeam2::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTessellation_MetaData[];
#endif
		static void NewProp_RenderTessellation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderTessellation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderLines_MetaData[];
#endif
		static void NewProp_RenderLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderDirectLine_MetaData[];
#endif
		static void NewProp_RenderDirectLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderDirectLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderGeometry_MetaData[];
#endif
		static void NewProp_RenderGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaperScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaperScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaperFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaperFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaperMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TaperMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BranchParentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpVectorStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpVectorStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysOn_MetaData[];
#endif
		static void NewProp_bAlwaysOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBeamCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBeamCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sheets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Sheets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTileDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureTileDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeamMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Beam Data" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataBeam2*)Obj)->RenderTessellation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation = { "RenderTessellation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataBeam2), &Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataBeam2*)Obj)->RenderLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines = { "RenderLines", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataBeam2), &Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataBeam2*)Obj)->RenderDirectLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine = { "RenderDirectLine", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataBeam2), &Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Beam Rendering Variables." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataBeam2*)Obj)->RenderGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry = { "RenderGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataBeam2), &Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperScale_MetaData[] = {
		{ "Category", "Taper" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Tapering scaling\n    This is intended to be either a constant, uniform or a ParticleParam.\n    If a curve is used, 0/1 mapping of source/target... which could be integrated into\n    the taper factor itself, and therefore makes no sense." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperScale = { "TaperScale", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TaperScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperFactor_MetaData[] = {
		{ "Category", "Taper" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Tapering factor, 0 = source of beam, 1 = target" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperFactor = { "TaperFactor", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TaperFactor), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperMethod_MetaData[] = {
		{ "Category", "Taper" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Tapering mode - one of the following:\nPEBTM_None              - No tapering is applied\nPEBTM_Full              - Taper the beam relative to source-->target, regardless of current beam length\nPEBTM_Partial   - Taper the beam relative to source-->location, 0=source,1=endpoint" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperMethod = { "TaperMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TaperMethod), Z_Construct_UEnum_Engine_EBeamTaperMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Distance" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The distance along the X-axis to stretch the beam\nDistance is only used if BeamMethod is PEB2M_Distance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, Distance), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BranchParentName_MetaData[] = {
		{ "Category", "Branching" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The name of the emitter to branch from (if mode is PEB2M_Branch)\nMUST BE IN THE SAME PARTICLE SYSTEM!" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BranchParentName = { "BranchParentName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, BranchParentName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BranchParentName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BranchParentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_UpVectorStepSize_MetaData[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The approach to use for determining the Up vector(s) for the beam.\n\n0 indicates that the Up FVector should be calculated at EVERY point in the beam.\n1 indicates a single Up FVector should be determined at the start of the beam and used at every point.\nN indicates an Up FVector should be calculated every N points of the beam and interpolated between them.\n    [NOTE: This mode is currently unsupported.]" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_UpVectorStepSize = { "UpVectorStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, UpVectorStepSize), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_UpVectorStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_UpVectorStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn_MetaData[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "If true, there will ALWAYS be a beam..." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataBeam2*)Obj)->bAlwaysOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn = { "bAlwaysOn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataBeam2), &Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_InterpolationPoints_MetaData[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Indicates whether the beam should be interpolated.\n    <= 0 --> no\n    >  0 --> yes (and is equal to the number of interpolation steps that should be taken." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_InterpolationPoints = { "InterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, InterpolationPoints), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_InterpolationPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_InterpolationPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The speed at which the beam should move from source to target when firing up.\n    '0' indicates instantaneous" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, Speed), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_MaxBeamCount_MetaData[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The number of live beams" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_MaxBeamCount = { "MaxBeamCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, MaxBeamCount), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_MaxBeamCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_MaxBeamCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Sheets_MetaData[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The number of sheets to render" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Sheets = { "Sheets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, Sheets), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Sheets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Sheets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTileDistance_MetaData[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The distance per texture tile.\n    1st UV set only. 2nd UV set does not Tile." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTileDistance = { "TextureTileDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TextureTileDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTileDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTileDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTile_MetaData[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The number of times to tile the texture along each beam.\nOverridden by TextureTilingDistance if it is > 0.0.\n    1st UV set only. 2nd UV set does not Tile." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTile = { "TextureTile", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TextureTile), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BeamMethod_MetaData[] = {
		{ "Category", "Beam" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The method with which to form the beam(s). Must be one of the following:\n        PEB2M_Distance  - Use the distance property to emit a beam along the X-axis of the emitter.\n        PEB2M_Target    - Emit a beam from the source to the supplied target.\n        PEB2M_Branch    - Currently unimplemented." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BeamMethod = { "BeamMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, BeamMethod), Z_Construct_UEnum_Engine_EBeam2Method, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BeamMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BeamMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BranchParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_UpVectorStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_InterpolationPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_MaxBeamCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Sheets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTileDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BeamMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataBeam2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::ClassParams = {
		&UParticleModuleTypeDataBeam2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleTypeDataBeam2, 451272394);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataBeam2>()
	{
		return UParticleModuleTypeDataBeam2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTypeDataBeam2(Z_Construct_UClass_UParticleModuleTypeDataBeam2, &UParticleModuleTypeDataBeam2::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTypeDataBeam2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataBeam2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

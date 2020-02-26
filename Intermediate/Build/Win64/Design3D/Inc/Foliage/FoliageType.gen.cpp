// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/FoliageType.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType() {}
// Cross Module References
	FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_EFoliageScaling();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_EVertexColorMaskChannel();
	FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_FoliageVertexColorMask();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightmapType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EFoliageScaling_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Foliage_EFoliageScaling, Z_Construct_UPackage__Script_Foliage(), TEXT("EFoliageScaling"));
		}
		return Singleton;
	}
	template<> FOLIAGE_API UEnum* StaticEnum<EFoliageScaling>()
	{
		return EFoliageScaling_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFoliageScaling(EFoliageScaling_StaticEnum, TEXT("/Script/Foliage"), TEXT("EFoliageScaling"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Foliage_EFoliageScaling_Hash() { return 2533737236U; }
	UEnum* Z_Construct_UEnum_Foliage_EFoliageScaling()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFoliageScaling"), 0, Get_Z_Construct_UEnum_Foliage_EFoliageScaling_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFoliageScaling::Uniform", (int64)EFoliageScaling::Uniform },
				{ "EFoliageScaling::Free", (int64)EFoliageScaling::Free },
				{ "EFoliageScaling::LockXY", (int64)EFoliageScaling::LockXY },
				{ "EFoliageScaling::LockXZ", (int64)EFoliageScaling::LockXZ },
				{ "EFoliageScaling::LockYZ", (int64)EFoliageScaling::LockYZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Free.ToolTip", "Foliage instances will have random X,Y and Z scales." },
				{ "LockXY.ToolTip", "Locks the X and Y axis scale." },
				{ "LockXZ.ToolTip", "Locks the X and Z axis scale." },
				{ "LockYZ.ToolTip", "Locks the Y and Z axis scale." },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Uniform.ToolTip", "Foliage instances will have uniform X,Y and Z scales." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
				nullptr,
				"EFoliageScaling",
				"EFoliageScaling",
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
	static UEnum* EVertexColorMaskChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Foliage_EVertexColorMaskChannel, Z_Construct_UPackage__Script_Foliage(), TEXT("EVertexColorMaskChannel"));
		}
		return Singleton;
	}
	template<> FOLIAGE_API UEnum* StaticEnum<EVertexColorMaskChannel>()
	{
		return EVertexColorMaskChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVertexColorMaskChannel(EVertexColorMaskChannel_StaticEnum, TEXT("/Script/Foliage"), TEXT("EVertexColorMaskChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_Hash() { return 1788122864U; }
	UEnum* Z_Construct_UEnum_Foliage_EVertexColorMaskChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVertexColorMaskChannel"), 0, Get_Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVertexColorMaskChannel::Red", (int64)EVertexColorMaskChannel::Red },
				{ "EVertexColorMaskChannel::Green", (int64)EVertexColorMaskChannel::Green },
				{ "EVertexColorMaskChannel::Blue", (int64)EVertexColorMaskChannel::Blue },
				{ "EVertexColorMaskChannel::Alpha", (int64)EVertexColorMaskChannel::Alpha },
				{ "EVertexColorMaskChannel::MAX_None", (int64)EVertexColorMaskChannel::MAX_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MAX_None.Hidden", "" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
				nullptr,
				"EVertexColorMaskChannel",
				"EVertexColorMaskChannel",
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
	static UEnum* FoliageVertexColorMask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Foliage_FoliageVertexColorMask, Z_Construct_UPackage__Script_Foliage(), TEXT("FoliageVertexColorMask"));
		}
		return Singleton;
	}
	template<> FOLIAGE_API UEnum* StaticEnum<FoliageVertexColorMask>()
	{
		return FoliageVertexColorMask_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FoliageVertexColorMask(FoliageVertexColorMask_StaticEnum, TEXT("/Script/Foliage"), TEXT("FoliageVertexColorMask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Foliage_FoliageVertexColorMask_Hash() { return 4251694397U; }
	UEnum* Z_Construct_UEnum_Foliage_FoliageVertexColorMask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FoliageVertexColorMask"), 0, Get_Z_Construct_UEnum_Foliage_FoliageVertexColorMask_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FOLIAGEVERTEXCOLORMASK_Disabled", (int64)FOLIAGEVERTEXCOLORMASK_Disabled },
				{ "FOLIAGEVERTEXCOLORMASK_Red", (int64)FOLIAGEVERTEXCOLORMASK_Red },
				{ "FOLIAGEVERTEXCOLORMASK_Green", (int64)FOLIAGEVERTEXCOLORMASK_Green },
				{ "FOLIAGEVERTEXCOLORMASK_Blue", (int64)FOLIAGEVERTEXCOLORMASK_Blue },
				{ "FOLIAGEVERTEXCOLORMASK_Alpha", (int64)FOLIAGEVERTEXCOLORMASK_Alpha },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FOLIAGEVERTEXCOLORMASK_Alpha.DisplayName", "Alpha" },
				{ "FOLIAGEVERTEXCOLORMASK_Blue.DisplayName", "Blue" },
				{ "FOLIAGEVERTEXCOLORMASK_Disabled.DisplayName", "Disabled" },
				{ "FOLIAGEVERTEXCOLORMASK_Green.DisplayName", "Green" },
				{ "FOLIAGEVERTEXCOLORMASK_Red.DisplayName", "Red" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
				nullptr,
				"FoliageVertexColorMask",
				"FoliageVertexColorMask",
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
class UScriptStruct* FFoliageVertexColorChannelMask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOLIAGE_API uint32 Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask, Z_Construct_UPackage__Script_Foliage(), TEXT("FoliageVertexColorChannelMask"), sizeof(FFoliageVertexColorChannelMask), Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Hash());
	}
	return Singleton;
}
template<> FOLIAGE_API UScriptStruct* StaticStruct<FFoliageVertexColorChannelMask>()
{
	return FFoliageVertexColorChannelMask::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFoliageVertexColorChannelMask(FFoliageVertexColorChannelMask::StaticStruct, TEXT("/Script/Foliage"), TEXT("FoliageVertexColorChannelMask"), false, nullptr, nullptr);
static struct FScriptStruct_Foliage_StaticRegisterNativesFFoliageVertexColorChannelMask
{
	FScriptStruct_Foliage_StaticRegisterNativesFFoliageVertexColorChannelMask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FoliageVertexColorChannelMask")),new UScriptStruct::TCppStructOps<FFoliageVertexColorChannelMask>);
	}
} ScriptStruct_Foliage_StaticRegisterNativesFFoliageVertexColorChannelMask;
	struct Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertMask_MetaData[];
#endif
		static void NewProp_InvertMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaskThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseMask_MetaData[];
#endif
		static void NewProp_UseMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageVertexColorChannelMask>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask_MetaData[] = {
		{ "Category", "VertexColorMask" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "When unchecked, foliage instances will be placed only when the vertex color in the specified channel(s) is above the threshold amount.\nWhen checked, the vertex color must be less than the threshold amount" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask_SetBit(void* Obj)
	{
		((FFoliageVertexColorChannelMask*)Obj)->InvertMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask = { "InvertMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoliageVertexColorChannelMask), &Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_MaskThreshold_MetaData[] = {
		{ "Category", "VertexColorMask" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Specifies the threshold value above which the static mesh vertex color value must be, in order for foliage instances to be placed in a specific area" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_MaskThreshold = { "MaskThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageVertexColorChannelMask, MaskThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_MaskThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_MaskThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask_MetaData[] = {
		{ "Category", "VertexColorMask" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "When checked, foliage will be masked from this mesh using this color channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask_SetBit(void* Obj)
	{
		((FFoliageVertexColorChannelMask*)Obj)->UseMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask = { "UseMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoliageVertexColorChannelMask), &Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_MaskThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
		nullptr,
		&NewStructOps,
		"FoliageVertexColorChannelMask",
		sizeof(FFoliageVertexColorChannelMask),
		alignof(FFoliageVertexColorChannelMask),
		Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FoliageVertexColorChannelMask"), sizeof(FFoliageVertexColorChannelMask), Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Hash() { return 2240141102U; }
	void UFoliageType::StaticRegisterNativesUFoliageType()
	{
	}
	UClass* Z_Construct_UClass_UFoliageType_NoRegister()
	{
		return UFoliageType::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGroundSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGroundSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockScaleZ_MetaData[];
#endif
		static void NewProp_LockScaleZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockScaleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockScaleY_MetaData[];
#endif
		static void NewProp_LockScaleY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockScaleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockScaleX_MetaData[];
#endif
		static void NewProp_LockScaleX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockScaleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniformScale_MetaData[];
#endif
		static void NewProp_UniformScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UniformScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOffsetMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZOffsetMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOffsetMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZOffsetMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMaxZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMaxY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMaxX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMinZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMinZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMinY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMinY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMinX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMinX;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[];
#endif
		static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyVertexColorMask_MetaData[];
#endif
		static void NewProp_ReapplyVertexColorMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyVertexColorMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyCollisionWithWorld_MetaData[];
#endif
		static void NewProp_ReapplyCollisionWithWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyCollisionWithWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyZOffset_MetaData[];
#endif
		static void NewProp_ReapplyZOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyLandscapeLayers_MetaData[];
#endif
		static void NewProp_ReapplyLandscapeLayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyLandscapeLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyHeight_MetaData[];
#endif
		static void NewProp_ReapplyHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyGroundSlope_MetaData[];
#endif
		static void NewProp_ReapplyGroundSlope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyGroundSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyRandomPitchAngle_MetaData[];
#endif
		static void NewProp_ReapplyRandomPitchAngle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyRandomPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaleZ_MetaData[];
#endif
		static void NewProp_ReapplyScaleZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaleY_MetaData[];
#endif
		static void NewProp_ReapplyScaleY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaleX_MetaData[];
#endif
		static void NewProp_ReapplyScaleX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaling_MetaData[];
#endif
		static void NewProp_ReapplyScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyRandomYaw_MetaData[];
#endif
		static void NewProp_ReapplyRandomYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyRandomYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyAlignToNormal_MetaData[];
#endif
		static void NewProp_ReapplyAlignToNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyAlignToNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyRadius_MetaData[];
#endif
		static void NewProp_ReapplyRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyDensity_MetaData[];
#endif
		static void NewProp_ReapplyDensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInitialAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInitialAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnsInShade_MetaData[];
#endif
		static void NewProp_bSpawnsInShade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnsInShade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanGrowInShade_MetaData[];
#endif
		static void NewProp_bCanGrowInShade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanGrowInShade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInitialSeedOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInitialSeedOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistributionSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DistributionSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedsPerStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeedsPerStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadVariance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadVariance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageSpreadDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageSpreadDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSeedDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialSeedDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSelected_MetaData[];
#endif
		static void NewProp_IsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenEditorViews_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_HiddenEditorViews;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomNavigableGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomNavigableGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[];
#endif
		static void NewProp_bUseAsOccluder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightmapType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightmapType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[];
#endif
		static void NewProp_bOverrideLightMapRes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[];
#endif
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[];
#endif
		static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[];
#endif
		static void NewProp_bCastStaticShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[];
#endif
		static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[];
#endif
		static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[];
#endif
		static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastShadow_MetaData[];
#endif
		static void NewProp_CastShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStaticLighting_MetaData[];
#endif
		static void NewProp_bEnableStaticLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStaticLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mobility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowBoundOriginRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowBoundOriginRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumLayerWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumLayerWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionWithWorld_MetaData[];
#endif
		static void NewProp_CollisionWithWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CollisionWithWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LandscapeLayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandscapeLayers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LandscapeLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundSlopeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundSlopeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomYaw_MetaData[];
#endif
		static void NewProp_RandomYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RandomYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignMaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlignMaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignToNormal_MetaData[];
#endif
		static void NewProp_AlignToNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlignToNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaskInvert_MetaData[];
#endif
		static void NewProp_VertexColorMaskInvert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VertexColorMaskInvert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaskThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertexColorMaskThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VertexColorMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaskByChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColorMaskByChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scaling;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Scaling_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityAdjustmentFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityAdjustmentFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FoliageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, MaxScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_MinScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, MinScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_MinScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_MinScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_MinGroundSlope_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MinGroundSlope = { "MinGroundSlope", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, MinGroundSlope_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_MinGroundSlope_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_MinGroundSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlope_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlope = { "GroundSlope", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, GroundSlope_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlope_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->LockScaleZ_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ = { "LockScaleZ", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->LockScaleY_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY = { "LockScaleY", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->LockScaleX_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX = { "LockScaleX", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->UniformScale_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale = { "UniformScale", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_EndCullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, EndCullDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_EndCullDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_EndCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_StartCullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, StartCullDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_StartCullDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_StartCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMax = { "ZOffsetMax", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ZOffsetMax_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMin = { "ZOffsetMin", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ZOffsetMin_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMax = { "HeightMax", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, HeightMax_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMin = { "HeightMin", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, HeightMin_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxZ = { "ScaleMaxZ", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ScaleMaxZ_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxY_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxY = { "ScaleMaxY", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ScaleMaxY_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxX_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxX = { "ScaleMaxX", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ScaleMaxX_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinZ = { "ScaleMinZ", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ScaleMinZ_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinY_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinY = { "ScaleMinY", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ScaleMinY_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinX_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Deprecated since FFoliageCustomVersion::FoliageTypeCustomization" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinX = { "ScaleMinX", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ScaleMinX_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinX_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether this foliage type should be affected by the Engine Scalability system's Foliage scalability setting.\nEnable for detail meshes that don't really affect the game. Disable for anything important.\nTypically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bEnableDensityScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling = { "bEnableDensityScaling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances no longer matching the vertex color constraint will be removed by the Reapply too" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyVertexColorMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask = { "ReapplyVertexColorMask", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have an overlap test with the world reapplied, and overlapping instances will be removed by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyCollisionWithWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld = { "ReapplyCollisionWithWorld", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their Z offset adjusted by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyZOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset = { "ReapplyZOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances painted on areas that do not have the appropriate landscape layer painted will be removed by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyLandscapeLayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers = { "ReapplyLandscapeLayers", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances not meeting the valid Z height condition will be removed by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight = { "ReapplyHeight", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances not meeting the ground slope condition will be removed by the Reapply too" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyGroundSlope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope = { "ReapplyGroundSlope", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their pitch adjusted by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyRandomPitchAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle = { "ReapplyRandomPitchAngle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their Z scale adjusted by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyScaleZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ = { "ReapplyScaleZ", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their Y scale adjusted by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyScaleY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY = { "ReapplyScaleY", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their X scale adjusted by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyScaleX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX = { "ReapplyScaleX", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their scale adjusted to fit the specified scaling behavior by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling = { "ReapplyScaling", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their yaw adjusted by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyRandomYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw = { "ReapplyRandomYaw", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their normal alignment adjusted by the Reapply tool" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyAlignToNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal = { "ReapplyAlignToNormal", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances not meeting the new Radius constraint will be removed" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius = { "ReapplyRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity_MetaData[] = {
		{ "Category", "Reapply" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, the density of foliage instances already placed will be adjusted by the density adjustment factor." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->ReapplyDensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity = { "ReapplyDensity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ChangeCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ChangeCount = { "ChangeCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ChangeCount), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ChangeCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ChangeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleCurve_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "Instance scale factor as a function of normalized age (i.e. Current Age / Max Age).\nX = 0 corresponds to Age = 0, X = 1 corresponds to Age = Max Age.\nY = 0 corresponds to Min Scale, Y = 1 corresponds to Max Scale." },
		{ "XAxisName", "Normalized Age" },
		{ "YAxisName", "Scale Factor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleCurve = { "ScaleCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ScaleCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ProceduralScale_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "The scale range of this type when being procedurally generated. Configured with the Scale Curve." },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ProceduralScale = { "ProceduralScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ProceduralScale), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ProceduralScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ProceduralScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_OverlapPriority_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "When two instances overlap we must determine which instance to remove.\nThe instance with a lower OverlapPriority will be removed.\nIn the case where OverlapPriority is the same regular simulation rules apply." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_OverlapPriority = { "OverlapPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, OverlapPriority), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_OverlapPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_OverlapPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxAge_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "Specifies the oldest a seed can be. After reaching this age the instance will still spread seeds, but will not get any older" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxAge = { "MaxAge", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, MaxAge), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxAge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialAge_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "Allows a new seed to be older than 0 when created. New seeds will be randomly assigned an age in the range [0,MaxInitialAge]" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialAge = { "MaxInitialAge", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, MaxInitialAge), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialAge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade_MetaData[] = {
		{ "Category", "Procedural" },
		{ "EditCondition", "bCanGrowInShade" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "Whether new seeds are spawned exclusively in shade. Occurs in a second pass after all types that do not spawn in shade have been simulated.\nOnly valid when CanGrowInShade is true." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bSpawnsInShade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade = { "bSpawnsInShade", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "If true, seeds of this type will ignore shade radius during overlap tests with other types." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bCanGrowInShade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade = { "bCanGrowInShade", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialSeedOffset_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "The seed that determines placement of initial seeds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialSeedOffset = { "MaxInitialSeedOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, MaxInitialSeedOffset), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialSeedOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialSeedOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_DistributionSeed_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "The seed that determines placement of initial seeds." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_DistributionSeed = { "DistributionSeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, DistributionSeed), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_DistributionSeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_DistributionSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_SeedsPerStep_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "The number of seeds an instance will spread in a single step of the simulation." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_SeedsPerStep = { "SeedsPerStep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, SeedsPerStep), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_SeedsPerStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_SeedsPerStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_SpreadVariance_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "Specifies how much seed distance varies from the average. For example, a tree with an AverageSpreadDistance 10 and a SpreadVariance 1 will produce seeds with an average distance of 10cm plus or minus 1cm" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_SpreadVariance = { "SpreadVariance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, SpreadVariance), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_SpreadVariance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_SpreadVariance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageSpreadDistance_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "The average distance between the spreading instance and its seeds. For example, a tree with an AverageSpreadDistance 10 will ensure the average distance between the tree and its seeds is 10cm" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageSpreadDistance = { "AverageSpreadDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, AverageSpreadDistance), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageSpreadDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageSpreadDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_InitialSeedDensity_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "Specifies the number of seeds to populate along 10 meters. The number is implicitly squared to cover a 10m x 10m area" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_InitialSeedDensity = { "InitialSeedDensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, InitialSeedDensity), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_InitialSeedDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_InitialSeedDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_NumSteps_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "The number of times we age the species and spread its seeds." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, NumSteps), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_NumSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_NumSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadeRadius_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Collision" },
		{ "ToolTip", "The ShadeRadius determines when two instances overlap. If an instance can grow in the shade this radius is ignored." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadeRadius = { "ShadeRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ShadeRadius), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadeRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Collision" },
		{ "ToolTip", "The CollisionRadius determines when two instances overlap. When two instances overlap a winner will be picked based on rules and priority." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, CollisionRadius), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionRadius_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->IsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected = { "IsSelected", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_HiddenEditorViews_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Bitflag to represent in which editor views this foliage mesh is hidden." },
	};
#endif
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_HiddenEditorViews = { "HiddenEditorViews", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, HiddenEditorViews), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_HiddenEditorViews_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_HiddenEditorViews_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, CustomDepthStencilValue), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If true, the foliage will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bRenderCustomDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Lighting channels that placed foliage will be assigned. Lights with matching channels will affect the foliage.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_LightingChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomNavigableGeometry_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "HideObjectType", "TRUE" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Force navmesh" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomNavigableGeometry = { "CustomNavigableGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, CustomNavigableGeometry), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomNavigableGeometry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomNavigableGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "HideObjectType", "TRUE" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Custom collision for foliage" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_BodyInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_BodyInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If enabled, foliage will render a pre-pass which allows it to occlude other primitives, and also allows\nit to correctly receive DBuffer decals. Enabling this setting may have a negative performance impact." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bUseAsOccluder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls the type of lightmap used for this component." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType = { "LightmapType", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, LightmapType), Z_Construct_UEnum_Engine_ELightmapType, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_OverriddenLightMapRes_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "DisplayName", "Light Map Resolution" },
		{ "EditCondition", "bOverrideLightMapRes" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Overrides the lightmap resolution defined in the static mesh" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_OverriddenLightMapRes = { "OverriddenLightMapRes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, OverriddenLightMapRes), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_OverriddenLightMapRes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_OverriddenLightMapRes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether to override the lightmap resolution defined in the static mesh." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bOverrideLightMapRes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes = { "bOverrideLightMapRes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether the foliage receives decals." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bReceivesDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "EditCondition", "bCastDynamicShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether this foliage should cast dynamic shadows as if it were a two sided material." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bCastShadowAsTwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether the foliage should cast a static shadow from shadow casting lights.  This flag is only used if CastShadow is true." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bCastStaticShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow = { "bCastStaticShadow", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls whether the foliage should cast shadows in the case of non precomputed shadowing.  This flag is only used if CastShadow is true." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bCastDynamicShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow = { "bCastDynamicShadow", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bAffectDistanceFieldLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bAffectDynamicIndirectLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls whether the foliage should cast a shadow or not." },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->CastShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow = { "CastShadow", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Deprecated. Now use the Mobility setting to control static/dynamic lighting" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->bEnableStaticLighting_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting = { "bEnableStaticLighting", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables.\nWhen the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, CullDistance), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_CullDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_CullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_Mobility_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Mobility property to apply to foliage components" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_Mobility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_Mobility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_LowBoundOriginRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "X, Y is origin position and Z is radius..." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LowBoundOriginRadius = { "LowBoundOriginRadius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, LowBoundOriginRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_LowBoundOriginRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_LowBoundOriginRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_MeshBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MeshBounds = { "MeshBounds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, MeshBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_MeshBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_MeshBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_MinimumLayerWeight_MetaData[] = {
		{ "Category", "Placement" },
		{ "HideBehind", "LandscapeLayers" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Specifies the minimum value above which the landscape layer weight value must be, in order for foliage instances to be placed in a specific area" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MinimumLayerWeight = { "MinimumLayerWeight", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, MinimumLayerWeight), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_MinimumLayerWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_MinimumLayerWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionScale_MetaData[] = {
		{ "Category", "Placement" },
		{ "HideBehind", "CollisionWithWorld" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "The foliage instance's collision bounding box will be scaled by the specified amount before performing the overlap check" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionScale = { "CollisionScale", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, CollisionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyCollisionWithWorld" },
		{ "ToolTip", "If checked, an overlap test with existing world geometry is performed before each instance is placed" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->CollisionWithWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld = { "CollisionWithWorld", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayer = { "LandscapeLayer", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, LandscapeLayer_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyLandscapeLayers" },
		{ "ToolTip", "If a layer name is specified, painting on landscape will limit the foliage to areas of landscape with the specified layer painted" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, LandscapeLayers), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers_Inner = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyHeight" },
		{ "ToolTip", "The valid altitude range where foliage instances will be placed, specified using minimum and maximum world coordinate Z values" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, Height), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlopeAngle_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "359" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyGroundSlope" },
		{ "ToolTip", "Foliage instances will only be placed on surfaces sloping in the specified angle range from the horizontal" },
		{ "UIMax", "359" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlopeAngle = { "GroundSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, GroundSlopeAngle), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlopeAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomPitchAngle_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "359" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyRandomPitchAngle" },
		{ "ToolTip", "A random pitch adjustment can be applied to each instance, up to the specified angle in degrees, from the original vertical" },
		{ "UIMax", "359" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomPitchAngle = { "RandomPitchAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, RandomPitchAngle), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomPitchAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyRandomYaw" },
		{ "ToolTip", "If selected, foliage instances will have a random yaw rotation around their vertical axis applied" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->RandomYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw = { "RandomYaw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignMaxAngle_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "359" },
		{ "ClampMin", "0" },
		{ "HideBehind", "AlignToNormal" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "The maximum angle in degrees that foliage instances will be adjusted away from the vertical" },
		{ "UIMax", "359" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignMaxAngle = { "AlignMaxAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, AlignMaxAngle), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignMaxAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignMaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyAlignToNormal" },
		{ "ToolTip", "Whether foliage instances should have their angle adjusted away from vertical to match the normal of the surface they're painted on\nIf AlignToNormal is enabled and RandomYaw is disabled, the instance will be rotated so that the +X axis points down-slope" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->AlignToNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal = { "AlignToNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffset_MetaData[] = {
		{ "Category", "Placement" },
		{ "DisplayName", "Z Offset" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyZOffset" },
		{ "ToolTip", "Specifies a range from minimum to maximum of the offset to apply to a foliage instance's Z location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ZOffset), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "When unchecked, foliage instances will be placed only when the vertex color in the specified channel(s) is above the threshold amount.\nWhen checked, the vertex color must be less than the threshold amount" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert_SetBit(void* Obj)
	{
		((UFoliageType*)Obj)->VertexColorMaskInvert_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert = { "VertexColorMaskInvert", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Specifies the threshold value above which the static mesh vertex color value must be, in order for foliage instances to be placed in a specific area" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskThreshold = { "VertexColorMaskThreshold", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, VertexColorMaskThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "When painting on static meshes, foliage instance placement can be limited to areas where the static mesh has values in the selected vertex color channel(s).\nThis allows a static mesh to mask out certain areas to prevent foliage from being placed there" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMask = { "VertexColorMask", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, VertexColorMask_DEPRECATED), Z_Construct_UEnum_Foliage_FoliageVertexColorMask, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskByChannel_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Foliage.EVertexColorMaskChannel" },
		{ "Category", "Painting" },
		{ "HideBehind", "VertexColorMask" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskByChannel = { "VertexColorMaskByChannel", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VertexColorMaskByChannel, UFoliageType), STRUCT_OFFSET(UFoliageType, VertexColorMaskByChannel), Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskByChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskByChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleZ_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyScaleZ" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's Z Scale property" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ScaleZ), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleY_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyScaleY" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's Y Scale property" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ScaleY), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleX_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyScaleX" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's X Scale property" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, ScaleX), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling_MetaData[] = {
		{ "Category", "Painting" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyScaling" },
		{ "ToolTip", "Specifies foliage instance scaling behavior when painting." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, Scaling), Z_Construct_UEnum_Foliage_EFoliageScaling, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyRadius" },
		{ "ToolTip", "The minimum distance between foliage instances" },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, Radius), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_DensityAdjustmentFactor_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyDensity" },
		{ "ToolTip", "The factor by which to adjust the density of instances. Values >1 will increase density while values <1 will decrease it." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_DensityAdjustmentFactor = { "DensityAdjustmentFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, DensityAdjustmentFactor), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_DensityAdjustmentFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_DensityAdjustmentFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Density / 1Kuu" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Foliage instances will be placed at this density, specified in instances per 1000x1000 unit area" },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, Density), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_Density_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Statics::NewProp_UpdateGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "A GUID that is updated every time the foliage type is modified,\n         so foliage placed in the level can detect the FoliageType has changed." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_UpdateGuid = { "UpdateGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType, UpdateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::NewProp_UpdateGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::NewProp_UpdateGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageType_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MinScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MinGroundSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_EndCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_StartCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinX,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ChangeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ProceduralScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_OverlapPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialSeedOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_DistributionSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_SeedsPerStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_SpreadVariance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageSpreadDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_InitialSeedDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_NumSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionRadius,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_HiddenEditorViews,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LightingChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomNavigableGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_BodyInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_OverriddenLightMapRes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Mobility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LowBoundOriginRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MeshBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MinimumLayerWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlopeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignMaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskByChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_DensityAdjustmentFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_UpdateGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_Statics::ClassParams = {
		&UFoliageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoliageType_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoliageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoliageType, 3345737950);
	template<> FOLIAGE_API UClass* StaticClass<UFoliageType>()
	{
		return UFoliageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoliageType(Z_Construct_UClass_UFoliageType, &UFoliageType::StaticClass, TEXT("/Script/Foliage"), TEXT("UFoliageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFoliageType)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PIEPreviewDeviceSpecification/Public/PIEPreviewDeviceSpecification.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePIEPreviewDeviceSpecification() {}
// Cross Module References
	PIEPREVIEWDEVICESPECIFICATION_API UEnum* Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType();
	UPackage* Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIESwitchDeviceProperties();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIEIOSDeviceProperties();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIEBezelProperties();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIERHIOverrideState();
	PIEPREVIEWDEVICESPECIFICATION_API UClass* Z_Construct_UClass_UPIEPreviewDeviceSpecification_NoRegister();
	PIEPREVIEWDEVICESPECIFICATION_API UClass* Z_Construct_UClass_UPIEPreviewDeviceSpecification();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EPIEPreviewDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType, Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("EPIEPreviewDeviceType"));
		}
		return Singleton;
	}
	template<> PIEPREVIEWDEVICESPECIFICATION_API UEnum* StaticEnum<EPIEPreviewDeviceType>()
	{
		return EPIEPreviewDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPIEPreviewDeviceType(EPIEPreviewDeviceType_StaticEnum, TEXT("/Script/PIEPreviewDeviceSpecification"), TEXT("EPIEPreviewDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Hash() { return 3317368590U; }
	UEnum* Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPIEPreviewDeviceType"), 0, Get_Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPIEPreviewDeviceType::Unset", (int64)EPIEPreviewDeviceType::Unset },
				{ "EPIEPreviewDeviceType::Android", (int64)EPIEPreviewDeviceType::Android },
				{ "EPIEPreviewDeviceType::IOS", (int64)EPIEPreviewDeviceType::IOS },
				{ "EPIEPreviewDeviceType::TVOS", (int64)EPIEPreviewDeviceType::TVOS },
				{ "EPIEPreviewDeviceType::Switch", (int64)EPIEPreviewDeviceType::Switch },
				{ "EPIEPreviewDeviceType::MAX", (int64)EPIEPreviewDeviceType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
				nullptr,
				"EPIEPreviewDeviceType",
				"EPIEPreviewDeviceType",
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
class UScriptStruct* FPIEPreviewDeviceSpecifications::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PIEPREVIEWDEVICESPECIFICATION_API uint32 Get_Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications, Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIEPreviewDeviceSpecifications"), sizeof(FPIEPreviewDeviceSpecifications), Get_Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Hash());
	}
	return Singleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIEPreviewDeviceSpecifications>()
{
	return FPIEPreviewDeviceSpecifications::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIEPreviewDeviceSpecifications(FPIEPreviewDeviceSpecifications::StaticStruct, TEXT("/Script/PIEPreviewDeviceSpecification"), TEXT("PIEPreviewDeviceSpecifications"), false, nullptr, nullptr);
static struct FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEPreviewDeviceSpecifications
{
	FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEPreviewDeviceSpecifications()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIEPreviewDeviceSpecifications")),new UScriptStruct::TCppStructOps<FPIEPreviewDeviceSpecifications>);
	}
} ScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEPreviewDeviceSpecifications;
	struct Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SwitchProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IOSProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AndroidProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BezelProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BezelProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFactors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScaleFactors;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFactors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPI_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PPI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionYImmersiveMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResolutionYImmersiveMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevicePlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DevicePlatform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DevicePlatform_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEPreviewDeviceSpecifications>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_SwitchProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_SwitchProperties = { "SwitchProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, SwitchProperties), Z_Construct_UScriptStruct_FPIESwitchDeviceProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_SwitchProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_SwitchProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_IOSProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_IOSProperties = { "IOSProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, IOSProperties), Z_Construct_UScriptStruct_FPIEIOSDeviceProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_IOSProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_IOSProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_AndroidProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_AndroidProperties = { "AndroidProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, AndroidProperties), Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_AndroidProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_AndroidProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_BezelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_BezelProperties = { "BezelProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, BezelProperties), Z_Construct_UScriptStruct_FPIEBezelProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_BezelProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_BezelProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors = { "ScaleFactors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, ScaleFactors), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors_Inner = { "ScaleFactors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_PPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_PPI = { "PPI", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, PPI), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_PPI_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_PPI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionYImmersiveMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionYImmersiveMode = { "ResolutionYImmersiveMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, ResolutionYImmersiveMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionYImmersiveMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionYImmersiveMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionY_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, ResolutionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionX_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, ResolutionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform = { "DevicePlatform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, DevicePlatform), Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_SwitchProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_IOSProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_AndroidProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_BezelProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_PPI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionYImmersiveMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIEPreviewDeviceSpecifications",
		sizeof(FPIEPreviewDeviceSpecifications),
		alignof(FPIEPreviewDeviceSpecifications),
		Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIEPreviewDeviceSpecifications"), sizeof(FPIEPreviewDeviceSpecifications), Get_Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Hash() { return 1232554801U; }
class UScriptStruct* FPIEBezelProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PIEPREVIEWDEVICESPECIFICATION_API uint32 Get_Z_Construct_UScriptStruct_FPIEBezelProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEBezelProperties, Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIEBezelProperties"), sizeof(FPIEBezelProperties), Get_Z_Construct_UScriptStruct_FPIEBezelProperties_Hash());
	}
	return Singleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIEBezelProperties>()
{
	return FPIEBezelProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIEBezelProperties(FPIEBezelProperties::StaticStruct, TEXT("/Script/PIEPreviewDeviceSpecification"), TEXT("PIEBezelProperties"), false, nullptr, nullptr);
static struct FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEBezelProperties
{
	FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEBezelProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIEBezelProperties")),new UScriptStruct::TCppStructOps<FPIEBezelProperties>);
	}
} ScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEBezelProperties;
	struct Z_Construct_UScriptStruct_FPIEBezelProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BezelViewportRect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BezelViewportRect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceBezelFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceBezelFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEBezelProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_BezelViewportRect_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_BezelViewportRect = { "BezelViewportRect", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEBezelProperties, BezelViewportRect), Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_BezelViewportRect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_BezelViewportRect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_DeviceBezelFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_DeviceBezelFile = { "DeviceBezelFile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEBezelProperties, DeviceBezelFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_DeviceBezelFile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_DeviceBezelFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_BezelViewportRect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_DeviceBezelFile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIEBezelProperties",
		sizeof(FPIEBezelProperties),
		alignof(FPIEBezelProperties),
		Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEBezelProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIEBezelProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIEBezelProperties"), sizeof(FPIEBezelProperties), Get_Z_Construct_UScriptStruct_FPIEBezelProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIEBezelProperties_Hash() { return 447910006U; }
class UScriptStruct* FPIEPreviewDeviceBezelViewportRect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PIEPREVIEWDEVICESPECIFICATION_API uint32 Get_Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect, Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIEPreviewDeviceBezelViewportRect"), sizeof(FPIEPreviewDeviceBezelViewportRect), Get_Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Hash());
	}
	return Singleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIEPreviewDeviceBezelViewportRect>()
{
	return FPIEPreviewDeviceBezelViewportRect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect(FPIEPreviewDeviceBezelViewportRect::StaticStruct, TEXT("/Script/PIEPreviewDeviceSpecification"), TEXT("PIEPreviewDeviceBezelViewportRect"), false, nullptr, nullptr);
static struct FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEPreviewDeviceBezelViewportRect
{
	FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEPreviewDeviceBezelViewportRect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIEPreviewDeviceBezelViewportRect")),new UScriptStruct::TCppStructOps<FPIEPreviewDeviceBezelViewportRect>);
	}
} ScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEPreviewDeviceBezelViewportRect;
	struct Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEPreviewDeviceBezelViewportRect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceBezelViewportRect, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceBezelViewportRect, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceBezelViewportRect, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Y_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewDeviceBezelViewportRect, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_X_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_X_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_X,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIEPreviewDeviceBezelViewportRect",
		sizeof(FPIEPreviewDeviceBezelViewportRect),
		alignof(FPIEPreviewDeviceBezelViewportRect),
		Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIEPreviewDeviceBezelViewportRect"), sizeof(FPIEPreviewDeviceBezelViewportRect), Get_Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Hash() { return 1589180003U; }
class UScriptStruct* FPIESwitchDeviceProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PIEPREVIEWDEVICESPECIFICATION_API uint32 Get_Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties, Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIESwitchDeviceProperties"), sizeof(FPIESwitchDeviceProperties), Get_Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Hash());
	}
	return Singleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIESwitchDeviceProperties>()
{
	return FPIESwitchDeviceProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIESwitchDeviceProperties(FPIESwitchDeviceProperties::StaticStruct, TEXT("/Script/PIEPreviewDeviceSpecification"), TEXT("PIESwitchDeviceProperties"), false, nullptr, nullptr);
static struct FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIESwitchDeviceProperties
{
	FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIESwitchDeviceProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIESwitchDeviceProperties")),new UScriptStruct::TCppStructOps<FPIESwitchDeviceProperties>);
	}
} ScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIESwitchDeviceProperties;
	struct Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Docked_MetaData[];
#endif
		static void NewProp_Docked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Docked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIESwitchDeviceProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked_SetBit(void* Obj)
	{
		((FPIESwitchDeviceProperties*)Obj)->Docked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked = { "Docked", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPIESwitchDeviceProperties), &Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIESwitchDeviceProperties",
		sizeof(FPIESwitchDeviceProperties),
		alignof(FPIESwitchDeviceProperties),
		Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIESwitchDeviceProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIESwitchDeviceProperties"), sizeof(FPIESwitchDeviceProperties), Get_Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Hash() { return 609796503U; }
class UScriptStruct* FPIEIOSDeviceProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PIEPREVIEWDEVICESPECIFICATION_API uint32 Get_Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties, Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIEIOSDeviceProperties"), sizeof(FPIEIOSDeviceProperties), Get_Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Hash());
	}
	return Singleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIEIOSDeviceProperties>()
{
	return FPIEIOSDeviceProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIEIOSDeviceProperties(FPIEIOSDeviceProperties::StaticStruct, TEXT("/Script/PIEPreviewDeviceSpecification"), TEXT("PIEIOSDeviceProperties"), false, nullptr, nullptr);
static struct FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEIOSDeviceProperties
{
	FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEIOSDeviceProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIEIOSDeviceProperties")),new UScriptStruct::TCppStructOps<FPIEIOSDeviceProperties>);
	}
} ScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEIOSDeviceProperties;
	struct Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetalRHIState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetalRHIState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GLES2RHIState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GLES2RHIState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NativeScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEIOSDeviceProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_MetalRHIState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_MetalRHIState = { "MetalRHIState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEIOSDeviceProperties, MetalRHIState), Z_Construct_UScriptStruct_FPIERHIOverrideState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_MetalRHIState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_MetalRHIState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_GLES2RHIState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_GLES2RHIState = { "GLES2RHIState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEIOSDeviceProperties, GLES2RHIState), Z_Construct_UScriptStruct_FPIERHIOverrideState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_GLES2RHIState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_GLES2RHIState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_NativeScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_NativeScaleFactor = { "NativeScaleFactor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEIOSDeviceProperties, NativeScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_NativeScaleFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_NativeScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_DeviceModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEIOSDeviceProperties, DeviceModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_DeviceModel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_DeviceModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_MetalRHIState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_GLES2RHIState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_NativeScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_DeviceModel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIEIOSDeviceProperties",
		sizeof(FPIEIOSDeviceProperties),
		alignof(FPIEIOSDeviceProperties),
		Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEIOSDeviceProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIEIOSDeviceProperties"), sizeof(FPIEIOSDeviceProperties), Get_Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Hash() { return 1155411107U; }
class UScriptStruct* FPIEAndroidDeviceProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PIEPREVIEWDEVICESPECIFICATION_API uint32 Get_Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties, Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIEAndroidDeviceProperties"), sizeof(FPIEAndroidDeviceProperties), Get_Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Hash());
	}
	return Singleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIEAndroidDeviceProperties>()
{
	return FPIEAndroidDeviceProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIEAndroidDeviceProperties(FPIEAndroidDeviceProperties::StaticStruct, TEXT("/Script/PIEPreviewDeviceSpecification"), TEXT("PIEAndroidDeviceProperties"), false, nullptr, nullptr);
static struct FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEAndroidDeviceProperties
{
	FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEAndroidDeviceProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIEAndroidDeviceProperties")),new UScriptStruct::TCppStructOps<FPIEAndroidDeviceProperties>);
	}
} ScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIEAndroidDeviceProperties;
	struct Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GLES31RHIState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GLES31RHIState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GLES2RHIState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GLES2RHIState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsingHoudini_MetaData[];
#endif
		static void NewProp_UsingHoudini_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsingHoudini;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VulkanAvailable_MetaData[];
#endif
		static void NewProp_VulkanAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VulkanAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceBuildNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceBuildNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceMake_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceMake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VulkanVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VulkanVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GLVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GLVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUFamily_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GPUFamily;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEAndroidDeviceProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES31RHIState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES31RHIState = { "GLES31RHIState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEAndroidDeviceProperties, GLES31RHIState), Z_Construct_UScriptStruct_FPIERHIOverrideState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES31RHIState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES31RHIState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES2RHIState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES2RHIState = { "GLES2RHIState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEAndroidDeviceProperties, GLES2RHIState), Z_Construct_UScriptStruct_FPIERHIOverrideState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES2RHIState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES2RHIState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini_SetBit(void* Obj)
	{
		((FPIEAndroidDeviceProperties*)Obj)->UsingHoudini = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini = { "UsingHoudini", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPIEAndroidDeviceProperties), &Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable_SetBit(void* Obj)
	{
		((FPIEAndroidDeviceProperties*)Obj)->VulkanAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable = { "VulkanAvailable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPIEAndroidDeviceProperties), &Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceBuildNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceBuildNumber = { "DeviceBuildNumber", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEAndroidDeviceProperties, DeviceBuildNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceBuildNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceBuildNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEAndroidDeviceProperties, DeviceModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceModel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceMake_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceMake = { "DeviceMake", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEAndroidDeviceProperties, DeviceMake), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceMake_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceMake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_AndroidVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_AndroidVersion = { "AndroidVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEAndroidDeviceProperties, AndroidVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_AndroidVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_AndroidVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanVersion = { "VulkanVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEAndroidDeviceProperties, VulkanVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLVersion = { "GLVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEAndroidDeviceProperties, GLVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GPUFamily_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GPUFamily = { "GPUFamily", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEAndroidDeviceProperties, GPUFamily), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GPUFamily_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GPUFamily_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES31RHIState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES2RHIState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceBuildNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceMake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_AndroidVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GPUFamily,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIEAndroidDeviceProperties",
		sizeof(FPIEAndroidDeviceProperties),
		alignof(FPIEAndroidDeviceProperties),
		Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIEAndroidDeviceProperties"), sizeof(FPIEAndroidDeviceProperties), Get_Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Hash() { return 1827906726U; }
class UScriptStruct* FPIERHIOverrideState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PIEPREVIEWDEVICESPECIFICATION_API uint32 Get_Z_Construct_UScriptStruct_FPIERHIOverrideState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIERHIOverrideState, Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIERHIOverrideState"), sizeof(FPIERHIOverrideState), Get_Z_Construct_UScriptStruct_FPIERHIOverrideState_Hash());
	}
	return Singleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIERHIOverrideState>()
{
	return FPIERHIOverrideState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIERHIOverrideState(FPIERHIOverrideState::StaticStruct, TEXT("/Script/PIEPreviewDeviceSpecification"), TEXT("PIERHIOverrideState"), false, nullptr, nullptr);
static struct FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIERHIOverrideState
{
	FScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIERHIOverrideState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIERHIOverrideState")),new UScriptStruct::TCppStructOps<FPIERHIOverrideState>);
	}
} ScriptStruct_PIEPreviewDeviceSpecification_StaticRegisterNativesFPIERHIOverrideState;
	struct Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportsInstancing_MetaData[];
#endif
		static void NewProp_SupportsInstancing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SupportsInstancing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportsMultipleRenderTargets_MetaData[];
#endif
		static void NewProp_SupportsMultipleRenderTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SupportsMultipleRenderTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_MetaData[];
#endif
		static void NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SupportsRenderTargetFormat_PF_FloatRGBA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportsRenderTargetFormat_PF_G8_MetaData[];
#endif
		static void NewProp_SupportsRenderTargetFormat_PF_G8_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SupportsRenderTargetFormat_PF_G8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCubeTextureDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCubeTextureDimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTextureDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTextureDimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxShadowDepthBufferSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxShadowDepthBufferSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxShadowDepthBufferSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxShadowDepthBufferSizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIERHIOverrideState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsInstancing_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsInstancing_SetBit(void* Obj)
	{
		((FPIERHIOverrideState*)Obj)->SupportsInstancing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsInstancing = { "SupportsInstancing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPIERHIOverrideState), &Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsInstancing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsInstancing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsInstancing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets_SetBit(void* Obj)
	{
		((FPIERHIOverrideState*)Obj)->SupportsMultipleRenderTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets = { "SupportsMultipleRenderTargets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPIERHIOverrideState), &Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_SetBit(void* Obj)
	{
		((FPIERHIOverrideState*)Obj)->SupportsRenderTargetFormat_PF_FloatRGBA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA = { "SupportsRenderTargetFormat_PF_FloatRGBA", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPIERHIOverrideState), &Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8_SetBit(void* Obj)
	{
		((FPIERHIOverrideState*)Obj)->SupportsRenderTargetFormat_PF_G8 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8 = { "SupportsRenderTargetFormat_PF_G8", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPIERHIOverrideState), &Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxCubeTextureDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxCubeTextureDimensions = { "MaxCubeTextureDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIERHIOverrideState, MaxCubeTextureDimensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxCubeTextureDimensions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxCubeTextureDimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxTextureDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxTextureDimensions = { "MaxTextureDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIERHIOverrideState, MaxTextureDimensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxTextureDimensions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxTextureDimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeY_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeY = { "MaxShadowDepthBufferSizeY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIERHIOverrideState, MaxShadowDepthBufferSizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeX_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeX = { "MaxShadowDepthBufferSizeX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIERHIOverrideState, MaxShadowDepthBufferSizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsInstancing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxCubeTextureDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxTextureDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIERHIOverrideState",
		sizeof(FPIERHIOverrideState),
		alignof(FPIERHIOverrideState),
		Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIERHIOverrideState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIERHIOverrideState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIERHIOverrideState"), sizeof(FPIERHIOverrideState), Get_Z_Construct_UScriptStruct_FPIERHIOverrideState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIERHIOverrideState_Hash() { return 1561699727U; }
	void UPIEPreviewDeviceSpecification::StaticRegisterNativesUPIEPreviewDeviceSpecification()
	{
	}
	UClass* Z_Construct_UClass_UPIEPreviewDeviceSpecification_NoRegister()
	{
		return UPIEPreviewDeviceSpecification::StaticClass();
	}
	struct Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsingHoudini_MetaData[];
#endif
		static void NewProp_UsingHoudini_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsingHoudini;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceBuildNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceBuildNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceMake_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceMake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VulkanVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VulkanVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GLVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GLVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUFamily_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GPUFamily;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewDeviceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviewDeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewDeviceType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PIEPreviewDeviceSpecification.h" },
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini_SetBit(void* Obj)
	{
		((UPIEPreviewDeviceSpecification*)Obj)->UsingHoudini = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini = { "UsingHoudini", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPIEPreviewDeviceSpecification), &Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceBuildNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceBuildNumber = { "DeviceBuildNumber", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, DeviceBuildNumber), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceBuildNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceBuildNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, DeviceModel), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceMake_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceMake = { "DeviceMake", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, DeviceMake), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceMake_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceMake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_AndroidVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_AndroidVersion = { "AndroidVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, AndroidVersion), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_AndroidVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_AndroidVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_VulkanVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_VulkanVersion = { "VulkanVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, VulkanVersion), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_VulkanVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_VulkanVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GLVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GLVersion = { "GLVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, GLVersion), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GLVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GLVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GPUFamily_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GPUFamily = { "GPUFamily", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, GPUFamily), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GPUFamily_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GPUFamily_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType = { "PreviewDeviceType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, PreviewDeviceType), Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType, METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceBuildNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceMake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_AndroidVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_VulkanVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GLVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GPUFamily,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPIEPreviewDeviceSpecification>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::ClassParams = {
		&UPIEPreviewDeviceSpecification::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPIEPreviewDeviceSpecification()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPIEPreviewDeviceSpecification, 3129334615);
	template<> PIEPREVIEWDEVICESPECIFICATION_API UClass* StaticClass<UPIEPreviewDeviceSpecification>()
	{
		return UPIEPreviewDeviceSpecification::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPIEPreviewDeviceSpecification(Z_Construct_UClass_UPIEPreviewDeviceSpecification, &UPIEPreviewDeviceSpecification::StaticClass, TEXT("/Script/PIEPreviewDeviceSpecification"), TEXT("UPIEPreviewDeviceSpecification"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPIEPreviewDeviceSpecification);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

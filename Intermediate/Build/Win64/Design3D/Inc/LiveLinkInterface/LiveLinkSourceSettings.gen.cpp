// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkSourceSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSourceSettings() {}
// Cross Module References
	LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ELiveLinkSourceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("ELiveLinkSourceMode"));
		}
		return Singleton;
	}
	template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkSourceMode>()
	{
		return ELiveLinkSourceMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELiveLinkSourceMode(ELiveLinkSourceMode_StaticEnum, TEXT("/Script/LiveLinkInterface"), TEXT("ELiveLinkSourceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Hash() { return 367583648U; }
	UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELiveLinkSourceMode"), 0, Get_Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELiveLinkSourceMode::Default", (int64)ELiveLinkSourceMode::Default },
				{ "ELiveLinkSourceMode::Interpolated", (int64)ELiveLinkSourceMode::Interpolated },
				{ "ELiveLinkSourceMode::TimeSynchronized", (int64)ELiveLinkSourceMode::TimeSynchronized },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Interpolated.ToolTip", "! The source will be run in default mode.\n! This mode will not attempt any type of interpolation, time synchronization,\n! or other processing." },
				{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
				{ "TimeSynchronized.ToolTip", "! The source will be run in interpolated mode.\n! This mode will use FLiveLinkInterpolationSettings and is most useful\n! when smooth animation is desired." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				"ELiveLinkSourceMode",
				"ELiveLinkSourceMode",
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
class UScriptStruct* FLiveLinkInterpolationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkInterpolationSettings"), sizeof(FLiveLinkInterpolationSettings), Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkInterpolationSettings>()
{
	return FLiveLinkInterpolationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkInterpolationSettings(FLiveLinkInterpolationSettings::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkInterpolationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkInterpolationSettings
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkInterpolationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkInterpolationSettings")),new UScriptStruct::TCppStructOps<FLiveLinkInterpolationSettings>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkInterpolationSettings;
	struct Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationOffset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInterpolation_MetaData[];
#endif
		static void NewProp_bUseInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInterpolation;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkInterpolationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When interpolating: how far back from current time should we read the buffer (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset = { "InterpolationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkInterpolationSettings, InterpolationOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Unused\nUE_DEPRECATED(4.21, \"Please use ULiveLinkSourceSettings::Mode to specify how the source will behave.\")" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_SetBit(void* Obj)
	{
		((FLiveLinkInterpolationSettings*)Obj)->bUseInterpolation_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation = { "bUseInterpolation", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkInterpolationSettings), &Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkInterpolationSettings",
		sizeof(FLiveLinkInterpolationSettings),
		alignof(FLiveLinkInterpolationSettings),
		Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkInterpolationSettings"), sizeof(FLiveLinkInterpolationSettings), Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Hash() { return 1389590447U; }
class UScriptStruct* FLiveLinkTimeSynchronizationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTimeSynchronizationSettings"), sizeof(FLiveLinkTimeSynchronizationSettings), Get_Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTimeSynchronizationSettings>()
{
	return FLiveLinkTimeSynchronizationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTimeSynchronizationSettings(FLiveLinkTimeSynchronizationSettings::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkTimeSynchronizationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeSynchronizationSettings
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeSynchronizationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkTimeSynchronizationSettings")),new UScriptStruct::TCppStructOps<FLiveLinkTimeSynchronizationSettings>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeSynchronizationSettings;
	struct Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTimeSynchronizationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "The frame rate of the source.\nThis should be the frame rate the source is \"stamped\" at, not necessarily the frame rate the source is sending.\nThe source should supply this whenever possible." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTimeSynchronizationSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkTimeSynchronizationSettings",
		sizeof(FLiveLinkTimeSynchronizationSettings),
		alignof(FLiveLinkTimeSynchronizationSettings),
		Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTimeSynchronizationSettings"), sizeof(FLiveLinkTimeSynchronizationSettings), Get_Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Hash() { return 2832959768U; }
	void ULiveLinkSourceSettings::StaticRegisterNativesULiveLinkSourceSettings()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister()
	{
		return ULiveLinkSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSynchronizationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeSynchronizationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpolationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Base class for live link source settings (can be replaced by sources themselves)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_TimeSynchronizationSettings_MetaData[] = {
		{ "Category", "Time Synchronization Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Only used when Mode is set to TimeSynchronized." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_TimeSynchronizationSettings = { "TimeSynchronizationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, TimeSynchronizationSettings), Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_TimeSynchronizationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_TimeSynchronizationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_InterpolationSettings_MetaData[] = {
		{ "Category", "Interpolation Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Only used when Mode is set to Interpolated." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_InterpolationSettings = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, InterpolationSettings), Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_InterpolationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_InterpolationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Mode" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, Mode), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_TimeSynchronizationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_InterpolationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSourceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::ClassParams = {
		&ULiveLinkSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSourceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkSourceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkSourceSettings, 1018311193);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkSourceSettings>()
	{
		return ULiveLinkSourceSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkSourceSettings(Z_Construct_UClass_ULiveLinkSourceSettings, &ULiveLinkSourceSettings::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkSourceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSourceSettings);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkSourceSettings)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

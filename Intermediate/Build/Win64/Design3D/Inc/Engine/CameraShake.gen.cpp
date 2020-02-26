// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShake() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInitialOscillatorOffset();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOscillatorWaveform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVOscillator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFOscillator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FROscillator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraShake_ReceiveIsFinished();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraShake_ReceivePlayShake();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraShake_ReceiveStopShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnimInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
// End Cross Module References
	static UEnum* EInitialOscillatorOffset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInitialOscillatorOffset, Z_Construct_UPackage__Script_Engine(), TEXT("EInitialOscillatorOffset"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInitialOscillatorOffset>()
	{
		return EInitialOscillatorOffset_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInitialOscillatorOffset(EInitialOscillatorOffset_StaticEnum, TEXT("/Script/Engine"), TEXT("EInitialOscillatorOffset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInitialOscillatorOffset_Hash() { return 1176203272U; }
	UEnum* Z_Construct_UEnum_Engine_EInitialOscillatorOffset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInitialOscillatorOffset"), 0, Get_Z_Construct_UEnum_Engine_EInitialOscillatorOffset_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOO_OffsetRandom", (int64)EOO_OffsetRandom },
				{ "EOO_OffsetZero", (int64)EOO_OffsetZero },
				{ "EOO_MAX", (int64)EOO_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EOO_OffsetRandom.DisplayName", "Random" },
				{ "EOO_OffsetRandom.ToolTip", "Start with random offset (default)." },
				{ "EOO_OffsetZero.DisplayName", "Zero" },
				{ "EOO_OffsetZero.ToolTip", "Start with zero offset." },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "ToolTip", "Shake start offset parameter" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EInitialOscillatorOffset",
				"EInitialOscillatorOffset",
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
	static UEnum* EOscillatorWaveform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOscillatorWaveform, Z_Construct_UPackage__Script_Engine(), TEXT("EOscillatorWaveform"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EOscillatorWaveform>()
	{
		return EOscillatorWaveform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOscillatorWaveform(EOscillatorWaveform_StaticEnum, TEXT("/Script/Engine"), TEXT("EOscillatorWaveform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EOscillatorWaveform_Hash() { return 617926884U; }
	UEnum* Z_Construct_UEnum_Engine_EOscillatorWaveform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOscillatorWaveform"), 0, Get_Z_Construct_UEnum_Engine_EOscillatorWaveform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOscillatorWaveform::SineWave", (int64)EOscillatorWaveform::SineWave },
				{ "EOscillatorWaveform::PerlinNoise", (int64)EOscillatorWaveform::PerlinNoise },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
				{ "PerlinNoise.ToolTip", "Perlin noise" },
				{ "SineWave.ToolTip", "A sinusoidal wave" },
				{ "ToolTip", "Types of waveforms that can be used for camera shake oscillators" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EOscillatorWaveform",
				"EOscillatorWaveform",
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
class UScriptStruct* FVOscillator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVOscillator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVOscillator, Z_Construct_UPackage__Script_Engine(), TEXT("VOscillator"), sizeof(FVOscillator), Get_Z_Construct_UScriptStruct_FVOscillator_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVOscillator>()
{
	return FVOscillator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVOscillator(FVOscillator::StaticStruct, TEXT("/Script/Engine"), TEXT("VOscillator"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVOscillator
{
	FScriptStruct_Engine_StaticRegisterNativesFVOscillator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VOscillator")),new UScriptStruct::TCppStructOps<FVOscillator>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVOscillator;
	struct Z_Construct_UScriptStruct_FVOscillator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Defines FVector oscillation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVOscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVOscillator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "VOscillator" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Oscillation in the Z axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVOscillator, Z), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "VOscillator" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Oscillation in the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVOscillator, Y), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X_MetaData[] = {
		{ "Category", "VOscillator" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Oscillation in the X axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVOscillator, X), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVOscillator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVOscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VOscillator",
		sizeof(FVOscillator),
		alignof(FVOscillator),
		Z_Construct_UScriptStruct_FVOscillator_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVOscillator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVOscillator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VOscillator"), sizeof(FVOscillator), Get_Z_Construct_UScriptStruct_FVOscillator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVOscillator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVOscillator_Hash() { return 769169054U; }
class UScriptStruct* FROscillator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FROscillator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FROscillator, Z_Construct_UPackage__Script_Engine(), TEXT("ROscillator"), sizeof(FROscillator), Get_Z_Construct_UScriptStruct_FROscillator_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FROscillator>()
{
	return FROscillator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FROscillator(FROscillator::StaticStruct, TEXT("/Script/Engine"), TEXT("ROscillator"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFROscillator
{
	FScriptStruct_Engine_StaticRegisterNativesFROscillator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ROscillator")),new UScriptStruct::TCppStructOps<FROscillator>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFROscillator;
	struct Z_Construct_UScriptStruct_FROscillator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Defines FRotator oscillation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FROscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROscillator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "ROscillator" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Roll oscillation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FROscillator, Roll), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "ROscillator" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Yaw oscillation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FROscillator, Yaw), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "ROscillator" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Pitch oscillation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FROscillator, Pitch), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROscillator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ROscillator",
		sizeof(FROscillator),
		alignof(FROscillator),
		Z_Construct_UScriptStruct_FROscillator_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FROscillator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FROscillator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ROscillator"), sizeof(FROscillator), Get_Z_Construct_UScriptStruct_FROscillator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FROscillator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FROscillator_Hash() { return 2548237444U; }
class UScriptStruct* FFOscillator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFOscillator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFOscillator, Z_Construct_UPackage__Script_Engine(), TEXT("FOscillator"), sizeof(FFOscillator), Get_Z_Construct_UScriptStruct_FFOscillator_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFOscillator>()
{
	return FFOscillator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFOscillator(FFOscillator::StaticStruct, TEXT("/Script/Engine"), TEXT("FOscillator"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFOscillator
{
	FScriptStruct_Engine_StaticRegisterNativesFFOscillator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FOscillator")),new UScriptStruct::TCppStructOps<FFOscillator>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFOscillator;
	struct Z_Construct_UScriptStruct_FFOscillator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waveform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Waveform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Waveform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Defines oscillation of a single number." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFOscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFOscillator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Type of waveform to use for oscillation." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform = { "Waveform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFOscillator, Waveform), Z_Construct_UEnum_Engine_EOscillatorWaveform, METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Defines how to begin (either at zero, or at a randomized value." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset = { "InitialOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFOscillator, InitialOffset), Z_Construct_UEnum_Engine_EInitialOscillatorOffset, METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Frequency of the sinusoidal oscillation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFOscillator, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Amplitude of the sinusoidal oscillation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFOscillator, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFOscillator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFOscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FOscillator",
		sizeof(FFOscillator),
		alignof(FFOscillator),
		Z_Construct_UScriptStruct_FFOscillator_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFOscillator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFOscillator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FOscillator"), sizeof(FFOscillator), Get_Z_Construct_UScriptStruct_FFOscillator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFOscillator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFOscillator_Hash() { return 2605718466U; }
	static FName NAME_UCameraShake_BlueprintUpdateCameraShake = FName(TEXT("BlueprintUpdateCameraShake"));
	void UCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo const& POV, FMinimalViewInfo& ModifiedPOV)
	{
		CameraShake_eventBlueprintUpdateCameraShake_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.Alpha=Alpha;
		Parms.POV=POV;
		Parms.ModifiedPOV=ModifiedPOV;
		ProcessEvent(FindFunctionChecked(NAME_UCameraShake_BlueprintUpdateCameraShake),&Parms);
		ModifiedPOV=Parms.ModifiedPOV;
	}
	static FName NAME_UCameraShake_ReceiveIsFinished = FName(TEXT("ReceiveIsFinished"));
	bool UCameraShake::ReceiveIsFinished() const
	{
		CameraShake_eventReceiveIsFinished_Parms Parms;
		const_cast<UCameraShake*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCameraShake_ReceiveIsFinished),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UCameraShake_ReceivePlayShake = FName(TEXT("ReceivePlayShake"));
	void UCameraShake::ReceivePlayShake(float Scale)
	{
		CameraShake_eventReceivePlayShake_Parms Parms;
		Parms.Scale=Scale;
		ProcessEvent(FindFunctionChecked(NAME_UCameraShake_ReceivePlayShake),&Parms);
	}
	static FName NAME_UCameraShake_ReceiveStopShake = FName(TEXT("ReceiveStopShake"));
	void UCameraShake::ReceiveStopShake(bool bImmediately)
	{
		CameraShake_eventReceiveStopShake_Parms Parms;
		Parms.bImmediately=bImmediately ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCameraShake_ReceiveStopShake),&Parms);
	}
	void UCameraShake::StaticRegisterNativesUCameraShake()
	{
		UClass* Class = UCameraShake::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveIsFinished", &UCameraShake::execReceiveIsFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedPOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_POV;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_ModifiedPOV = { "ModifiedPOV", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShake_eventBlueprintUpdateCameraShake_Parms, ModifiedPOV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShake_eventBlueprintUpdateCameraShake_Parms, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShake_eventBlueprintUpdateCameraShake_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShake_eventBlueprintUpdateCameraShake_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_ModifiedPOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Called every tick to let the shake modify the point of view" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShake, nullptr, "BlueprintUpdateCameraShake", sizeof(CameraShake_eventBlueprintUpdateCameraShake_Parms), Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraShake_eventReceiveIsFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraShake_eventReceiveIsFinished_Parms), &Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Called to allow a shake to decide when it's finished playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShake, nullptr, "ReceiveIsFinished", sizeof(CameraShake_eventReceiveIsFinished_Parms), Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShake_ReceiveIsFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShake_ReceiveIsFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShake_eventReceivePlayShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Called when the shake starts playing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShake, nullptr, "ReceivePlayShake", sizeof(CameraShake_eventReceivePlayShake_Parms), Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShake_ReceivePlayShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShake_ReceivePlayShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics
	{
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((CameraShake_eventReceiveStopShake_Parms*)Obj)->bImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraShake_eventReceiveStopShake_Parms), &Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Called when the shake is explicitly stopped.\n@param bImmediatly           If true, shake stops right away regardless of blend out settings. If false, shake may blend out according to its settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShake, nullptr, "ReceiveStopShake", sizeof(CameraShake_eventReceiveStopShake_Parms), Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShake_ReceiveStopShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShake_ReceiveStopShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraShake_NoRegister()
	{
		return UCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillatorTimeRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillatorTimeRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomAnimSegment_MetaData[];
#endif
		static void NewProp_bRandomAnimSegment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomAnimSegment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomAnimSegmentDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomAnimSegmentDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimBlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimBlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVOscillation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FOVOscillation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocOscillation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocOscillation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotOscillation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotOscillation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationBlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillationBlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationBlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillationBlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleInstance_MetaData[];
#endif
		static void NewProp_bSingleInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraShake_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraShake_BlueprintUpdateCameraShake, "BlueprintUpdateCameraShake" }, // 2209958025
		{ &Z_Construct_UFunction_UCameraShake_ReceiveIsFinished, "ReceiveIsFinished" }, // 4008942126
		{ &Z_Construct_UFunction_UCameraShake_ReceivePlayShake, "ReceivePlayShake" }, // 1148272994
		{ &Z_Construct_UFunction_UCameraShake_ReceiveStopShake, "ReceiveStopShake" }, // 3950410177
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/CameraShake.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "A CameraShake is an asset that defines how to shake the camera in\na particular way. CameraShakes can be authored as either oscillating shakes,\nanimated shakes, or both.\n\nAn oscillating shake will sinusoidally vibrate various camera parameters over time. Each location\nand rotation axis can be oscillated independently with different parameters to create complex and\nrandom-feeling shakes. These are easier to author and tweak, but can still feel mechanical and are\nlimited to vibration-style shakes, such as earthquakes.\n\nAnimated shakes play keyframed camera animations.  These can take more effort to author, but enable\nmore natural-feeling results and things like directional shakes.  For instance, you can have an explosion\nto the camera's right push it primarily to the left." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimInst_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "The playing instance of the CameraAnim-based shake, if any." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimInst = { "AnimInst", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, AnimInst), Z_Construct_UClass_UCameraAnimInst_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimInst_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillatorTimeRemaining_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Time remaining for oscillation shakes. Less than 0.f means shake infinitely." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillatorTimeRemaining = { "OscillatorTimeRemaining", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, OscillatorTimeRemaining), METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillatorTimeRemaining_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillatorTimeRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Overall intensity scale for this shake instance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, ShakeScale), METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_ShakeScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_ShakeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_CameraOwner_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_CameraOwner = { "CameraOwner", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, CameraOwner), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_CameraOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_CameraOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_bRandomAnimSegment_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "If true, play a random snippet of the animation of length Duration.  Implies bLoop and bRandomStartTime = true for the CameraAnim.\nIf false, play the full anim once, non-looped. Useful for getting variety out of a single looped CameraAnim asset." },
	};
#endif
	void Z_Construct_UClass_UCameraShake_Statics::NewProp_bRandomAnimSegment_SetBit(void* Obj)
	{
		((UCameraShake*)Obj)->bRandomAnimSegment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_bRandomAnimSegment = { "bRandomAnimSegment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCameraShake), &Z_Construct_UClass_UCameraShake_Statics::NewProp_bRandomAnimSegment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_bRandomAnimSegment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_bRandomAnimSegment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_Anim_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Source camera animation to play. Can be null." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, Anim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_Anim_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_RandomAnimSegmentDuration_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bRandomAnimSegment" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "When bRandomAnimSegment is true, this defines how long the anim should play." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_RandomAnimSegmentDuration = { "RandomAnimSegmentDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, RandomAnimSegmentDuration), METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_RandomAnimSegmentDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_RandomAnimSegmentDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimBlendOutTime_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Linear blend-out time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimBlendOutTime = { "AnimBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, AnimBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimBlendOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimBlendInTime_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Linear blend-in time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimBlendInTime = { "AnimBlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, AnimBlendInTime), METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimBlendInTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimBlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimScale_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Scalar defining how \"intense\" to play the anim." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimScale = { "AnimScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, AnimScale), METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Scalar defining how fast to play the anim." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, AnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_FOVOscillation_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "FOV oscillation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_FOVOscillation = { "FOVOscillation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, FOVOscillation), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_FOVOscillation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_FOVOscillation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_LocOscillation_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Positional oscillation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_LocOscillation = { "LocOscillation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, LocOscillation), Z_Construct_UScriptStruct_FVOscillator, METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_LocOscillation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_LocOscillation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_RotOscillation_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Rotational oscillation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_RotOscillation = { "RotOscillation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, RotOscillation), Z_Construct_UScriptStruct_FROscillator, METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_RotOscillation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_RotOscillation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationBlendOutTime_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Duration of the blend-out, where the oscillation scales from 1 to 0." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationBlendOutTime = { "OscillationBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, OscillationBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationBlendOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationBlendInTime_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Duration of the blend-in, where the oscillation scales from 0 to 1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationBlendInTime = { "OscillationBlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, OscillationBlendInTime), METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationBlendInTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationBlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationDuration_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "Duration in seconds of current screen shake. Less than 0 means indefinite, 0 means no oscillation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationDuration = { "OscillationDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShake, OscillationDuration), METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShake_Statics::NewProp_bSingleInstance_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShake.h" },
		{ "ToolTip", "If true to only allow a single instance of this shake class to play at any given time.\nSubsequent attempts to play this shake will simply restart the timer." },
	};
#endif
	void Z_Construct_UClass_UCameraShake_Statics::NewProp_bSingleInstance_SetBit(void* Obj)
	{
		((UCameraShake*)Obj)->bSingleInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraShake_Statics::NewProp_bSingleInstance = { "bSingleInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCameraShake), &Z_Construct_UClass_UCameraShake_Statics::NewProp_bSingleInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::NewProp_bSingleInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::NewProp_bSingleInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillatorTimeRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_ShakeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_CameraOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_bRandomAnimSegment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_RandomAnimSegmentDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimBlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimBlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_AnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_FOVOscillation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_LocOscillation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_RotOscillation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationBlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationBlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_OscillationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShake_Statics::NewProp_bSingleInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraShake_Statics::ClassParams = {
		&UCameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraShake_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraShake_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraShake, 2777839101);
	template<> ENGINE_API UClass* StaticClass<UCameraShake>()
	{
		return UCameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraShake(Z_Construct_UClass_UCameraShake, &UCameraShake::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeModulatorContinuous.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeModulatorContinuous() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ModulationParamMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FModulatorContinuousParams();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulatorContinuous_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulatorContinuous();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
// End Cross Module References
	static UEnum* ModulationParamMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ModulationParamMode, Z_Construct_UPackage__Script_Engine(), TEXT("ModulationParamMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ModulationParamMode>()
	{
		return ModulationParamMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ModulationParamMode(ModulationParamMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ModulationParamMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ModulationParamMode_Hash() { return 2355119583U; }
	UEnum* Z_Construct_UEnum_Engine_ModulationParamMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ModulationParamMode"), 0, Get_Z_Construct_UEnum_Engine_ModulationParamMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MPM_Normal", (int64)MPM_Normal },
				{ "MPM_Abs", (int64)MPM_Abs },
				{ "MPM_Direct", (int64)MPM_Direct },
				{ "MPM_MAX", (int64)MPM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
				{ "MPM_Abs.DisplayName", "Absolute" },
				{ "MPM_Abs.Tooltip", "Same as Normal except that the input value is treated as an absolute value" },
				{ "MPM_Direct.DisplayName", "Direct" },
				{ "MPM_Direct.Tooltip", "Use the input value directly without scaling or reference to Min or Max input or output values" },
				{ "MPM_Normal.DisplayName", "Normal" },
				{ "MPM_Normal.Tooltip", "Clamps input value to the range (MinInput, MaxInput) then maps to the range (MinOutput, MaxOutput)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ModulationParamMode",
				"ModulationParamMode",
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
class UScriptStruct* FModulatorContinuousParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModulatorContinuousParams, Z_Construct_UPackage__Script_Engine(), TEXT("ModulatorContinuousParams"), sizeof(FModulatorContinuousParams), Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FModulatorContinuousParams>()
{
	return FModulatorContinuousParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModulatorContinuousParams(FModulatorContinuousParams::StaticStruct, TEXT("/Script/Engine"), TEXT("ModulatorContinuousParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFModulatorContinuousParams
{
	FScriptStruct_Engine_StaticRegisterNativesFModulatorContinuousParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModulatorContinuousParams")),new UScriptStruct::TCppStructOps<FModulatorContinuousParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFModulatorContinuousParams;
	struct Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Default;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModulatorContinuousParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParamMode_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The mode with which to treat the input value" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParamMode = { "ParamMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModulatorContinuousParams, ParamMode), Z_Construct_UEnum_Engine_ModulationParamMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParamMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParamMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxOutput_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The maximum output value. The input value will be scaled from the range [MinInput, MaxInput] to [MinOut, MaxOutput]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxOutput = { "MaxOutput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModulatorContinuousParams, MaxOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxOutput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinOutput_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The minimum output value. The input value will be scaled from the range [MinInput, MaxInput] to [MinOut, MaxOutput]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinOutput = { "MinOutput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModulatorContinuousParams, MinOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinOutput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxInput_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The maximum input value. Values will be clamped to the [MinInput, MaxInput] range." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxInput = { "MaxInput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModulatorContinuousParams, MaxInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinInput_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The minimum input value. Values will be clamped to the [MinInput, MaxInput] range." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinInput = { "MinInput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModulatorContinuousParams, MinInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The default value to be used if the parameter is not found." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModulatorContinuousParams, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_Default_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_Default_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The name of the sound instance parameter that specifies the current value." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModulatorContinuousParams, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParamMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParameterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ModulatorContinuousParams",
		sizeof(FModulatorContinuousParams),
		alignof(FModulatorContinuousParams),
		Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModulatorContinuousParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModulatorContinuousParams"), sizeof(FModulatorContinuousParams), Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_Hash() { return 1745461085U; }
	void USoundNodeModulatorContinuous::StaticRegisterNativesUSoundNodeModulatorContinuous()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeModulatorContinuous_NoRegister()
	{
		return USoundNodeModulatorContinuous::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeModulatorContinuous_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumeModulationParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchModulationParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchModulationParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Continuous Modulator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeModulatorContinuous.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "Allows named parameter based manipulation of pitch and volume" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_VolumeModulationParams_MetaData[] = {
		{ "Category", "ContinuousModulator" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_VolumeModulationParams = { "VolumeModulationParams", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeModulatorContinuous, VolumeModulationParams), Z_Construct_UScriptStruct_FModulatorContinuousParams, METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_VolumeModulationParams_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_VolumeModulationParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_PitchModulationParams_MetaData[] = {
		{ "Category", "ContinuousModulator" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_PitchModulationParams = { "PitchModulationParams", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeModulatorContinuous, PitchModulationParams), Z_Construct_UScriptStruct_FModulatorContinuousParams, METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_PitchModulationParams_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_PitchModulationParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_VolumeModulationParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_PitchModulationParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeModulatorContinuous>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::ClassParams = {
		&USoundNodeModulatorContinuous::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeModulatorContinuous()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeModulatorContinuous, 1138093698);
	template<> ENGINE_API UClass* StaticClass<USoundNodeModulatorContinuous>()
	{
		return USoundNodeModulatorContinuous::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeModulatorContinuous(Z_Construct_UClass_USoundNodeModulatorContinuous, &USoundNodeModulatorContinuous::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeModulatorContinuous"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeModulatorContinuous);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

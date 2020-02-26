// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/PawnNoiseEmitterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnNoiseEmitterComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UPawnNoiseEmitterComponent::StaticRegisterNativesUPawnNoiseEmitterComponent()
	{
		UClass* Class = UPawnNoiseEmitterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeNoise", &UPawnNoiseEmitterComponent::execMakeNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics
	{
		struct PawnNoiseEmitterComponent_eventMakeNoise_Parms
		{
			AActor* NoiseMaker;
			float Loudness;
			FVector NoiseLocation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseMaker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseLocation = { "NoiseLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnNoiseEmitterComponent_eventMakeNoise_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseLocation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnNoiseEmitterComponent_eventMakeNoise_Parms, Loudness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseMaker = { "NoiseMaker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnNoiseEmitterComponent_eventMakeNoise_Parms, NoiseMaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_Loudness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseMaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|PawnNoiseEmitter" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Cache noises instigated by the owning pawn for AI sensing\n@param NoiseMaker - is the actual actor which made the noise\n@param Loudness - is the relative loudness of the noise (0.0 to 1.0)\n@param NoiseLocation - is the position of the noise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnNoiseEmitterComponent, nullptr, "MakeNoise", sizeof(PawnNoiseEmitterComponent_eventMakeNoise_Parms), Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister()
	{
		return UPawnNoiseEmitterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLocalNoiseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastLocalNoiseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLocalNoiseVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastLocalNoiseVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRemoteNoiseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastRemoteNoiseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRemoteNoiseVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastRemoteNoiseVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseLifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRemoteNoisePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRemoteNoisePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAIPerceptionSystemCompatibilityMode_MetaData[];
#endif
		static void NewProp_bAIPerceptionSystemCompatibilityMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAIPerceptionSystemCompatibilityMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise, "MakeNoise" }, // 143545075
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Components/PawnNoiseEmitterComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "PawnNoiseEmitterComponent tracks noise event data used by SensingComponents to hear a Pawn.\nThis component is intended to exist on either a Pawn or its Controller. It does nothing on network clients." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Time of last local noise update" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseTime = { "LastLocalNoiseTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastLocalNoiseTime), METADATA_PARAMS(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseVolume_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Most recent noise made by this pawn at its own location" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseVolume = { "LastLocalNoiseVolume", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastLocalNoiseVolume), METADATA_PARAMS(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Time of last remote noise update" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseTime = { "LastRemoteNoiseTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoiseTime), METADATA_PARAMS(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseVolume_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Most recent volume of noise made by this pawn not at its own location" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseVolume = { "LastRemoteNoiseVolume", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoiseVolume), METADATA_PARAMS(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_NoiseLifetime_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "After this amount of time, new sound events will overwrite previous sounds even if they are not louder (allows old sounds to decay)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_NoiseLifetime = { "NoiseLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, NoiseLifetime), METADATA_PARAMS(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_NoiseLifetime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_NoiseLifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoisePosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Most recent noise made by this pawn not at its own location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoisePosition = { "LastRemoteNoisePosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoisePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoisePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoisePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "If set to true (default value) will notify AIPerceptionSystem about noise events\notherwise only PawnSensingComponents will be able to pick up noises generated by this component" },
	};
#endif
	void Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode_SetBit(void* Obj)
	{
		((UPawnNoiseEmitterComponent*)Obj)->bAIPerceptionSystemCompatibilityMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode = { "bAIPerceptionSystemCompatibilityMode", nullptr, (EPropertyFlags)0x00200c0000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnNoiseEmitterComponent), &Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_NoiseLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoisePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnNoiseEmitterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::ClassParams = {
		&UPawnNoiseEmitterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnNoiseEmitterComponent, 4233484466);
	template<> ENGINE_API UClass* StaticClass<UPawnNoiseEmitterComponent>()
	{
		return UPawnNoiseEmitterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnNoiseEmitterComponent(Z_Construct_UClass_UPawnNoiseEmitterComponent, &UPawnNoiseEmitterComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPawnNoiseEmitterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnNoiseEmitterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundSourceBus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceBus() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESourceBusChannels();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
// End Cross Module References
	static UEnum* ESourceBusChannels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESourceBusChannels, Z_Construct_UPackage__Script_Engine(), TEXT("ESourceBusChannels"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESourceBusChannels>()
	{
		return ESourceBusChannels_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceBusChannels(ESourceBusChannels_StaticEnum, TEXT("/Script/Engine"), TEXT("ESourceBusChannels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESourceBusChannels_Hash() { return 484730246U; }
	UEnum* Z_Construct_UEnum_Engine_ESourceBusChannels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceBusChannels"), 0, Get_Z_Construct_UEnum_Engine_ESourceBusChannels_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESourceBusChannels::Mono", (int64)ESourceBusChannels::Mono },
				{ "ESourceBusChannels::Stereo", (int64)ESourceBusChannels::Stereo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
				{ "ToolTip", "The number of channels to mix audio into the source bus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESourceBusChannels",
				"ESourceBusChannels",
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
	void USoundSourceBus::StaticRegisterNativesUSoundSourceBus()
	{
	}
	UClass* Z_Construct_UClass_USoundSourceBus_NoRegister()
	{
		return USoundSourceBus::StaticClass();
	}
	struct Z_Construct_UClass_USoundSourceBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDeactivateWhenSilent_MetaData[];
#endif
		static void NewProp_bAutoDeactivateWhenSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDeactivateWhenSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBusDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceBusDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBusChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceBusChannels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceBusChannels_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSourceBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWave,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Sound" },
		{ "HideCategories", "Compression SoundWave Streaming Subtitles Sound Info ImportSettings Object Object" },
		{ "IncludePath", "Sound/SoundSourceBus.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "A source bus is a type of USoundBase and can be \"played\" like any sound." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "Stop the source bus when the volume goes to zero." },
		{ "UIMin", "0.000000" },
	};
#endif
	void Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit(void* Obj)
	{
		((USoundSourceBus*)Obj)->bAutoDeactivateWhenSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent = { "bAutoDeactivateWhenSilent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundSourceBus), &Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "The duration (in seconds) to use for the source bus. A duration of 0.0 indicates to play the source bus indefinitely." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration = { "SourceBusDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSourceBus, SourceBusDuration), METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "How many channels to use for the source bus." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels = { "SourceBusChannels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSourceBus, SourceBusChannels), Z_Construct_UEnum_Engine_ESourceBusChannels, METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSourceBus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSourceBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSourceBus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSourceBus_Statics::ClassParams = {
		&USoundSourceBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSourceBus_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSourceBus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSourceBus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSourceBus, 1871903453);
	template<> ENGINE_API UClass* StaticClass<USoundSourceBus>()
	{
		return USoundSourceBus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSourceBus(Z_Construct_UClass_USoundSourceBus, &USoundSourceBus::StaticClass, TEXT("/Script/Engine"), TEXT("USoundSourceBus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSourceBus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

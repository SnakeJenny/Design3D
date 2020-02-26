// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/EngineCustomTimeStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineCustomTimeStep() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECustomTimeStepSynchronizationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState, Z_Construct_UPackage__Script_Engine(), TEXT("ECustomTimeStepSynchronizationState"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECustomTimeStepSynchronizationState>()
	{
		return ECustomTimeStepSynchronizationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomTimeStepSynchronizationState(ECustomTimeStepSynchronizationState_StaticEnum, TEXT("/Script/Engine"), TEXT("ECustomTimeStepSynchronizationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Hash() { return 3110363595U; }
	UEnum* Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomTimeStepSynchronizationState"), 0, Get_Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomTimeStepSynchronizationState::Closed", (int64)ECustomTimeStepSynchronizationState::Closed },
				{ "ECustomTimeStepSynchronizationState::Error", (int64)ECustomTimeStepSynchronizationState::Error },
				{ "ECustomTimeStepSynchronizationState::Synchronized", (int64)ECustomTimeStepSynchronizationState::Synchronized },
				{ "ECustomTimeStepSynchronizationState::Synchronizing", (int64)ECustomTimeStepSynchronizationState::Synchronizing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Closed.ToolTip", "CustomTimeStep has not been initialized or has been shutdown." },
				{ "Error.ToolTip", "CustomTimeStep error occurred during Synchronization." },
				{ "ModuleRelativePath", "Classes/Engine/EngineCustomTimeStep.h" },
				{ "Synchronized.ToolTip", "CustomTimeStep is currently synchronized with the source." },
				{ "Synchronizing.ToolTip", "CustomTimeStep is initialized and being prepared for synchronization." },
				{ "ToolTip", "Possible states of CustomTimeStep." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECustomTimeStepSynchronizationState",
				"ECustomTimeStepSynchronizationState",
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
	void UEngineCustomTimeStep::StaticRegisterNativesUEngineCustomTimeStep()
	{
	}
	UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister()
	{
		return UEngineCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UEngineCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/EngineCustomTimeStep.h" },
		{ "ModuleRelativePath", "Classes/Engine/EngineCustomTimeStep.h" },
		{ "ToolTip", "A CustomTimeStep control the Engine Framerate/Timestep.\nThis will update the FApp::CurrentTime/FApp::DeltaTime.\nThis is useful when you want the engine to be synchronized with an external clock (genlock)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineCustomTimeStep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEngineCustomTimeStep_Statics::ClassParams = {
		&UEngineCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEngineCustomTimeStep_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEngineCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineCustomTimeStep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEngineCustomTimeStep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEngineCustomTimeStep, 1368738316);
	template<> ENGINE_API UClass* StaticClass<UEngineCustomTimeStep>()
	{
		return UEngineCustomTimeStep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEngineCustomTimeStep(Z_Construct_UClass_UEngineCustomTimeStep, &UEngineCustomTimeStep::StaticClass, TEXT("/Script/Engine"), TEXT("UEngineCustomTimeStep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineCustomTimeStep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

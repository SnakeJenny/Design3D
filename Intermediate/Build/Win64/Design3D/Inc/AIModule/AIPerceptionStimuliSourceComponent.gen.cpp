// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AIPerceptionStimuliSourceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionStimuliSourceComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense();
// End Cross Module References
	void UAIPerceptionStimuliSourceComponent::StaticRegisterNativesUAIPerceptionStimuliSourceComponent()
	{
		UClass* Class = UAIPerceptionStimuliSourceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterForSense", &UAIPerceptionStimuliSourceComponent::execRegisterForSense },
			{ "RegisterWithPerceptionSystem", &UAIPerceptionStimuliSourceComponent::execRegisterWithPerceptionSystem },
			{ "UnregisterFromPerceptionSystem", &UAIPerceptionStimuliSourceComponent::execUnregisterFromPerceptionSystem },
			{ "UnregisterFromSense", &UAIPerceptionStimuliSourceComponent::execUnregisterFromSense },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics
	{
		struct AIPerceptionStimuliSourceComponent_eventRegisterForSense_Parms
		{
			TSubclassOf<UAISense>  SenseClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionStimuliSourceComponent_eventRegisterForSense_Parms, SenseClass), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::NewProp_SenseClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ToolTip", "Registers owning actor as source for specified sense class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, nullptr, "RegisterForSense", sizeof(AIPerceptionStimuliSourceComponent_eventRegisterForSense_Parms), Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ToolTip", "Registers owning actor as source of stimuli for senses specified in RegisterAsSourceForSenses.\n    Note that you don't have to do it if bAutoRegisterAsSource == true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, nullptr, "RegisterWithPerceptionSystem", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ToolTip", "Unregister owning actor from being a source of sense stimuli" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, nullptr, "UnregisterFromPerceptionSystem", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics
	{
		struct AIPerceptionStimuliSourceComponent_eventUnregisterFromSense_Parms
		{
			TSubclassOf<UAISense>  SenseClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionStimuliSourceComponent_eventUnregisterFromSense_Parms, SenseClass), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::NewProp_SenseClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ToolTip", "Unregisters owning actor from sources list of a specified sense class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, nullptr, "UnregisterFromSense", sizeof(AIPerceptionStimuliSourceComponent_eventUnregisterFromSense_Parms), Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister()
	{
		return UAIPerceptionStimuliSourceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisterAsSourceForSenses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisterAsSourceForSenses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RegisterAsSourceForSenses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterAsSource_MetaData[];
#endif
		static void NewProp_bAutoRegisterAsSource_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterAsSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense, "RegisterForSense" }, // 3803203495
		{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem, "RegisterWithPerceptionSystem" }, // 669835750
		{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem, "UnregisterFromPerceptionSystem" }, // 1555128620
		{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense, "UnregisterFromSense" }, // 1574859713
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Gives owning actor a way to auto-register as perception system's sense stimuli source" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses = { "RegisterAsSourceForSenses", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionStimuliSourceComponent, RegisterAsSourceForSenses), METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses_Inner = { "RegisterAsSourceForSenses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource_SetBit(void* Obj)
	{
		((UAIPerceptionStimuliSourceComponent*)Obj)->bAutoRegisterAsSource = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource = { "bAutoRegisterAsSource", nullptr, (EPropertyFlags)0x0020080000004015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAIPerceptionStimuliSourceComponent), &Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIPerceptionStimuliSourceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::ClassParams = {
		&UAIPerceptionStimuliSourceComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIPerceptionStimuliSourceComponent, 574240864);
	template<> AIMODULE_API UClass* StaticClass<UAIPerceptionStimuliSourceComponent>()
	{
		return UAIPerceptionStimuliSourceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPerceptionStimuliSourceComponent(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, &UAIPerceptionStimuliSourceComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIPerceptionStimuliSourceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionStimuliSourceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

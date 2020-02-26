// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation();
// End Cross Module References
	static FName NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet = FName(TEXT("ProvideActorsSet"));
	void UEnvQueryContext_BlueprintBase::ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) const
	{
		EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms Parms;
		Parms.QuerierObject=QuerierObject;
		Parms.QuerierActor=QuerierActor;
		Parms.ResultingActorsSet=ResultingActorsSet;
		const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet),&Parms);
		ResultingActorsSet=Parms.ResultingActorsSet;
	}
	static FName NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet = FName(TEXT("ProvideLocationsSet"));
	void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) const
	{
		EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms Parms;
		Parms.QuerierObject=QuerierObject;
		Parms.QuerierActor=QuerierActor;
		Parms.ResultingLocationSet=ResultingLocationSet;
		const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet),&Parms);
		ResultingLocationSet=Parms.ResultingLocationSet;
	}
	static FName NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor = FName(TEXT("ProvideSingleActor"));
	void UEnvQueryContext_BlueprintBase::ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) const
	{
		EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms Parms;
		Parms.QuerierObject=QuerierObject;
		Parms.QuerierActor=QuerierActor;
		Parms.ResultingActor=ResultingActor;
		const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor),&Parms);
		ResultingActor=Parms.ResultingActor;
	}
	static FName NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation = FName(TEXT("ProvideSingleLocation"));
	void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) const
	{
		EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms Parms;
		Parms.QuerierObject=QuerierObject;
		Parms.QuerierActor=QuerierActor;
		Parms.ResultingLocation=ResultingLocation;
		const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation),&Parms);
		ResultingLocation=Parms.ResultingLocation;
	}
	void UEnvQueryContext_BlueprintBase::StaticRegisterNativesUEnvQueryContext_BlueprintBase()
	{
	}
	struct Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultingActorsSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultingActorsSet_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_ResultingActorsSet = { "ResultingActorsSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms, ResultingActorsSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_ResultingActorsSet_Inner = { "ResultingActorsSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_QuerierActor = { "QuerierActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_QuerierObject = { "QuerierObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_ResultingActorsSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_ResultingActorsSet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_QuerierActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_QuerierObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, nullptr, "ProvideActorsSet", sizeof(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms), Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultingLocationSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultingLocationSet_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_ResultingLocationSet = { "ResultingLocationSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms, ResultingLocationSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_ResultingLocationSet_Inner = { "ResultingLocationSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_QuerierActor = { "QuerierActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_QuerierObject = { "QuerierObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_ResultingLocationSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_ResultingLocationSet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_QuerierActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_QuerierObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, nullptr, "ProvideLocationsSet", sizeof(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms), Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultingActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_ResultingActor = { "ResultingActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms, ResultingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_QuerierActor = { "QuerierActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_QuerierObject = { "QuerierObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_ResultingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_QuerierActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_QuerierObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, nullptr, "ProvideSingleActor", sizeof(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms), Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultingLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuerierObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_ResultingLocation = { "ResultingLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms, ResultingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_QuerierActor = { "QuerierActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_QuerierObject = { "QuerierObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_ResultingLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_QuerierActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_QuerierObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, nullptr, "ProvideSingleLocation", sizeof(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms), Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase_NoRegister()
	{
		return UEnvQueryContext_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet, "ProvideActorsSet" }, // 82399392
		{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet, "ProvideLocationsSet" }, // 2388603684
		{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor, "ProvideSingleActor" }, // 2773522640
		{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation, "ProvideSingleLocation" }, // 351426340
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_BlueprintBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::ClassParams = {
		&UEnvQueryContext_BlueprintBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000810A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryContext_BlueprintBase, 1154606333);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryContext_BlueprintBase>()
	{
		return UEnvQueryContext_BlueprintBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryContext_BlueprintBase(Z_Construct_UClass_UEnvQueryContext_BlueprintBase, &UEnvQueryContext_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryContext_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

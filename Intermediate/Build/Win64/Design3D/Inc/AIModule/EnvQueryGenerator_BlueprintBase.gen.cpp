// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	static FName NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration = FName(TEXT("DoItemGeneration"));
	void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<FVector> const& ContextLocations) const
	{
		EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms Parms;
		Parms.ContextLocations=ContextLocations;
		const_cast<UEnvQueryGenerator_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration),&Parms);
	}
	void UEnvQueryGenerator_BlueprintBase::StaticRegisterNativesUEnvQueryGenerator_BlueprintBase()
	{
		UClass* Class = UEnvQueryGenerator_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGeneratedActor", &UEnvQueryGenerator_BlueprintBase::execAddGeneratedActor },
			{ "AddGeneratedVector", &UEnvQueryGenerator_BlueprintBase::execAddGeneratedVector },
			{ "GetQuerier", &UEnvQueryGenerator_BlueprintBase::execGetQuerier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics
	{
		struct EnvQueryGenerator_BlueprintBase_eventAddGeneratedActor_Parms
		{
			AActor* GeneratedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::NewProp_GeneratedActor = { "GeneratedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventAddGeneratedActor_Parms, GeneratedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::NewProp_GeneratedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, nullptr, "AddGeneratedActor", sizeof(EnvQueryGenerator_BlueprintBase_eventAddGeneratedActor_Parms), Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics
	{
		struct EnvQueryGenerator_BlueprintBase_eventAddGeneratedVector_Parms
		{
			FVector GeneratedVector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratedVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::NewProp_GeneratedVector = { "GeneratedVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventAddGeneratedVector_Parms, GeneratedVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::NewProp_GeneratedVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, nullptr, "AddGeneratedVector", sizeof(EnvQueryGenerator_BlueprintBase_eventAddGeneratedVector_Parms), Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContextLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContextLocations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations = { "ContextLocations", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms, ContextLocations), METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations_Inner = { "ContextLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, nullptr, "DoItemGeneration", sizeof(EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms), Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics
	{
		struct EnvQueryGenerator_BlueprintBase_eventGetQuerier_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventGetQuerier_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::Function_MetaDataParams[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, nullptr, "GetQuerier", sizeof(EnvQueryGenerator_BlueprintBase_eventGetQuerier_Parms), Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_NoRegister()
	{
		return UEnvQueryGenerator_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeneratedItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratorsActionDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GeneratorsActionDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor, "AddGeneratedActor" }, // 162490723
		{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector, "AddGeneratedVector" }, // 2838530373
		{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration, "DoItemGeneration" }, // 840178826
		{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier, "GetQuerier" }, // 1132338715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratedItemType_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
		{ "ToolTip", "@todo this should show up only in the generator's BP, but\n    due to the way EQS editor is generating widgets it's there as well\n    It's a bug and we'll fix it" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratedItemType = { "GeneratedItemType", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_BlueprintBase, GeneratedItemType), Z_Construct_UClass_UEnvQueryItemType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratedItemType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratedItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
		{ "ToolTip", "context" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_BlueprintBase, Context), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratorsActionDescription_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
		{ "ToolTip", "A short description of what test does, like \"Generate pawn named Joe\"" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratorsActionDescription = { "GeneratorsActionDescription", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_BlueprintBase, GeneratorsActionDescription), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratorsActionDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratorsActionDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratedItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratorsActionDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_BlueprintBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::ClassParams = {
		&UEnvQueryGenerator_BlueprintBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_BlueprintBase, 2061366624);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_BlueprintBase>()
	{
		return UEnvQueryGenerator_BlueprintBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_BlueprintBase(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, &UEnvQueryGenerator_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

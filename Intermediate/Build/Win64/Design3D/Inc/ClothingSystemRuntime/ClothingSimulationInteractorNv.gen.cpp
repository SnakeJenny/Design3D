// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntime/Public/ClothingSimulationInteractorNv.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractorNv() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingSimulationInteractorNv();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	CLOTHINGSYSTEMRUNTIME_API UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride();
	CLOTHINGSYSTEMRUNTIME_API UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CLOTHINGSYSTEMRUNTIME_API UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness();
	CLOTHINGSYSTEMRUNTIME_API UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness();
// End Cross Module References
	void UClothingSimulationInteractorNv::StaticRegisterNativesUClothingSimulationInteractorNv()
	{
		UClass* Class = UClothingSimulationInteractorNv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableGravityOverride", &UClothingSimulationInteractorNv::execDisableGravityOverride },
			{ "EnableGravityOverride", &UClothingSimulationInteractorNv::execEnableGravityOverride },
			{ "SetAnimDriveDamperStiffness", &UClothingSimulationInteractorNv::execSetAnimDriveDamperStiffness },
			{ "SetAnimDriveSpringStiffness", &UClothingSimulationInteractorNv::execSetAnimDriveSpringStiffness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
		{ "ToolTip", "Disable any currently set gravity override" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractorNv, nullptr, "DisableGravityOverride", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics
	{
		struct ClothingSimulationInteractorNv_eventEnableGravityOverride_Parms
		{
			FVector InVector;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractorNv_eventEnableGravityOverride_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::NewProp_InVector_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::NewProp_InVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::NewProp_InVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
		{ "ToolTip", "Set a new gravity override and enable the override" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractorNv, nullptr, "EnableGravityOverride", sizeof(ClothingSimulationInteractorNv_eventEnableGravityOverride_Parms), Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics
	{
		struct ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms
		{
			float InStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::NewProp_InStiffness = { "InStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms, InStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::NewProp_InStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
		{ "ToolTip", "Set the stiffness of the resistive damping force for anim drive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractorNv, nullptr, "SetAnimDriveDamperStiffness", sizeof(ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms), Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics
	{
		struct ClothingSimulationInteractorNv_eventSetAnimDriveSpringStiffness_Parms
		{
			float InStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics::NewProp_InStiffness = { "InStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractorNv_eventSetAnimDriveSpringStiffness_Parms, InStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics::NewProp_InStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
		{ "ToolTip", "Set the stiffness of the spring force for anim drive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractorNv, nullptr, "SetAnimDriveSpringStiffness", sizeof(ClothingSimulationInteractorNv_eventSetAnimDriveSpringStiffness_Parms), Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister()
	{
		return UClothingSimulationInteractorNv::StaticClass();
	}
	struct Z_Construct_UClass_UClothingSimulationInteractorNv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingSimulationInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride, "DisableGravityOverride" }, // 1441736953
		{ &Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride, "EnableGravityOverride" }, // 4187852602
		{ &Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness, "SetAnimDriveDamperStiffness" }, // 976843574
		{ &Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness, "SetAnimDriveSpringStiffness" }, // 3400747159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClothingSimulationInteractorNv.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationInteractorNv>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::ClassParams = {
		&UClothingSimulationInteractorNv::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingSimulationInteractorNv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingSimulationInteractorNv, 582540967);
	template<> CLOTHINGSYSTEMRUNTIME_API UClass* StaticClass<UClothingSimulationInteractorNv>()
	{
		return UClothingSimulationInteractorNv::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingSimulationInteractorNv(Z_Construct_UClass_UClothingSimulationInteractorNv, &UClothingSimulationInteractorNv::StaticClass, TEXT("/Script/ClothingSystemRuntime"), TEXT("UClothingSimulationInteractorNv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationInteractorNv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

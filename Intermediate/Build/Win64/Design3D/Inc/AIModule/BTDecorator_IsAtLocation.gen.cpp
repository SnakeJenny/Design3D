// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsAtLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_FAIDistanceType();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void UBTDecorator_IsAtLocation::StaticRegisterNativesUBTDecorator_IsAtLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation_NoRegister()
	{
		return UBTDecorator_IsAtLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPathFindingBasedTest_MetaData[];
#endif
		static void NewProp_bPathFindingBasedTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathFindingBasedTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNavAgentGoalLocation_MetaData[];
#endif
		static void NewProp_bUseNavAgentGoalLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNavAgentGoalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseParametrizedRadius_MetaData[];
#endif
		static void NewProp_bUseParametrizedRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseParametrizedRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometricDistanceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GeometricDistanceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeometricDistanceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParametrizedAcceptableRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParametrizedAcceptableRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
		{ "ToolTip", "Is At Location decorator node.\nA decorator node that checks if AI controlled pawn is at given location." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
		{ "ToolTip", "If true the result will be consistent with tests done while following paths.\n    Set to false to use geometric distance as configured with DistanceType" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest_SetBit(void* Obj)
	{
		((UBTDecorator_IsAtLocation*)Obj)->bPathFindingBasedTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest = { "bPathFindingBasedTest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTDecorator_IsAtLocation), &Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation_MetaData[] = {
		{ "Category", "Condition" },
		{ "EditCondition", "bPathFindingBasedTest" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
		{ "ToolTip", "if moving to an actor and this actor is a nav agent, then we will move to their nav agent location" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation_SetBit(void* Obj)
	{
		((UBTDecorator_IsAtLocation*)Obj)->bUseNavAgentGoalLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation = { "bUseNavAgentGoalLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTDecorator_IsAtLocation), &Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius_SetBit(void* Obj)
	{
		((UBTDecorator_IsAtLocation*)Obj)->bUseParametrizedRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius = { "bUseParametrizedRadius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTDecorator_IsAtLocation), &Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType_MetaData[] = {
		{ "Category", "Condition" },
		{ "EditCondition", "!bPathFindingBasedTest" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType = { "GeometricDistanceType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsAtLocation, GeometricDistanceType), Z_Construct_UEnum_AIModule_FAIDistanceType, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_ParametrizedAcceptableRadius_MetaData[] = {
		{ "Category", "Condition" },
		{ "EditCondition", "bUseParametrizedRadius" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_ParametrizedAcceptableRadius = { "ParametrizedAcceptableRadius", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsAtLocation, ParametrizedAcceptableRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_ParametrizedAcceptableRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_ParametrizedAcceptableRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "Condition" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "!bUseParametrizedRadius" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
		{ "ToolTip", "distance threshold to accept as being at location" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsAtLocation, AcceptableRadius), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_AcceptableRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_AcceptableRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bPathFindingBasedTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseNavAgentGoalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_bUseParametrizedRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_GeometricDistanceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_ParametrizedAcceptableRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::NewProp_AcceptableRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsAtLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::ClassParams = {
		&UBTDecorator_IsAtLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_IsAtLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_IsAtLocation, 573859410);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_IsAtLocation>()
	{
		return UBTDecorator_IsAtLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsAtLocation(Z_Construct_UClass_UBTDecorator_IsAtLocation, &UBTDecorator_IsAtLocation::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_IsAtLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsAtLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

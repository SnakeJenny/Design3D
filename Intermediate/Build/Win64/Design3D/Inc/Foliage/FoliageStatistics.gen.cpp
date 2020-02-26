// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/FoliageStatistics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageStatistics() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageStatistics_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageStatistics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UFunction* Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FOLIAGE_API UFunction* Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UFoliageStatistics::StaticRegisterNativesUFoliageStatistics()
	{
		UClass* Class = UFoliageStatistics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FoliageOverlappingBoxCount", &UFoliageStatistics::execFoliageOverlappingBoxCount },
			{ "FoliageOverlappingSphereCount", &UFoliageStatistics::execFoliageOverlappingSphereCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics
	{
		struct FoliageStatistics_eventFoliageOverlappingBoxCount_Parms
		{
			UObject* WorldContextObject;
			const UStaticMesh* StaticMesh;
			FBox Box;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxCount_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/FoliageStatistics.h" },
		{ "ToolTip", "Gets the number of instances overlapping a provided box\n@param StaticMesh Mesh to count\n@param Box Box to overlap" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFoliageStatistics, nullptr, "FoliageOverlappingBoxCount", sizeof(FoliageStatistics_eventFoliageOverlappingBoxCount_Parms), Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics
	{
		struct FoliageStatistics_eventFoliageOverlappingSphereCount_Parms
		{
			UObject* WorldContextObject;
			const UStaticMesh* StaticMesh;
			FVector CenterPosition;
			float Radius;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_CenterPosition = { "CenterPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms, CenterPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_CenterPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/FoliageStatistics.h" },
		{ "ToolTip", "Counts how many foliage instances overlap a given sphere\n\n@param        Mesh                    The static mesh we are interested in counting\n@param        CenterPosition  The center position of the sphere\n@param        Radius                  The radius of the sphere.\n\nreturn number of foliage instances with their mesh set to Mesh that overlap the sphere" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFoliageStatistics, nullptr, "FoliageOverlappingSphereCount", sizeof(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms), Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFoliageStatistics_NoRegister()
	{
		return UFoliageStatistics::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageStatistics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageStatistics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFoliageStatistics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount, "FoliageOverlappingBoxCount" }, // 4165065400
		{ &Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount, "FoliageOverlappingSphereCount" }, // 486636198
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageStatistics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoliageStatistics.h" },
		{ "ModuleRelativePath", "Public/FoliageStatistics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageStatistics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageStatistics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoliageStatistics_Statics::ClassParams = {
		&UFoliageStatistics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFoliageStatistics_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFoliageStatistics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageStatistics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoliageStatistics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoliageStatistics, 2969965717);
	template<> FOLIAGE_API UClass* StaticClass<UFoliageStatistics>()
	{
		return UFoliageStatistics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoliageStatistics(Z_Construct_UClass_UFoliageStatistics, &UFoliageStatistics::StaticClass, TEXT("/Script/Foliage"), TEXT("UFoliageStatistics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageStatistics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

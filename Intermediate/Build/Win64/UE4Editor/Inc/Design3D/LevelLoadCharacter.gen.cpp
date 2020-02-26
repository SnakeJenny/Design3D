// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Design3D/LevelLoadCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelLoadCharacter() {}
// Cross Module References
	DESIGN3D_API UClass* Z_Construct_UClass_UGeographicMath_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_UGeographicMath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Design3D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DESIGN3D_API UClass* Z_Construct_UClass_ULevelTranform_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_ULevelTranform();
	DESIGN3D_API UClass* Z_Construct_UClass_ULevelLoadedFunClass_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_ULevelLoadedFunClass();
	DESIGN3D_API UFunction* Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelLoadedFun();
	DESIGN3D_API UFunction* Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelUnLoadedFun();
	DESIGN3D_API UClass* Z_Construct_UClass_ULevelLoaderOneByOne_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_ULevelLoaderOneByOne();
	DESIGN3D_API UClass* Z_Construct_UClass_ULevelLoaderStrategic_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_ULevelLoaderStrategic();
	DESIGN3D_API UClass* Z_Construct_UClass_UNavigationManger_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_UNavigationManger();
	DESIGN3D_API UClass* Z_Construct_UClass_ALevelLoadCharacter_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_ALevelLoadCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
// End Cross Module References
	void UGeographicMath::StaticRegisterNativesUGeographicMath()
	{
	}
	UClass* Z_Construct_UClass_UGeographicMath_NoRegister()
	{
		return UGeographicMath::StaticClass();
	}
	struct Z_Construct_UClass_UGeographicMath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inverseTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inverseTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_earthRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_earthRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeographicMath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeographicMath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelLoadCharacter.h" },
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeographicMath_Statics::NewProp_inverseTransform_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeographicMath_Statics::NewProp_inverseTransform = { "inverseTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeographicMath, inverseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGeographicMath_Statics::NewProp_inverseTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeographicMath_Statics::NewProp_inverseTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeographicMath_Statics::NewProp_transform_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeographicMath_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeographicMath, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGeographicMath_Statics::NewProp_transform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeographicMath_Statics::NewProp_transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeographicMath_Statics::NewProp_earthRadius_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeographicMath_Statics::NewProp_earthRadius = { "earthRadius", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeographicMath, earthRadius), METADATA_PARAMS(Z_Construct_UClass_UGeographicMath_Statics::NewProp_earthRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeographicMath_Statics::NewProp_earthRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeographicMath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeographicMath_Statics::NewProp_inverseTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeographicMath_Statics::NewProp_transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeographicMath_Statics::NewProp_earthRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeographicMath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeographicMath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeographicMath_Statics::ClassParams = {
		&UGeographicMath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeographicMath_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGeographicMath_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeographicMath_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeographicMath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeographicMath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeographicMath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeographicMath, 1375853535);
	template<> DESIGN3D_API UClass* StaticClass<UGeographicMath>()
	{
		return UGeographicMath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeographicMath(Z_Construct_UClass_UGeographicMath, &UGeographicMath::StaticClass, TEXT("/Script/Design3D"), TEXT("UGeographicMath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeographicMath);
	void ULevelTranform::StaticRegisterNativesULevelTranform()
	{
	}
	UClass* Z_Construct_UClass_ULevelTranform_NoRegister()
	{
		return ULevelTranform::StaticClass();
	}
	struct Z_Construct_UClass_ULevelTranform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_geographicMath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_geographicMath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initTileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initTileSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelTranform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelTranform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelLoadCharacter.h" },
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelTranform_Statics::NewProp_geographicMath_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelTranform_Statics::NewProp_geographicMath = { "geographicMath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelTranform, geographicMath), Z_Construct_UClass_UGeographicMath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelTranform_Statics::NewProp_geographicMath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelTranform_Statics::NewProp_geographicMath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelTranform_Statics::NewProp_initTileSize_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelTranform_Statics::NewProp_initTileSize = { "initTileSize", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelTranform, initTileSize), METADATA_PARAMS(Z_Construct_UClass_ULevelTranform_Statics::NewProp_initTileSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelTranform_Statics::NewProp_initTileSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelTranform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelTranform_Statics::NewProp_geographicMath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelTranform_Statics::NewProp_initTileSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelTranform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelTranform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelTranform_Statics::ClassParams = {
		&ULevelTranform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelTranform_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULevelTranform_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelTranform_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelTranform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelTranform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelTranform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelTranform, 4002945891);
	template<> DESIGN3D_API UClass* StaticClass<ULevelTranform>()
	{
		return ULevelTranform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelTranform(Z_Construct_UClass_ULevelTranform, &ULevelTranform::StaticClass, TEXT("/Script/Design3D"), TEXT("ULevelTranform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelTranform);
	void ULevelLoadedFunClass::StaticRegisterNativesULevelLoadedFunClass()
	{
		UClass* Class = ULevelLoadedFunClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelLoadedFun", &ULevelLoadedFunClass::execOnLevelLoadedFun },
			{ "OnLevelUnLoadedFun", &ULevelLoadedFunClass::execOnLevelUnLoadedFun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelLoadedFun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelLoadedFun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelLoadedFun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelLoadedFunClass, nullptr, "OnLevelLoadedFun", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelLoadedFun_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelLoadedFun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelLoadedFun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelLoadedFun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelUnLoadedFun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelUnLoadedFun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelUnLoadedFun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelLoadedFunClass, nullptr, "OnLevelUnLoadedFun", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelUnLoadedFun_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelUnLoadedFun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelUnLoadedFun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelUnLoadedFun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelLoadedFunClass_NoRegister()
	{
		return ULevelLoadedFunClass::StaticClass();
	}
	struct Z_Construct_UClass_ULevelLoadedFunClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelTranform_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_levelTranform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelLoaderOneByOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_levelLoaderOneByOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_levelStream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelLoadedFunClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelLoadedFunClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelLoadedFun, "OnLevelLoadedFun" }, // 2870260610
		{ &Z_Construct_UFunction_ULevelLoadedFunClass_OnLevelUnLoadedFun, "OnLevelUnLoadedFun" }, // 598260264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelLoadedFunClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelLoadCharacter.h" },
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelTranform_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelTranform = { "levelTranform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelLoadedFunClass, levelTranform), Z_Construct_UClass_ULevelTranform_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelTranform_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelTranform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelLoaderOneByOne_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelLoaderOneByOne = { "levelLoaderOneByOne", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelLoadedFunClass, levelLoaderOneByOne), Z_Construct_UClass_ULevelLoaderOneByOne_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelLoaderOneByOne_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelLoaderOneByOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelStream_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelStream = { "levelStream", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelLoadedFunClass, levelStream), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelStream_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelStream_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelLoadedFunClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelTranform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelLoaderOneByOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoadedFunClass_Statics::NewProp_levelStream,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelLoadedFunClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelLoadedFunClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelLoadedFunClass_Statics::ClassParams = {
		&ULevelLoadedFunClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelLoadedFunClass_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULevelLoadedFunClass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelLoadedFunClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelLoadedFunClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelLoadedFunClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelLoadedFunClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelLoadedFunClass, 2602315724);
	template<> DESIGN3D_API UClass* StaticClass<ULevelLoadedFunClass>()
	{
		return ULevelLoadedFunClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelLoadedFunClass(Z_Construct_UClass_ULevelLoadedFunClass, &ULevelLoadedFunClass::StaticClass, TEXT("/Script/Design3D"), TEXT("ULevelLoadedFunClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelLoadedFunClass);
	void ULevelLoaderOneByOne::StaticRegisterNativesULevelLoaderOneByOne()
	{
	}
	UClass* Z_Construct_UClass_ULevelLoaderOneByOne_NoRegister()
	{
		return ULevelLoaderOneByOne::StaticClass();
	}
	struct Z_Construct_UClass_ULevelLoaderOneByOne_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_levelLoaded;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_levelLoaded_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_levelLoaded_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelLoaderOneByOne_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelLoaderOneByOne_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelLoadCharacter.h" },
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelLoaderOneByOne_Statics::NewProp_levelLoaded_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevelLoaderOneByOne_Statics::NewProp_levelLoaded = { "levelLoaded", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelLoaderOneByOne, levelLoaded), METADATA_PARAMS(Z_Construct_UClass_ULevelLoaderOneByOne_Statics::NewProp_levelLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelLoaderOneByOne_Statics::NewProp_levelLoaded_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelLoaderOneByOne_Statics::NewProp_levelLoaded_Key_KeyProp = { "levelLoaded_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelLoaderOneByOne_Statics::NewProp_levelLoaded_ValueProp = { "levelLoaded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelLoaderOneByOne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoaderOneByOne_Statics::NewProp_levelLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoaderOneByOne_Statics::NewProp_levelLoaded_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoaderOneByOne_Statics::NewProp_levelLoaded_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelLoaderOneByOne_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelLoaderOneByOne>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelLoaderOneByOne_Statics::ClassParams = {
		&ULevelLoaderOneByOne::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelLoaderOneByOne_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULevelLoaderOneByOne_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelLoaderOneByOne_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelLoaderOneByOne_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelLoaderOneByOne()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelLoaderOneByOne_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelLoaderOneByOne, 853562785);
	template<> DESIGN3D_API UClass* StaticClass<ULevelLoaderOneByOne>()
	{
		return ULevelLoaderOneByOne::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelLoaderOneByOne(Z_Construct_UClass_ULevelLoaderOneByOne, &ULevelLoaderOneByOne::StaticClass, TEXT("/Script/Design3D"), TEXT("ULevelLoaderOneByOne"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelLoaderOneByOne);
	void ULevelLoaderStrategic::StaticRegisterNativesULevelLoaderStrategic()
	{
	}
	UClass* Z_Construct_UClass_ULevelLoaderStrategic_NoRegister()
	{
		return ULevelLoaderStrategic::StaticClass();
	}
	struct Z_Construct_UClass_ULevelLoaderStrategic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_geographicMath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_geographicMath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelLoaderStrategic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelLoaderStrategic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelLoadCharacter.h" },
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelLoaderStrategic_Statics::NewProp_geographicMath_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelLoaderStrategic_Statics::NewProp_geographicMath = { "geographicMath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelLoaderStrategic, geographicMath), Z_Construct_UClass_UGeographicMath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelLoaderStrategic_Statics::NewProp_geographicMath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelLoaderStrategic_Statics::NewProp_geographicMath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelLoaderStrategic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoaderStrategic_Statics::NewProp_geographicMath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelLoaderStrategic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelLoaderStrategic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelLoaderStrategic_Statics::ClassParams = {
		&ULevelLoaderStrategic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelLoaderStrategic_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULevelLoaderStrategic_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelLoaderStrategic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelLoaderStrategic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelLoaderStrategic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelLoaderStrategic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelLoaderStrategic, 3273035274);
	template<> DESIGN3D_API UClass* StaticClass<ULevelLoaderStrategic>()
	{
		return ULevelLoaderStrategic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelLoaderStrategic(Z_Construct_UClass_ULevelLoaderStrategic, &ULevelLoaderStrategic::StaticClass, TEXT("/Script/Design3D"), TEXT("ULevelLoaderStrategic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelLoaderStrategic);
	void UNavigationManger::StaticRegisterNativesUNavigationManger()
	{
	}
	UClass* Z_Construct_UClass_UNavigationManger_NoRegister()
	{
		return UNavigationManger::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationManger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelLoaderStrategic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_levelLoaderStrategic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationManger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationManger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelLoadCharacter.h" },
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationManger_Statics::NewProp_levelLoaderStrategic_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationManger_Statics::NewProp_levelLoaderStrategic = { "levelLoaderStrategic", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationManger, levelLoaderStrategic), Z_Construct_UClass_ULevelLoaderStrategic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigationManger_Statics::NewProp_levelLoaderStrategic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationManger_Statics::NewProp_levelLoaderStrategic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationManger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationManger_Statics::NewProp_levelLoaderStrategic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationManger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationManger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationManger_Statics::ClassParams = {
		&UNavigationManger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationManger_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNavigationManger_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationManger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationManger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationManger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationManger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationManger, 2892432385);
	template<> DESIGN3D_API UClass* StaticClass<UNavigationManger>()
	{
		return UNavigationManger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationManger(Z_Construct_UClass_UNavigationManger, &UNavigationManger::StaticClass, TEXT("/Script/Design3D"), TEXT("UNavigationManger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationManger);
	void ALevelLoadCharacter::StaticRegisterNativesALevelLoadCharacter()
	{
	}
	UClass* Z_Construct_UClass_ALevelLoadCharacter_NoRegister()
	{
		return ALevelLoadCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALevelLoadCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_navigationManger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_navigationManger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelLoadCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelLoadCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LevelLoadCharacter.h" },
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelLoadCharacter_Statics::NewProp_navigationManger_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelLoadCharacter_Statics::NewProp_navigationManger = { "navigationManger", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelLoadCharacter, navigationManger), Z_Construct_UClass_UNavigationManger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelLoadCharacter_Statics::NewProp_navigationManger_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelLoadCharacter_Statics::NewProp_navigationManger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelLoadCharacter_Statics::NewProp_MyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "LevelLoadCharacter.h" },
		{ "ToolTip", "UPROPERTY()\nAActor* Acotrptr;\nUPROPERTY(EditAnywhere, Category = \"levelLoadCharacter\")\nTSubclassOf<class ALevelLoadCharacter> levelLoadCharacter;\nUPROPERTY(EditAnywhere, Category = \"levelLoadactor\")\nALevelLoadCharacter* levelLoadactor;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelLoadCharacter_Statics::NewProp_MyCharacter = { "MyCharacter", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelLoadCharacter, MyCharacter), Z_Construct_UClass_ALevelLoadCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelLoadCharacter_Statics::NewProp_MyCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelLoadCharacter_Statics::NewProp_MyCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelLoadCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLoadCharacter_Statics::NewProp_navigationManger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLoadCharacter_Statics::NewProp_MyCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelLoadCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelLoadCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelLoadCharacter_Statics::ClassParams = {
		&ALevelLoadCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelLoadCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALevelLoadCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelLoadCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALevelLoadCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelLoadCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelLoadCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelLoadCharacter, 1354129295);
	template<> DESIGN3D_API UClass* StaticClass<ALevelLoadCharacter>()
	{
		return ALevelLoadCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelLoadCharacter(Z_Construct_UClass_ALevelLoadCharacter, &ALevelLoadCharacter::StaticClass, TEXT("/Script/Design3D"), TEXT("ALevelLoadCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelLoadCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

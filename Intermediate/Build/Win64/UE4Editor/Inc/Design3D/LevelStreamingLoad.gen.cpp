// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Design3D/LevelStreamingLoad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingLoad() {}
// Cross Module References
	DESIGN3D_API UClass* Z_Construct_UClass_ULevelStreamingLoad_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_ULevelStreamingLoad();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Design3D();
	DESIGN3D_API UFunction* Z_Construct_UFunction_ULevelStreamingLoad_BeginLoadWaitLevel();
	DESIGN3D_API UFunction* Z_Construct_UFunction_ULevelStreamingLoad_BeginUnLoadWaitLevel();
	DESIGN3D_API UFunction* Z_Construct_UFunction_ULevelStreamingLoad_EndLoadWaitLevel();
	DESIGN3D_API UFunction* Z_Construct_UFunction_ULevelStreamingLoad_EndUnLoadWaitLevel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
// End Cross Module References
	void ULevelStreamingLoad::StaticRegisterNativesULevelStreamingLoad()
	{
		UClass* Class = ULevelStreamingLoad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginLoadWaitLevel", &ULevelStreamingLoad::execBeginLoadWaitLevel },
			{ "BeginUnLoadWaitLevel", &ULevelStreamingLoad::execBeginUnLoadWaitLevel },
			{ "EndLoadWaitLevel", &ULevelStreamingLoad::execEndLoadWaitLevel },
			{ "EndUnLoadWaitLevel", &ULevelStreamingLoad::execEndUnLoadWaitLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelStreamingLoad_BeginLoadWaitLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingLoad_BeginLoadWaitLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingLoad_BeginLoadWaitLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingLoad, nullptr, "BeginLoadWaitLevel", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingLoad_BeginLoadWaitLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingLoad_BeginLoadWaitLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingLoad_BeginLoadWaitLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingLoad_BeginLoadWaitLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingLoad_BeginUnLoadWaitLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingLoad_BeginUnLoadWaitLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingLoad_BeginUnLoadWaitLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingLoad, nullptr, "BeginUnLoadWaitLevel", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingLoad_BeginUnLoadWaitLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingLoad_BeginUnLoadWaitLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingLoad_BeginUnLoadWaitLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingLoad_BeginUnLoadWaitLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingLoad_EndLoadWaitLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingLoad_EndLoadWaitLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingLoad_EndLoadWaitLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingLoad, nullptr, "EndLoadWaitLevel", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingLoad_EndLoadWaitLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingLoad_EndLoadWaitLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingLoad_EndLoadWaitLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingLoad_EndLoadWaitLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingLoad_EndUnLoadWaitLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingLoad_EndUnLoadWaitLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingLoad_EndUnLoadWaitLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingLoad, nullptr, "EndUnLoadWaitLevel", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingLoad_EndUnLoadWaitLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingLoad_EndUnLoadWaitLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingLoad_EndUnLoadWaitLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingLoad_EndUnLoadWaitLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelStreamingLoad_NoRegister()
	{
		return ULevelStreamingLoad::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingLoad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unloadActionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_unloadActionInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentUnLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currentUnLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waitForUnLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_waitForUnLoaded;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_waitForUnLoaded_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loadActionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_loadActionInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currentLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waitForLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_waitForLoaded;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_waitForLoaded_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_levelLoaded;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_levelLoaded_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingLoad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelStreamingLoad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelStreamingLoad_BeginLoadWaitLevel, "BeginLoadWaitLevel" }, // 3679745017
		{ &Z_Construct_UFunction_ULevelStreamingLoad_BeginUnLoadWaitLevel, "BeginUnLoadWaitLevel" }, // 2047821939
		{ &Z_Construct_UFunction_ULevelStreamingLoad_EndLoadWaitLevel, "EndLoadWaitLevel" }, // 879165365
		{ &Z_Construct_UFunction_ULevelStreamingLoad_EndUnLoadWaitLevel, "EndUnLoadWaitLevel" }, // 3789880726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingLoad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelStreamingLoad.h" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
		{ "ToolTip", "class ULevelStreamingLoad\n{\n\npublic:\n       ULevelStreamingLoad();\n       ~ULevelStreamingLoad();\n\n\n\npublic:\n\n       void LoadMap(const FString & LevelName);\n       void UnLoadMap(const FString & LevelName);\n\npublic:\n\n        level loaded\n\n               TArray<FString> levelLoaded;\n\n        used for aysn load\n               TArray<FString> waitForLoaded;\n\n               FString currentLoaded;\n\n               FLatentActionInfo loadActionInfo;\n\n               void BeginLoadWaitLevel();\n\n               void EndLoadWaitLevel();\n\n        used for aysn unload\n               TArray<FString> waitForUnLoaded;\n\n               FString currentUnLoaded;\n\n               FLatentActionInfo unloadActionInfo;\n\n               void BeginUnLoadWaitLevel();\n\n               void EndUnLoadWaitLevel();\n\n};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_unloadActionInfo_MetaData[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_unloadActionInfo = { "unloadActionInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingLoad, unloadActionInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_unloadActionInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_unloadActionInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_currentUnLoaded_MetaData[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_currentUnLoaded = { "currentUnLoaded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingLoad, currentUnLoaded), METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_currentUnLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_currentUnLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForUnLoaded_MetaData[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
		{ "ToolTip", "used for aysn unload" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForUnLoaded = { "waitForUnLoaded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingLoad, waitForUnLoaded), METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForUnLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForUnLoaded_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForUnLoaded_Inner = { "waitForUnLoaded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_loadActionInfo_MetaData[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_loadActionInfo = { "loadActionInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingLoad, loadActionInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_loadActionInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_loadActionInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_currentLoaded_MetaData[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_currentLoaded = { "currentLoaded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingLoad, currentLoaded), METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_currentLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_currentLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForLoaded_MetaData[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
		{ "ToolTip", "TMap<FString, ULevelStreamingDynamic> levelLoaded;// used for aysn load" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForLoaded = { "waitForLoaded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingLoad, waitForLoaded), METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForLoaded_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForLoaded_Inner = { "waitForLoaded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_levelLoaded_MetaData[] = {
		{ "Category", "levelload" },
		{ "ModuleRelativePath", "LevelStreamingLoad.h" },
		{ "ToolTip", "level loaded" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_levelLoaded = { "levelLoaded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingLoad, levelLoaded), METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_levelLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_levelLoaded_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_levelLoaded_Inner = { "levelLoaded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelStreamingLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_unloadActionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_currentUnLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForUnLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForUnLoaded_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_loadActionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_currentLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_waitForLoaded_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_levelLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLoad_Statics::NewProp_levelLoaded_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingLoad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingLoad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingLoad_Statics::ClassParams = {
		&ULevelStreamingLoad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelStreamingLoad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLoad_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingLoad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLoad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingLoad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelStreamingLoad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelStreamingLoad, 349837593);
	template<> DESIGN3D_API UClass* StaticClass<ULevelStreamingLoad>()
	{
		return ULevelStreamingLoad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreamingLoad(Z_Construct_UClass_ULevelStreamingLoad, &ULevelStreamingLoad::StaticClass, TEXT("/Script/Design3D"), TEXT("ULevelStreamingLoad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingLoad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

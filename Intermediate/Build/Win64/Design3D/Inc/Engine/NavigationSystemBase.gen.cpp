// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/NavigationSystemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystemBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystem();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* FNavigationSystemRunMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_FNavigationSystemRunMode, Z_Construct_UPackage__Script_Engine(), TEXT("FNavigationSystemRunMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<FNavigationSystemRunMode>()
	{
		return FNavigationSystemRunMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FNavigationSystemRunMode(FNavigationSystemRunMode_StaticEnum, TEXT("/Script/Engine"), TEXT("FNavigationSystemRunMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Hash() { return 141244790U; }
	UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FNavigationSystemRunMode"), 0, Get_Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FNavigationSystemRunMode::InvalidMode", (int64)FNavigationSystemRunMode::InvalidMode },
				{ "FNavigationSystemRunMode::GameMode", (int64)FNavigationSystemRunMode::GameMode },
				{ "FNavigationSystemRunMode::EditorMode", (int64)FNavigationSystemRunMode::EditorMode },
				{ "FNavigationSystemRunMode::SimulationMode", (int64)FNavigationSystemRunMode::SimulationMode },
				{ "FNavigationSystemRunMode::PIEMode", (int64)FNavigationSystemRunMode::PIEMode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"FNavigationSystemRunMode",
				"FNavigationSystemRunMode",
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
	void UNavigationSystemBase::StaticRegisterNativesUNavigationSystemBase()
	{
	}
	UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister()
	{
		return UNavigationSystemBase::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationSystemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationSystemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/NavigationSystemBase.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationSystemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemBase_Statics::ClassParams = {
		&UNavigationSystemBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ABu,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationSystemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationSystemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationSystemBase, 957762140);
	template<> ENGINE_API UClass* StaticClass<UNavigationSystemBase>()
	{
		return UNavigationSystemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationSystemBase(Z_Construct_UClass_UNavigationSystemBase, &UNavigationSystemBase::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationSystemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemBase);
	void UNavigationSystem::StaticRegisterNativesUNavigationSystem()
	{
		UClass* Class = UNavigationSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SimpleMoveToActor", &UNavigationSystem::execSimpleMoveToActor },
			{ "SimpleMoveToLocation", &UNavigationSystem::execSimpleMoveToLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics
	{
		struct NavigationSystem_eventSimpleMoveToActor_Parms
		{
			AController* Controller;
			const AActor* Goal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavigationSystem_eventSimpleMoveToActor_Parms, Goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavigationSystem_eventSimpleMoveToActor_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SimpleMoveToActor is deprecated. Use AIBlueprintHelperLibrary::SimpleMoveToActor instead" },
		{ "DisplayName", "SimpleMoveToActor_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
		{ "ScriptNoExport", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, nullptr, "SimpleMoveToActor", sizeof(NavigationSystem_eventSimpleMoveToActor_Parms), Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics
	{
		struct NavigationSystem_eventSimpleMoveToLocation_Parms
		{
			AController* Controller;
			FVector Goal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavigationSystem_eventSimpleMoveToLocation_Parms, Goal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavigationSystem_eventSimpleMoveToLocation_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SimpleMoveToLocation is deprecated. Use AIBlueprintHelperLibrary::SimpleMoveToLocation instead" },
		{ "DisplayName", "SimpleMoveToLocation_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
		{ "ScriptNoExport", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystem, nullptr, "SimpleMoveToLocation", sizeof(NavigationSystem_eventSimpleMoveToLocation_Parms), Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavigationSystem_NoRegister()
	{
		return UNavigationSystem::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavigationSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationSystem_SimpleMoveToActor, "SimpleMoveToActor" }, // 2951489228
		{ &Z_Construct_UFunction_UNavigationSystem_SimpleMoveToLocation, "SimpleMoveToLocation" }, // 347163314
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/NavigationSystemBase.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystem_Statics::ClassParams = {
		&UNavigationSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A3u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationSystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationSystem, 3834846868);
	template<> ENGINE_API UClass* StaticClass<UNavigationSystem>()
	{
		return UNavigationSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationSystem(Z_Construct_UClass_UNavigationSystem, &UNavigationSystem::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

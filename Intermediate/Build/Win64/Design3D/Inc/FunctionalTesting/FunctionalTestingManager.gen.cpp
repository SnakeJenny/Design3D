// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/FunctionalTestingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestingManager() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestingManager_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestingManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_APhasedAutomationActorBase_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_APhasedAutomationActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete();
// End Cross Module References
	void UFunctionalTestingManager::StaticRegisterNativesUFunctionalTestingManager()
	{
		UClass* Class = UFunctionalTestingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunAllFunctionalTests", &UFunctionalTestingManager::execRunAllFunctionalTests },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics
	{
		struct FunctionalTestingManager_eventRunAllFunctionalTests_Parms
		{
			UObject* WorldContextObject;
			bool bNewLog;
			bool bRunLooped;
			FString FailedTestsReproString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FailedTestsReproString;
		static void NewProp_bRunLooped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunLooped;
		static void NewProp_bNewLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLog;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_FailedTestsReproString = { "FailedTestsReproString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestingManager_eventRunAllFunctionalTests_Parms, FailedTestsReproString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped_SetBit(void* Obj)
	{
		((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->bRunLooped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped = { "bRunLooped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog_SetBit(void* Obj)
	{
		((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->bNewLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog = { "bNewLog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestingManager_eventRunAllFunctionalTests_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_FailedTestsReproString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FunctionalTesting" },
		{ "CPP_Default_bNewLog", "true" },
		{ "CPP_Default_bRunLooped", "false" },
		{ "CPP_Default_FailedTestsReproString", "" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
		{ "ToolTip", "Triggers in sequence all functional tests found on the level.\n@return true if any tests have been triggered" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionalTestingManager, nullptr, "RunAllFunctionalTests", sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFunctionalTestingManager_NoRegister()
	{
		return UFunctionalTestingManager::StaticClass();
	}
	struct Z_Construct_UClass_UFunctionalTestingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTestsBegin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestsBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTestsComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestsComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetupTests_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetupTests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllTests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllTests;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllTests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestsLeft;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TestsLeft_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFunctionalTestingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFunctionalTestingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests, "RunAllFunctionalTests" }, // 4054931140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FunctionalTestingManager.h" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin = { "OnTestsBegin", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFunctionalTestingManager, OnTestsBegin), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete = { "OnTestsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFunctionalTestingManager, OnTestsComplete), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests = { "OnSetupTests", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFunctionalTestingManager, OnSetupTests), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests = { "AllTests", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFunctionalTestingManager, AllTests), METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_Inner = { "AllTests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFunctionalTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft = { "TestsLeft", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFunctionalTestingManager, TestsLeft), METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_Inner = { "TestsLeft", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFunctionalTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFunctionalTestingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionalTestingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFunctionalTestingManager_Statics::ClassParams = {
		&UFunctionalTestingManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFunctionalTestingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFunctionalTestingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFunctionalTestingManager, 4014671835);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UFunctionalTestingManager>()
	{
		return UFunctionalTestingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFunctionalTestingManager(Z_Construct_UClass_UFunctionalTestingManager, &UFunctionalTestingManager::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("UFunctionalTestingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionalTestingManager);
	static FName NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin = FName(TEXT("OnFunctionalTestingBegin"));
	void APhasedAutomationActorBase::OnFunctionalTestingBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin),NULL);
	}
	static FName NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete = FName(TEXT("OnFunctionalTestingComplete"));
	void APhasedAutomationActorBase::OnFunctionalTestingComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete),NULL);
	}
	void APhasedAutomationActorBase::StaticRegisterNativesAPhasedAutomationActorBase()
	{
	}
	struct Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhasedAutomationActorBase, nullptr, "OnFunctionalTestingBegin", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhasedAutomationActorBase, nullptr, "OnFunctionalTestingComplete", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APhasedAutomationActorBase_NoRegister()
	{
		return APhasedAutomationActorBase::StaticClass();
	}
	struct Z_Construct_UClass_APhasedAutomationActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhasedAutomationActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhasedAutomationActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin, "OnFunctionalTestingBegin" }, // 891000283
		{ &Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete, "OnFunctionalTestingComplete" }, // 3407318366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FunctionalTestingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhasedAutomationActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhasedAutomationActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhasedAutomationActorBase_Statics::ClassParams = {
		&APhasedAutomationActorBase::StaticClass,
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
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhasedAutomationActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhasedAutomationActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhasedAutomationActorBase, 321836638);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<APhasedAutomationActorBase>()
	{
		return APhasedAutomationActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhasedAutomationActorBase(Z_Construct_UClass_APhasedAutomationActorBase, &APhasedAutomationActorBase::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("APhasedAutomationActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhasedAutomationActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

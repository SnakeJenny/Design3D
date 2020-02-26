// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/CurveSourceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveSourceInterface() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedCurveValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetBindingName();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurves();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue();
// End Cross Module References
class UScriptStruct* FNamedCurveValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedCurveValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedCurveValue, Z_Construct_UPackage__Script_Engine(), TEXT("NamedCurveValue"), sizeof(FNamedCurveValue), Get_Z_Construct_UScriptStruct_FNamedCurveValue_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedCurveValue>()
{
	return FNamedCurveValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedCurveValue(FNamedCurveValue::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedCurveValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedCurveValue
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedCurveValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedCurveValue")),new UScriptStruct::TCppStructOps<FNamedCurveValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedCurveValue;
	struct Z_Construct_UScriptStruct_FNamedCurveValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedCurveValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Name/value pair for retrieving curve values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedCurveValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "The value of the curve" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedCurveValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "The name of the curve" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedCurveValue, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedCurveValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedCurveValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedCurveValue",
		sizeof(FNamedCurveValue),
		alignof(FNamedCurveValue),
		Z_Construct_UScriptStruct_FNamedCurveValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedCurveValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedCurveValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedCurveValue"), sizeof(FNamedCurveValue), Get_Z_Construct_UScriptStruct_FNamedCurveValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedCurveValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedCurveValue_Hash() { return 1654251207U; }
	FName ICurveSourceInterface::GetBindingName() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBindingName instead.");
		CurveSourceInterface_eventGetBindingName_Parms Parms;
		return Parms.ReturnValue;
	}
	void ICurveSourceInterface::GetCurves(TArray<FNamedCurveValue>& OutValues) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurves instead.");
	}
	float ICurveSourceInterface::GetCurveValue(FName CurveName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurveValue instead.");
		CurveSourceInterface_eventGetCurveValue_Parms Parms;
		return Parms.ReturnValue;
	}
	void UCurveSourceInterface::StaticRegisterNativesUCurveSourceInterface()
	{
		UClass* Class = UCurveSourceInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBindingName", &ICurveSourceInterface::execGetBindingName },
			{ "GetCurves", &ICurveSourceInterface::execGetCurves },
			{ "GetCurveValue", &ICurveSourceInterface::execGetCurveValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveSourceInterface_eventGetBindingName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Get the name that this curve source can be bound to by.\nClients of this curve source will use this name to identify this source." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, nullptr, "GetBindingName", sizeof(CurveSourceInterface_eventGetBindingName_Parms), Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetBindingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveSourceInterface_eventGetCurves_Parms, OutValues), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedCurveValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Evaluate all curves that this source provides" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, nullptr, "GetCurves", sizeof(CurveSourceInterface_eventGetCurves_Parms), Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveSourceInterface_eventGetCurveValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveSourceInterface_eventGetCurveValue_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_CurveName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Get the value for a specified curve" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, nullptr, "GetCurveValue", sizeof(CurveSourceInterface_eventGetCurveValue_Parms), Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister()
	{
		return UCurveSourceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCurveSourceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveSourceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveSourceInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveSourceInterface_GetBindingName, "GetBindingName" }, // 3836356042
		{ &Z_Construct_UFunction_UCurveSourceInterface_GetCurves, "GetCurves" }, // 778467972
		{ &Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue, "GetCurveValue" }, // 2069853830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveSourceInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveSourceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICurveSourceInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveSourceInterface_Statics::ClassParams = {
		&UCurveSourceInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveSourceInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveSourceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveSourceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveSourceInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveSourceInterface, 2903122541);
	template<> ENGINE_API UClass* StaticClass<UCurveSourceInterface>()
	{
		return UCurveSourceInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveSourceInterface(Z_Construct_UClass_UCurveSourceInterface, &UCurveSourceInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveSourceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveSourceInterface);
	static FName NAME_UCurveSourceInterface_GetBindingName = FName(TEXT("GetBindingName"));
	FName ICurveSourceInterface::Execute_GetBindingName(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
		CurveSourceInterface_eventGetBindingName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetBindingName);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBindingName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCurveSourceInterface_GetCurves = FName(TEXT("GetCurves"));
	void ICurveSourceInterface::Execute_GetCurves(const UObject* O, TArray<FNamedCurveValue>& OutValues)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
		CurveSourceInterface_eventGetCurves_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetCurves);
		if (Func)
		{
			Parms.OutValues=OutValues;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			OutValues=Parms.OutValues;
		}
		else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
		{
			I->GetCurves_Implementation(OutValues);
		}
	}
	static FName NAME_UCurveSourceInterface_GetCurveValue = FName(TEXT("GetCurveValue"));
	float ICurveSourceInterface::Execute_GetCurveValue(const UObject* O, FName CurveName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
		CurveSourceInterface_eventGetCurveValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetCurveValue);
		if (Func)
		{
			Parms.CurveName=CurveName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCurveValue_Implementation(CurveName);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

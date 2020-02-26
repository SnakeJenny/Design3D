// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blutility/Classes/ActorActionUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorActionUtility() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UActorActionUtility_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UActorActionUtility();
	BLUTILITY_API UClass* Z_Construct_UClass_UGlobalEditorUtilityBase();
	UPackage* Z_Construct_UPackage__Script_Blutility();
	BLUTILITY_API UFunction* Z_Construct_UFunction_UActorActionUtility_GetSupportedClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FName NAME_UActorActionUtility_GetSupportedClass = FName(TEXT("GetSupportedClass"));
	UClass* UActorActionUtility::GetSupportedClass() const
	{
		ActorActionUtility_eventGetSupportedClass_Parms Parms;
		const_cast<UActorActionUtility*>(this)->ProcessEvent(FindFunctionChecked(NAME_UActorActionUtility_GetSupportedClass),&Parms);
		return Parms.ReturnValue;
	}
	void UActorActionUtility::StaticRegisterNativesUActorActionUtility()
	{
	}
	struct Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorActionUtility_eventGetSupportedClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assets" },
		{ "ModuleRelativePath", "Classes/ActorActionUtility.h" },
		{ "ToolTip", "Return the class that this actor action supports. Leave this blank to support all actor classes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorActionUtility, nullptr, "GetSupportedClass", sizeof(ActorActionUtility_eventGetSupportedClass_Parms), Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorActionUtility_GetSupportedClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorActionUtility_NoRegister()
	{
		return UActorActionUtility::StaticClass();
	}
	struct Z_Construct_UClass_UActorActionUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorActionUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGlobalEditorUtilityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorActionUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorActionUtility_GetSupportedClass, "GetSupportedClass" }, // 729788795
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorActionUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorActionUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ActorActionUtility.h" },
		{ "ToolTip", "Base class for all actor action-related utilities\nAny functions/events that are exposed on derived classes that have the correct signature will be\nincluded as menu options when right-clicking on a group of actors in the level editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorActionUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorActionUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorActionUtility_Statics::ClassParams = {
		&UActorActionUtility::StaticClass,
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
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UActorActionUtility_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorActionUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorActionUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorActionUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorActionUtility, 4263756478);
	template<> BLUTILITY_API UClass* StaticClass<UActorActionUtility>()
	{
		return UActorActionUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorActionUtility(Z_Construct_UClass_UActorActionUtility, &UActorActionUtility::StaticClass, TEXT("/Script/Blutility"), TEXT("UActorActionUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorActionUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

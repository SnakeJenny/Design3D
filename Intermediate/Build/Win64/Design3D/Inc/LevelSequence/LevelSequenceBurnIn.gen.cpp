// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceBurnIn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceBurnIn() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot();
// End Cross Module References
	static FName NAME_ULevelSequenceBurnIn_GetSettingsClass = FName(TEXT("GetSettingsClass"));
	TSubclassOf<ULevelSequenceBurnInInitSettings>  ULevelSequenceBurnIn::GetSettingsClass() const
	{
		LevelSequenceBurnIn_eventGetSettingsClass_Parms Parms;
		const_cast<ULevelSequenceBurnIn*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceBurnIn_GetSettingsClass),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULevelSequenceBurnIn_SetSettings = FName(TEXT("SetSettings"));
	void ULevelSequenceBurnIn::SetSettings(UObject* InSettings)
	{
		LevelSequenceBurnIn_eventSetSettings_Parms Parms;
		Parms.InSettings=InSettings;
		ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceBurnIn_SetSettings),&Parms);
	}
	void ULevelSequenceBurnIn::StaticRegisterNativesULevelSequenceBurnIn()
	{
		UClass* Class = ULevelSequenceBurnIn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSettingsClass", &ULevelSequenceBurnIn::execGetSettingsClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceBurnIn_eventGetSettingsClass_Parms, ReturnValue), Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Burn In" },
		{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
		{ "ToolTip", "Get the settings class to use for this burn in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnIn, nullptr, "GetSettingsClass", sizeof(LevelSequenceBurnIn_eventGetSettingsClass_Parms), Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceBurnIn_eventSetSettings_Parms, InSettings), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Burn In" },
		{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
		{ "ToolTip", "Called when this burn in is receiving its settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnIn, nullptr, "SetSettings", sizeof(LevelSequenceBurnIn_eventSetSettings_Parms), Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister()
	{
		return ULevelSequenceBurnIn::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceBurnIn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceBurnIn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceBurnIn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass, "GetSettingsClass" }, // 1565230179
		{ &Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings, "SetSettings" }, // 1184703180
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnIn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSequenceBurnIn.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for level sequence burn ins" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_LevelSequenceActor_MetaData[] = {
		{ "Category", "Burn In" },
		{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
		{ "ToolTip", "The actor to get our burn in frames from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_LevelSequenceActor = { "LevelSequenceActor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceBurnIn, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_LevelSequenceActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_LevelSequenceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_FrameInformation_MetaData[] = {
		{ "Category", "Burn In" },
		{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
		{ "ToolTip", "Snapshot of frame information." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_FrameInformation = { "FrameInformation", nullptr, (EPropertyFlags)0x0020088000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceBurnIn, FrameInformation), Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_FrameInformation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_FrameInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceBurnIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_LevelSequenceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_FrameInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceBurnIn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnIn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnIn_Statics::ClassParams = {
		&ULevelSequenceBurnIn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequenceBurnIn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceBurnIn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceBurnIn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceBurnIn, 3403846920);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceBurnIn>()
	{
		return ULevelSequenceBurnIn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnIn(Z_Construct_UClass_ULevelSequenceBurnIn, &ULevelSequenceBurnIn::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnIn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnIn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

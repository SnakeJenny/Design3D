// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TimecodeProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimecodeProvider() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimecodeProvider_GetFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimecodeProvider_GetTimecode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
// End Cross Module References
	static UEnum* ETimecodeProviderSynchronizationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState, Z_Construct_UPackage__Script_Engine(), TEXT("ETimecodeProviderSynchronizationState"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETimecodeProviderSynchronizationState>()
	{
		return ETimecodeProviderSynchronizationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimecodeProviderSynchronizationState(ETimecodeProviderSynchronizationState_StaticEnum, TEXT("/Script/Engine"), TEXT("ETimecodeProviderSynchronizationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Hash() { return 1298632111U; }
	UEnum* Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimecodeProviderSynchronizationState"), 0, Get_Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimecodeProviderSynchronizationState::Closed", (int64)ETimecodeProviderSynchronizationState::Closed },
				{ "ETimecodeProviderSynchronizationState::Error", (int64)ETimecodeProviderSynchronizationState::Error },
				{ "ETimecodeProviderSynchronizationState::Synchronized", (int64)ETimecodeProviderSynchronizationState::Synchronized },
				{ "ETimecodeProviderSynchronizationState::Synchronizing", (int64)ETimecodeProviderSynchronizationState::Synchronizing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Closed.ToolTip", "TimecodeProvider has not been initialized or has been shutdown." },
				{ "Error.ToolTip", "Unrecoverable error occurred during Synchronization." },
				{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
				{ "Synchronized.ToolTip", "TimecodeProvider is currently synchronized with the source." },
				{ "Synchronizing.ToolTip", "TimecodeProvider is initialized and being prepared for synchronization." },
				{ "ToolTip", "Possible states of TimecodeProvider." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETimecodeProviderSynchronizationState",
				"ETimecodeProviderSynchronizationState",
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
	void UTimecodeProvider::StaticRegisterNativesUTimecodeProvider()
	{
		UClass* Class = UTimecodeProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFrameRate", &UTimecodeProvider::execGetFrameRate },
			{ "GetSynchronizationState", &UTimecodeProvider::execGetSynchronizationState },
			{ "GetTimecode", &UTimecodeProvider::execGetTimecode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimecodeProvider_eventGetFrameRate_Parms
		{
			FFrameRate ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimecodeProvider_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the frame rate.\nDepending on the implementation, it may or may not be valid only when GetSynchronizationState() is Synchronized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetFrameRate", sizeof(TimecodeProvider_eventGetFrameRate_Parms), Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics
	{
		struct TimecodeProvider_eventGetSynchronizationState_Parms
		{
			ETimecodeProviderSynchronizationState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimecodeProvider_eventGetSynchronizationState_Parms, ReturnValue), Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "The state of the TimecodeProvider and if it's currently synchronized and the Timecode and FrameRate are valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetSynchronizationState", sizeof(TimecodeProvider_eventGetSynchronizationState_Parms), Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TimecodeProvider_eventGetTimecode_Parms
		{
			FTimecode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimecodeProvider_eventGetTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the Timecode at that moment. It may not be in sync with the current frame.\nOnly valid when GetSynchronizationState() is Synchronized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetTimecode", sizeof(TimecodeProvider_eventGetTimecode_Parms), Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister()
	{
		return UTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimecodeProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimecodeProvider_GetFrameRate, "GetFrameRate" }, // 3438568458
		{ &Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState, "GetSynchronizationState" }, // 3721038818
		{ &Z_Construct_UFunction_UTimecodeProvider_GetTimecode, "GetTimecode" }, // 2883254452
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TimecodeProvider.h" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "A class responsible of fetching a timecode from a source.\nNote, FApp::GetTimecode and FApp::GetTimecodeFramerate should be used to retrieve\nthe current system Timecode and Framerate." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimecodeProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimecodeProvider_Statics::ClassParams = {
		&UTimecodeProvider::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimecodeProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimecodeProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimecodeProvider, 3584666268);
	template<> ENGINE_API UClass* StaticClass<UTimecodeProvider>()
	{
		return UTimecodeProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimecodeProvider(Z_Construct_UClass_UTimecodeProvider, &UTimecodeProvider::StaticClass, TEXT("/Script/Engine"), TEXT("UTimecodeProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimecodeProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

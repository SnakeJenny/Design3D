// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Debugging/SlateDebugging.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateDebugging() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent();
// End Cross Module References
	static UEnum* ESlateDebuggingFocusEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateDebuggingFocusEvent"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateDebuggingFocusEvent>()
	{
		return ESlateDebuggingFocusEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateDebuggingFocusEvent(ESlateDebuggingFocusEvent_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESlateDebuggingFocusEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Hash() { return 1980323149U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateDebuggingFocusEvent"), 0, Get_Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateDebuggingFocusEvent::FocusChanging", (int64)ESlateDebuggingFocusEvent::FocusChanging },
				{ "ESlateDebuggingFocusEvent::FocusLost", (int64)ESlateDebuggingFocusEvent::FocusLost },
				{ "ESlateDebuggingFocusEvent::FocusReceived", (int64)ESlateDebuggingFocusEvent::FocusReceived },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Debugging/SlateDebugging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"ESlateDebuggingFocusEvent",
				"ESlateDebuggingFocusEvent",
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
	static UEnum* ESlateDebuggingStateChangeEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateDebuggingStateChangeEvent"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateDebuggingStateChangeEvent>()
	{
		return ESlateDebuggingStateChangeEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateDebuggingStateChangeEvent(ESlateDebuggingStateChangeEvent_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESlateDebuggingStateChangeEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Hash() { return 2822103480U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateDebuggingStateChangeEvent"), 0, Get_Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateDebuggingStateChangeEvent::MouseCaptureGained", (int64)ESlateDebuggingStateChangeEvent::MouseCaptureGained },
				{ "ESlateDebuggingStateChangeEvent::MouseCaptureLost", (int64)ESlateDebuggingStateChangeEvent::MouseCaptureLost },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Debugging/SlateDebugging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"ESlateDebuggingStateChangeEvent",
				"ESlateDebuggingStateChangeEvent",
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
	static UEnum* ESlateDebuggingInputEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateDebuggingInputEvent"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateDebuggingInputEvent>()
	{
		return ESlateDebuggingInputEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateDebuggingInputEvent(ESlateDebuggingInputEvent_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESlateDebuggingInputEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Hash() { return 4186025400U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateDebuggingInputEvent"), 0, Get_Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateDebuggingInputEvent::MouseMove", (int64)ESlateDebuggingInputEvent::MouseMove },
				{ "ESlateDebuggingInputEvent::MouseEnter", (int64)ESlateDebuggingInputEvent::MouseEnter },
				{ "ESlateDebuggingInputEvent::MouseLeave", (int64)ESlateDebuggingInputEvent::MouseLeave },
				{ "ESlateDebuggingInputEvent::MouseButtonDown", (int64)ESlateDebuggingInputEvent::MouseButtonDown },
				{ "ESlateDebuggingInputEvent::MouseButtonUp", (int64)ESlateDebuggingInputEvent::MouseButtonUp },
				{ "ESlateDebuggingInputEvent::MouseButtonDoubleClick", (int64)ESlateDebuggingInputEvent::MouseButtonDoubleClick },
				{ "ESlateDebuggingInputEvent::MouseWheel", (int64)ESlateDebuggingInputEvent::MouseWheel },
				{ "ESlateDebuggingInputEvent::TouchStart", (int64)ESlateDebuggingInputEvent::TouchStart },
				{ "ESlateDebuggingInputEvent::TouchEnd", (int64)ESlateDebuggingInputEvent::TouchEnd },
				{ "ESlateDebuggingInputEvent::DragDetected", (int64)ESlateDebuggingInputEvent::DragDetected },
				{ "ESlateDebuggingInputEvent::DragEnter", (int64)ESlateDebuggingInputEvent::DragEnter },
				{ "ESlateDebuggingInputEvent::DragLeave", (int64)ESlateDebuggingInputEvent::DragLeave },
				{ "ESlateDebuggingInputEvent::DragOver", (int64)ESlateDebuggingInputEvent::DragOver },
				{ "ESlateDebuggingInputEvent::DragDrop", (int64)ESlateDebuggingInputEvent::DragDrop },
				{ "ESlateDebuggingInputEvent::DropMessage", (int64)ESlateDebuggingInputEvent::DropMessage },
				{ "ESlateDebuggingInputEvent::KeyDown", (int64)ESlateDebuggingInputEvent::KeyDown },
				{ "ESlateDebuggingInputEvent::KeyUp", (int64)ESlateDebuggingInputEvent::KeyUp },
				{ "ESlateDebuggingInputEvent::KeyChar", (int64)ESlateDebuggingInputEvent::KeyChar },
				{ "ESlateDebuggingInputEvent::AnalogInput", (int64)ESlateDebuggingInputEvent::AnalogInput },
				{ "ESlateDebuggingInputEvent::TouchGesture", (int64)ESlateDebuggingInputEvent::TouchGesture },
				{ "ESlateDebuggingInputEvent::COUNT", (int64)ESlateDebuggingInputEvent::COUNT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Debugging/SlateDebugging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"ESlateDebuggingInputEvent",
				"ESlateDebuggingInputEvent",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

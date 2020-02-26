// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/TouchInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchInterface() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchInputControl();
	UPackage* Z_Construct_UPackage__Script_Engine();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTouchInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTouchInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FTouchInputControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTouchInputControl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchInputControl, Z_Construct_UPackage__Script_Engine(), TEXT("TouchInputControl"), sizeof(FTouchInputControl), Get_Z_Construct_UScriptStruct_FTouchInputControl_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTouchInputControl>()
{
	return FTouchInputControl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTouchInputControl(FTouchInputControl::StaticStruct, TEXT("/Script/Engine"), TEXT("TouchInputControl"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTouchInputControl
{
	FScriptStruct_Engine_StaticRegisterNativesFTouchInputControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TouchInputControl")),new UScriptStruct::TCppStructOps<FTouchInputControl>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTouchInputControl;
	struct Z_Construct_UScriptStruct_FTouchInputControl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltInputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AltInputKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainInputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainInputKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchInputControl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_AltInputKey_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The alternate input to send from this control (for sticks, this is the vertical axis)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_AltInputKey = { "AltInputKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTouchInputControl, AltInputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_AltInputKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_AltInputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_MainInputKey_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The main input to send from this control (for sticks, this is the horizontal axis)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_MainInputKey = { "MainInputKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTouchInputControl, MainInputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_MainInputKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_MainInputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InputScale_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The scale for control input" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InputScale = { "InputScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTouchInputControl, InputScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InputScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InputScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InteractionSize_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The interactive size of the control (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InteractionSize = { "InteractionSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTouchInputControl, InteractionSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InteractionSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InteractionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_ThumbSize_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "For sticks, the size of the thumb (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_ThumbSize = { "ThumbSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTouchInputControl, ThumbSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_ThumbSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_ThumbSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_VisualSize_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The size of the control (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_VisualSize = { "VisualSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTouchInputControl, VisualSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_VisualSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_VisualSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The center point of the control (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTouchInputControl, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Center_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image2_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "For sticks, this is the Background" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image2 = { "Image2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTouchInputControl, Image2), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image1_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "For sticks, this is the Thumb" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image1 = { "Image1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTouchInputControl, Image1), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchInputControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_AltInputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_MainInputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InputScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InteractionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_ThumbSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_VisualSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TouchInputControl",
		sizeof(FTouchInputControl),
		alignof(FTouchInputControl),
		Z_Construct_UScriptStruct_FTouchInputControl_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTouchInputControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTouchInputControl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TouchInputControl"), sizeof(FTouchInputControl), Get_Z_Construct_UScriptStruct_FTouchInputControl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTouchInputControl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTouchInputControl_Hash() { return 1707583181U; }
	void UTouchInterface::StaticRegisterNativesUTouchInterface()
	{
	}
	UClass* Z_Construct_UClass_UTouchInterface_NoRegister()
	{
		return UTouchInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTouchInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartupDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreventRecenter_MetaData[];
#endif
		static void NewProp_bPreventRecenter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreventRecenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActivationDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUntilReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeUntilReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUntilDeactive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeUntilDeactive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InactiveOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Controls;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Controls_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTouchInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameFramework/TouchInterface.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "Defines an interface by which touch input can be controlled using any number of buttons and virtual joysticks" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_StartupDelay_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "Delay at startup before virtual joystick is drawn" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_StartupDelay = { "StartupDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchInterface, StartupDelay), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_StartupDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_StartupDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "Whether to prevent joystick re-center" },
	};
#endif
	void Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter_SetBit(void* Obj)
	{
		((UTouchInterface*)Obj)->bPreventRecenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter = { "bPreventRecenter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTouchInterface), &Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActivationDelay_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "How long after joystick enabled for touch (0.0 will disable this feature)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActivationDelay = { "ActivationDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchInterface, ActivationDelay), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActivationDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActivationDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilReset_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "How long after going inactive will controls reset/recenter themselves (0.0 will disable this feature)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilReset = { "TimeUntilReset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchInterface, TimeUntilReset), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilReset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilDeactive_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "How long after user interaction will all controls fade out to Inactive Opacity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilDeactive = { "TimeUntilDeactive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchInterface, TimeUntilDeactive), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilDeactive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilDeactive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_InactiveOpacity_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "Opacity (0.0 - 1.0) of all controls while no controls are active" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_InactiveOpacity = { "InactiveOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchInterface, InactiveOpacity), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_InactiveOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_InactiveOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActiveOpacity_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "Opacity (0.0 - 1.0) of all controls while any control is active" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActiveOpacity = { "ActiveOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchInterface, ActiveOpacity), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActiveOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActiveOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls = { "Controls", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchInterface, Controls), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls_Inner = { "Controls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTouchInputControl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_StartupDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActivationDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilDeactive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_InactiveOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActiveOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTouchInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTouchInterface_Statics::ClassParams = {
		&UTouchInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTouchInterface_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTouchInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTouchInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTouchInterface, 4230511702);
	template<> ENGINE_API UClass* StaticClass<UTouchInterface>()
	{
		return UTouchInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTouchInterface(Z_Construct_UClass_UTouchInterface, &UTouchInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UTouchInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Overlay/Public/Overlays.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlays() {}
// Cross Module References
	OVERLAY_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem();
	UPackage* Z_Construct_UPackage__Script_Overlay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FOverlayItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OVERLAY_API uint32 Get_Z_Construct_UScriptStruct_FOverlayItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverlayItem, Z_Construct_UPackage__Script_Overlay(), TEXT("OverlayItem"), sizeof(FOverlayItem), Get_Z_Construct_UScriptStruct_FOverlayItem_Hash());
	}
	return Singleton;
}
template<> OVERLAY_API UScriptStruct* StaticStruct<FOverlayItem>()
{
	return FOverlayItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOverlayItem(FOverlayItem::StaticStruct, TEXT("/Script/Overlay"), TEXT("OverlayItem"), false, nullptr, nullptr);
static struct FScriptStruct_Overlay_StaticRegisterNativesFOverlayItem
{
	FScriptStruct_Overlay_StaticRegisterNativesFOverlayItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OverlayItem")),new UScriptStruct::TCppStructOps<FOverlayItem>);
	}
} ScriptStruct_Overlay_StaticRegisterNativesFOverlayItem;
	struct Z_Construct_UScriptStruct_FOverlayItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOverlayItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverlayItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Display Data" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "The position of the text on screen (Between 0.0 and 1.0)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOverlayItem, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Display Data" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that appears onscreen when the overlay is shown" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOverlayItem, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "Display Times" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "When the overlay should be cleared" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOverlayItem, EndTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Display Times" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "When the overlay should be displayed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOverlayItem, StartTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOverlayItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOverlayItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
		nullptr,
		&NewStructOps,
		"OverlayItem",
		sizeof(FOverlayItem),
		alignof(FOverlayItem),
		Z_Construct_UScriptStruct_FOverlayItem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlayItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOverlayItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Overlay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OverlayItem"), sizeof(FOverlayItem), Get_Z_Construct_UScriptStruct_FOverlayItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOverlayItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOverlayItem_Hash() { return 2163997662U; }
	void UOverlays::StaticRegisterNativesUOverlays()
	{
	}
	UClass* Z_Construct_UClass_UOverlays_NoRegister()
	{
		return UOverlays::StaticClass();
	}
	struct Z_Construct_UClass_UOverlays_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlays_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlays_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Overlays.h" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "An interface class for creating overlay data assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlays_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlays>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOverlays_Statics::ClassParams = {
		&UOverlays::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOverlays_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOverlays_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOverlays()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOverlays_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOverlays, 1923142864);
	template<> OVERLAY_API UClass* StaticClass<UOverlays>()
	{
		return UOverlays::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOverlays(Z_Construct_UClass_UOverlays, &UOverlays::StaticClass, TEXT("/Script/Overlay"), TEXT("UOverlays"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlays);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

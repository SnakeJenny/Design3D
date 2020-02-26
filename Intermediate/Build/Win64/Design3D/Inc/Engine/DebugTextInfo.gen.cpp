// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/DebugTextInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugTextInfo() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugTextInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FDebugTextInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDebugTextInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugTextInfo, Z_Construct_UPackage__Script_Engine(), TEXT("DebugTextInfo"), sizeof(FDebugTextInfo), Get_Z_Construct_UScriptStruct_FDebugTextInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebugTextInfo>()
{
	return FDebugTextInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugTextInfo(FDebugTextInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("DebugTextInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDebugTextInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFDebugTextInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebugTextInfo")),new UScriptStruct::TCppStructOps<FDebugTextInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDebugTextInfo;
	struct Z_Construct_UScriptStruct_FDebugTextInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FontScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrigActorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrigActorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawShadow_MetaData[];
#endif
		static void NewProp_bDrawShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepAttachedToActor_MetaData[];
#endif
		static void NewProp_bKeepAttachedToActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepAttachedToActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteLocation_MetaData[];
#endif
		static void NewProp_bAbsoluteLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcActorDesiredOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SrcActorDesiredOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcActorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SrcActorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "* Single entry of a debug text item to render.\n*\n* @see AHud\n* @see AddDebugText(), RemoveDebugText() and DrawDebugTextList()" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugTextInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_FontScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Scale to apply to font when rendering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_FontScale = { "FontScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugTextInfo, FontScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_FontScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_FontScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Font_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "The Font which to display this as.  Will Default to GetSmallFont()*" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugTextInfo, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_OrigActorLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "When we first spawn store off the original actor location for use with bKeepAttachedToActor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_OrigActorLocation = { "OrigActorLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugTextInfo, OrigActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_OrigActorLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_OrigActorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Whether to draw a shadow for the text" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow_SetBit(void* Obj)
	{
		((FDebugTextInfo*)Obj)->bDrawShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow = { "bDrawShadow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDebugTextInfo), &Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "If the actor moves does the text also move with it?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor_SetBit(void* Obj)
	{
		((FDebugTextInfo*)Obj)->bKeepAttachedToActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor = { "bKeepAttachedToActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDebugTextInfo), &Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "whether the offset should be treated as absolute world location of the string" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation_SetBit(void* Obj)
	{
		((FDebugTextInfo*)Obj)->bAbsoluteLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation = { "bAbsoluteLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDebugTextInfo), &Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TextColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Text color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugTextInfo, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TextColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Duration used to lerp desired offset" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugTextInfo, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TimeRemaining_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Time remaining for the debug text, -1.f == infinite" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugTextInfo, TimeRemaining), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TimeRemaining_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TimeRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_DebugText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Text to display" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_DebugText = { "DebugText", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugTextInfo, DebugText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_DebugText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_DebugText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorDesiredOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Desired offset to interpolate to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorDesiredOffset = { "SrcActorDesiredOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugTextInfo, SrcActorDesiredOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorDesiredOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorDesiredOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Offset from SrcActor.Location to apply" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorOffset = { "SrcActorOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugTextInfo, SrcActorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "AActor related to text item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActor = { "SrcActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugTextInfo, SrcActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugTextInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_FontScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_OrigActorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TimeRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_DebugText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorDesiredOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DebugTextInfo",
		sizeof(FDebugTextInfo),
		alignof(FDebugTextInfo),
		Z_Construct_UScriptStruct_FDebugTextInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugTextInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugTextInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugTextInfo"), sizeof(FDebugTextInfo), Get_Z_Construct_UScriptStruct_FDebugTextInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugTextInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugTextInfo_Hash() { return 1502975567U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

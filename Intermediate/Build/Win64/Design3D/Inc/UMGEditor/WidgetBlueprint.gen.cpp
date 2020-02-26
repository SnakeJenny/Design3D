// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGEditor/Public/WidgetBlueprint.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprint() {}
// Cross Module References
	UMGEDITOR_API UEnum* Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
	UMGEDITOR_API UEnum* Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateEditorBinding();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EBindingKind();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEditorPropertyPath();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEditorPropertyPathSegment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint();
	UNREALED_API UClass* Z_Construct_UClass_UBaseWidgetBlueprint();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetTickFrequency();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	static UEnum* EWidgetCompileTimeTickPrediction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction, Z_Construct_UPackage__Script_UMGEditor(), TEXT("EWidgetCompileTimeTickPrediction"));
		}
		return Singleton;
	}
	template<> UMGEDITOR_API UEnum* StaticEnum<EWidgetCompileTimeTickPrediction>()
	{
		return EWidgetCompileTimeTickPrediction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetCompileTimeTickPrediction(EWidgetCompileTimeTickPrediction_StaticEnum, TEXT("/Script/UMGEditor"), TEXT("EWidgetCompileTimeTickPrediction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Hash() { return 4135563666U; }
	UEnum* Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMGEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetCompileTimeTickPrediction"), 0, Get_Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetCompileTimeTickPrediction::WontTick", (int64)EWidgetCompileTimeTickPrediction::WontTick },
				{ "EWidgetCompileTimeTickPrediction::OnDemand", (int64)EWidgetCompileTimeTickPrediction::OnDemand },
				{ "EWidgetCompileTimeTickPrediction::WillTick", (int64)EWidgetCompileTimeTickPrediction::WillTick },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
				{ "OnDemand.ToolTip", "This widget is set to auto tick and we detect animations, latent actions but not script or native tick methods" },
				{ "ToolTip", "This represents the tickability of a widget computed at compile time\nIt is designed as a hint so the runtime can determine if ticking needs to be enabled\nA lot of widgets set to WillTick means you might have a performance problem" },
				{ "WillTick.ToolTip", "This widget has an implemented script tick or native tick" },
				{ "WontTick.ToolTip", "The widget is manually set to never tick or we dont detect any animations, latent actions, and/or script or possible native tick methods" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMGEditor,
				nullptr,
				"EWidgetCompileTimeTickPrediction",
				"EWidgetCompileTimeTickPrediction",
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
	static UEnum* EWidgetSupportsDynamicCreation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation, Z_Construct_UPackage__Script_UMGEditor(), TEXT("EWidgetSupportsDynamicCreation"));
		}
		return Singleton;
	}
	template<> UMGEDITOR_API UEnum* StaticEnum<EWidgetSupportsDynamicCreation>()
	{
		return EWidgetSupportsDynamicCreation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetSupportsDynamicCreation(EWidgetSupportsDynamicCreation_StaticEnum, TEXT("/Script/UMGEditor"), TEXT("EWidgetSupportsDynamicCreation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Hash() { return 3643277108U; }
	UEnum* Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMGEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetSupportsDynamicCreation"), 0, Get_Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetSupportsDynamicCreation::Default", (int64)EWidgetSupportsDynamicCreation::Default },
				{ "EWidgetSupportsDynamicCreation::Yes", (int64)EWidgetSupportsDynamicCreation::Yes },
				{ "EWidgetSupportsDynamicCreation::No", (int64)EWidgetSupportsDynamicCreation::No },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMGEditor,
				nullptr,
				"EWidgetSupportsDynamicCreation",
				"EWidgetSupportsDynamicCreation",
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
class UScriptStruct* FWidgetAnimation_DEPRECATED::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMGEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED, Z_Construct_UPackage__Script_UMGEditor(), TEXT("WidgetAnimation_DEPRECATED"), sizeof(FWidgetAnimation_DEPRECATED), Get_Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Hash());
	}
	return Singleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FWidgetAnimation_DEPRECATED>()
{
	return FWidgetAnimation_DEPRECATED::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetAnimation_DEPRECATED(FWidgetAnimation_DEPRECATED::StaticStruct, TEXT("/Script/UMGEditor"), TEXT("WidgetAnimation_DEPRECATED"), false, nullptr, nullptr);
static struct FScriptStruct_UMGEditor_StaticRegisterNativesFWidgetAnimation_DEPRECATED
{
	FScriptStruct_UMGEditor_StaticRegisterNativesFWidgetAnimation_DEPRECATED()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetAnimation_DEPRECATED")),new UScriptStruct::TCppStructOps<FWidgetAnimation_DEPRECATED>);
	}
} ScriptStruct_UMGEditor_StaticRegisterNativesFWidgetAnimation_DEPRECATED;
	struct Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "Struct used only for loading old animations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetAnimation_DEPRECATED>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings = { "AnimationBindings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetAnimation_DEPRECATED, AnimationBindings), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings_Inner = { "AnimationBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWidgetAnimationBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetAnimation_DEPRECATED, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_MovieScene_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_MovieScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_MovieScene,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"WidgetAnimation_DEPRECATED",
		sizeof(FWidgetAnimation_DEPRECATED),
		alignof(FWidgetAnimation_DEPRECATED),
		Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMGEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetAnimation_DEPRECATED"), sizeof(FWidgetAnimation_DEPRECATED), Get_Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Hash() { return 4157001456U; }
class UScriptStruct* FDelegateEditorBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMGEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDelegateEditorBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelegateEditorBinding, Z_Construct_UPackage__Script_UMGEditor(), TEXT("DelegateEditorBinding"), sizeof(FDelegateEditorBinding), Get_Z_Construct_UScriptStruct_FDelegateEditorBinding_Hash());
	}
	return Singleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FDelegateEditorBinding>()
{
	return FDelegateEditorBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDelegateEditorBinding(FDelegateEditorBinding::StaticStruct, TEXT("/Script/UMGEditor"), TEXT("DelegateEditorBinding"), false, nullptr, nullptr);
static struct FScriptStruct_UMGEditor_StaticRegisterNativesFDelegateEditorBinding
{
	FScriptStruct_UMGEditor_StaticRegisterNativesFDelegateEditorBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DelegateEditorBinding")),new UScriptStruct::TCppStructOps<FDelegateEditorBinding>);
	}
} ScriptStruct_UMGEditor_StaticRegisterNativesFDelegateEditorBinding;
	struct Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MemberGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelegateEditorBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelegateEditorBinding, Kind), Z_Construct_UEnum_UMG_EBindingKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_MemberGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "If it's an actual Function Graph in the blueprint that we're bound to, there's a GUID we can use to lookup that function, to deal with renames better.  This is that GUID." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_MemberGuid = { "MemberGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelegateEditorBinding, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_MemberGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_MemberGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelegateEditorBinding, SourcePath), Z_Construct_UScriptStruct_FEditorPropertyPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourcePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourcePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourceProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The property we are bindings to directly on the source object." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourceProperty = { "SourceProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelegateEditorBinding, SourceProperty), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourceProperty_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourceProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The function that was generated to return the SourceProperty" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelegateEditorBinding, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_FunctionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The property on the ObjectName that we are binding to." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelegateEditorBinding, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_ObjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The member widget the binding is on, must be a direct variable of the UUserWidget." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelegateEditorBinding, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_ObjectName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_ObjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_MemberGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourcePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourceProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_ObjectName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"DelegateEditorBinding",
		sizeof(FDelegateEditorBinding),
		alignof(FDelegateEditorBinding),
		Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDelegateEditorBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDelegateEditorBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMGEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DelegateEditorBinding"), sizeof(FDelegateEditorBinding), Get_Z_Construct_UScriptStruct_FDelegateEditorBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDelegateEditorBinding_Hash() { return 1108649550U; }
class UScriptStruct* FEditorPropertyPath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMGEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FEditorPropertyPath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorPropertyPath, Z_Construct_UPackage__Script_UMGEditor(), TEXT("EditorPropertyPath"), sizeof(FEditorPropertyPath), Get_Z_Construct_UScriptStruct_FEditorPropertyPath_Hash());
	}
	return Singleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FEditorPropertyPath>()
{
	return FEditorPropertyPath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorPropertyPath(FEditorPropertyPath::StaticStruct, TEXT("/Script/UMGEditor"), TEXT("EditorPropertyPath"), false, nullptr, nullptr);
static struct FScriptStruct_UMGEditor_StaticRegisterNativesFEditorPropertyPath
{
	FScriptStruct_UMGEditor_StaticRegisterNativesFEditorPropertyPath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorPropertyPath")),new UScriptStruct::TCppStructOps<FEditorPropertyPath>);
	}
} ScriptStruct_UMGEditor_StaticRegisterNativesFEditorPropertyPath;
	struct Z_Construct_UScriptStruct_FEditorPropertyPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorPropertyPath>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The path of properties." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorPropertyPath, Segments), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorPropertyPathSegment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"EditorPropertyPath",
		sizeof(FEditorPropertyPath),
		alignof(FEditorPropertyPath),
		Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorPropertyPath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorPropertyPath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMGEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorPropertyPath"), sizeof(FEditorPropertyPath), Get_Z_Construct_UScriptStruct_FEditorPropertyPath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorPropertyPath_Hash() { return 4109774392U; }
class UScriptStruct* FEditorPropertyPathSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMGEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorPropertyPathSegment, Z_Construct_UPackage__Script_UMGEditor(), TEXT("EditorPropertyPathSegment"), sizeof(FEditorPropertyPathSegment), Get_Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Hash());
	}
	return Singleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FEditorPropertyPathSegment>()
{
	return FEditorPropertyPathSegment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorPropertyPathSegment(FEditorPropertyPathSegment::StaticStruct, TEXT("/Script/UMGEditor"), TEXT("EditorPropertyPathSegment"), false, nullptr, nullptr);
static struct FScriptStruct_UMGEditor_StaticRegisterNativesFEditorPropertyPathSegment
{
	FScriptStruct_UMGEditor_StaticRegisterNativesFEditorPropertyPathSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorPropertyPathSegment")),new UScriptStruct::TCppStructOps<FEditorPropertyPathSegment>);
	}
} ScriptStruct_UMGEditor_StaticRegisterNativesFEditorPropertyPathSegment;
	struct Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsProperty_MetaData[];
#endif
		static void NewProp_IsProperty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MemberGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MemberName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorPropertyPathSegment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "true if property, false if function" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty_SetBit(void* Obj)
	{
		((FEditorPropertyPathSegment*)Obj)->IsProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty = { "IsProperty", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEditorPropertyPathSegment), &Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The member guid in this structure this segment represents.  If this is valid it should\nbe used instead of Name to get the true name." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberGuid = { "MemberGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorPropertyPathSegment, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The member name in the structure this segment represents." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorPropertyPathSegment, MemberName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The owner of the path segment (ie. What class or structure was this property from)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorPropertyPathSegment, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_Struct_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_Struct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_Struct,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"EditorPropertyPathSegment",
		sizeof(FEditorPropertyPathSegment),
		alignof(FEditorPropertyPathSegment),
		Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorPropertyPathSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMGEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorPropertyPathSegment"), sizeof(FEditorPropertyPathSegment), Get_Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Hash() { return 1162148602U; }
	void UWidgetBlueprint::StaticRegisterNativesUWidgetBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister()
	{
		return UWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PropertyBindings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickPredictionReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TickPredictionReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickPrediction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TickPrediction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TickPrediction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TickFrequency;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TickFrequency_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimatedTemplateSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EstimatedTemplateSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InclusiveWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InclusiveWidgets;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportDynamicCreation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SupportDynamicCreation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SupportDynamicCreation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceSlowConstructionPath_MetaData[];
#endif
		static void NewProp_bForceSlowConstructionPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSlowConstructionPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaletteCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PaletteCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Animations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseWidgetBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WidgetBlueprint.h" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "The widget blueprint enables extending UUserWidget the user extensible UWidget." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PropertyBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The total number of property bindings.  Consider this as a performance warning." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, PropertyBindings), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PropertyBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PropertyBindings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPredictionReason_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The reasons we may need to tick this widget." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPredictionReason = { "TickPredictionReason", nullptr, (EPropertyFlags)0x0040010000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, TickPredictionReason), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPredictionReason_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPredictionReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The computed frequency that the widget will need to be ticked at.  You can find the reasons for\nthis decision by looking at TickPredictionReason." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction = { "TickPrediction", nullptr, (EPropertyFlags)0x0040010000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, TickPrediction), Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The desired tick frequency set by the user on the UserWidget's CDO." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency = { "TickFrequency", nullptr, (EPropertyFlags)0x0040010000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, TickFrequency), Z_Construct_UEnum_UMG_EWidgetTickFrequency, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_EstimatedTemplateSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The estimated size in bytes of the template class." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_EstimatedTemplateSize = { "EstimatedTemplateSize", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, EstimatedTemplateSize), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_EstimatedTemplateSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_EstimatedTemplateSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_InclusiveWidgets_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The total number of widgets this widget contains.  This is a good way to find the \"largest\" widgets." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_InclusiveWidgets = { "InclusiveWidgets", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, InclusiveWidgets), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_InclusiveWidgets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_InclusiveWidgets_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_SupportDynamicCreation_MetaData[] = {
		{ "Category", "WidgetBlueprintOptions" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "Widgets by default all support calling CreateWidget for them, however for mobile games\nyou may want to disable this by default, or on a per widget basis as it can save several\nMB on a large game from lots of widget templates being cooked ready to make dynamic\nconstruction faster." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_SupportDynamicCreation = { "SupportDynamicCreation", nullptr, (EPropertyFlags)0x0040050800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, SupportDynamicCreation), Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_SupportDynamicCreation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_SupportDynamicCreation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_SupportDynamicCreation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_bForceSlowConstructionPath_MetaData[] = {
		{ "Category", "WidgetBlueprintOptions" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_bForceSlowConstructionPath_SetBit(void* Obj)
	{
		((UWidgetBlueprint*)Obj)->bForceSlowConstructionPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_bForceSlowConstructionPath = { "bForceSlowConstructionPath", nullptr, (EPropertyFlags)0x0010050800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetBlueprint), &Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_bForceSlowConstructionPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_bForceSlowConstructionPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_bForceSlowConstructionPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PaletteCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "Don't directly modify this property to change the palette category.  The actual value is stored\nin the CDO of the UUserWidget, but a copy is stored here so that it's available in the serialized\nTag data in the asset header for access in the FAssetData." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PaletteCategory = { "PaletteCategory", nullptr, (EPropertyFlags)0x0010010800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, PaletteCategory), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PaletteCategory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PaletteCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, Animations), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010008820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, AnimationData_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData_Inner = { "AnimationData", nullptr, (EPropertyFlags)0x0000008820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetBlueprint, Bindings), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDelegateEditorBinding, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PropertyBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPredictionReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_EstimatedTemplateSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_InclusiveWidgets,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_SupportDynamicCreation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_SupportDynamicCreation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_bForceSlowConstructionPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PaletteCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings_Inner,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprint_Statics::ClassParams = {
		&UWidgetBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetBlueprint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetBlueprint, 2170831867);
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetBlueprint>()
	{
		return UWidgetBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetBlueprint(Z_Construct_UClass_UWidgetBlueprint, &UWidgetBlueprint::StaticClass, TEXT("/Script/UMGEditor"), TEXT("UWidgetBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprint);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetBlueprint)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

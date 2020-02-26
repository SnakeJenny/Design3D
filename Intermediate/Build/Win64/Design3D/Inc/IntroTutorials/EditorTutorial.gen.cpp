// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroTutorials/Public/EditorTutorial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTutorial() {}
// Cross Module References
	INTROTUTORIALS_API UEnum* Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
	INTROTUTORIALS_API UEnum* Z_Construct_UEnum_IntroTutorials_ETutorialContent();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialStage();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialWidgetContent();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialContent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialContentAnchor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialCategory();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorial_NoRegister();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_BeginTutorial();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_GetActorReference();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_OpenAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTROTUTORIALS_API UFunction* Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* ETutorialAnchorIdentifier_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier, Z_Construct_UPackage__Script_IntroTutorials(), TEXT("ETutorialAnchorIdentifier"));
		}
		return Singleton;
	}
	template<> INTROTUTORIALS_API UEnum* StaticEnum<ETutorialAnchorIdentifier::Type>()
	{
		return ETutorialAnchorIdentifier_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETutorialAnchorIdentifier(ETutorialAnchorIdentifier_StaticEnum, TEXT("/Script/IntroTutorials"), TEXT("ETutorialAnchorIdentifier"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Hash() { return 2571876633U; }
	UEnum* Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IntroTutorials();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETutorialAnchorIdentifier"), 0, Get_Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETutorialAnchorIdentifier::None", (int64)ETutorialAnchorIdentifier::None },
				{ "ETutorialAnchorIdentifier::NamedWidget", (int64)ETutorialAnchorIdentifier::NamedWidget },
				{ "ETutorialAnchorIdentifier::Asset", (int64)ETutorialAnchorIdentifier::Asset },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Asset.ToolTip", "An asset accessible via the content browser" },
				{ "ModuleRelativePath", "Public/EditorTutorial.h" },
				{ "NamedWidget.ToolTip", "Uses a tutorial wrapper widget" },
				{ "None.ToolTip", "No anchor" },
				{ "ToolTip", "The type of tutorial content to display" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IntroTutorials,
				nullptr,
				"ETutorialAnchorIdentifier",
				"ETutorialAnchorIdentifier::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETutorialContent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IntroTutorials_ETutorialContent, Z_Construct_UPackage__Script_IntroTutorials(), TEXT("ETutorialContent"));
		}
		return Singleton;
	}
	template<> INTROTUTORIALS_API UEnum* StaticEnum<ETutorialContent::Type>()
	{
		return ETutorialContent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETutorialContent(ETutorialContent_StaticEnum, TEXT("/Script/IntroTutorials"), TEXT("ETutorialContent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IntroTutorials_ETutorialContent_Hash() { return 206967652U; }
	UEnum* Z_Construct_UEnum_IntroTutorials_ETutorialContent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IntroTutorials();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETutorialContent"), 0, Get_Z_Construct_UEnum_IntroTutorials_ETutorialContent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETutorialContent::None", (int64)ETutorialContent::None },
				{ "ETutorialContent::Text", (int64)ETutorialContent::Text },
				{ "ETutorialContent::UDNExcerpt", (int64)ETutorialContent::UDNExcerpt },
				{ "ETutorialContent::RichText", (int64)ETutorialContent::RichText },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EditorTutorial.h" },
				{ "None.ToolTip", "Blank - displays no content" },
				{ "RichText.ToolTip", "Rich text content" },
				{ "ScriptName", "TutorialContentType" },
				{ "Text.ToolTip", "Plain text content" },
				{ "ToolTip", "The type of tutorial content to display" },
				{ "UDNExcerpt.ToolTip", "Content from a UDN excerpt" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IntroTutorials,
				nullptr,
				"ETutorialContent",
				"ETutorialContent::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTutorialStage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTROTUTORIALS_API uint32 Get_Z_Construct_UScriptStruct_FTutorialStage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialStage, Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialStage"), sizeof(FTutorialStage), Get_Z_Construct_UScriptStruct_FTutorialStage_Hash());
	}
	return Singleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialStage>()
{
	return FTutorialStage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialStage(FTutorialStage::StaticStruct, TEXT("/Script/IntroTutorials"), TEXT("TutorialStage"), false, nullptr, nullptr);
static struct FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialStage
{
	FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialStage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialStage")),new UScriptStruct::TCppStructOps<FTutorialStage>);
	}
} ScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialStage;
	struct Z_Construct_UScriptStruct_FTutorialStage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertPlatformTest_MetaData[];
#endif
		static void NewProp_bInvertPlatformTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertPlatformTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformsToTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlatformsToTest;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformsToTest_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BackButtonText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NextButtonText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetContent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetContent_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "A single tutorial stage, containing the optional main content & a number of widgets with content attached" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialStage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialStage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "If false, stage will be skipped if running on any platform in PlatformsToTest. If true, the stage will be if not running on any platform in PlatformsToTest." },
	};
#endif
	void Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest_SetBit(void* Obj)
	{
		((FTutorialStage*)Obj)->bInvertPlatformTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest = { "bInvertPlatformTest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTutorialStage), &Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "List of platforms to test against. Meaning of test is determined by InvertPlatformTest." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest = { "PlatformsToTest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialStage, PlatformsToTest), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest_Inner = { "PlatformsToTest", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_BackButtonText_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Text to display on the back button" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_BackButtonText = { "BackButtonText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialStage, BackButtonText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_BackButtonText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_BackButtonText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_NextButtonText_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Text to display on the next button" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_NextButtonText = { "NextButtonText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialStage, NextButtonText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_NextButtonText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_NextButtonText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Widget-bound content to display for this stage" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent = { "WidgetContent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialStage, WidgetContent), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent_Inner = { "WidgetContent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTutorialWidgetContent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Non-widget-bound content to display in this stage" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialStage, Content), Z_Construct_UScriptStruct_FTutorialContent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Identifier for this stage" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialStage, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialStage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_BackButtonText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_NextButtonText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialStage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialStage",
		sizeof(FTutorialStage),
		alignof(FTutorialStage),
		Z_Construct_UScriptStruct_FTutorialStage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialStage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialStage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_IntroTutorials();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialStage"), sizeof(FTutorialStage), Get_Z_Construct_UScriptStruct_FTutorialStage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialStage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialStage_Hash() { return 1335150675U; }
class UScriptStruct* FTutorialWidgetContent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTROTUTORIALS_API uint32 Get_Z_Construct_UScriptStruct_FTutorialWidgetContent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialWidgetContent, Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialWidgetContent"), sizeof(FTutorialWidgetContent), Get_Z_Construct_UScriptStruct_FTutorialWidgetContent_Hash());
	}
	return Singleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialWidgetContent>()
{
	return FTutorialWidgetContent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialWidgetContent(FTutorialWidgetContent::StaticStruct, TEXT("/Script/IntroTutorials"), TEXT("TutorialWidgetContent"), false, nullptr, nullptr);
static struct FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialWidgetContent
{
	FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialWidgetContent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialWidgetContent")),new UScriptStruct::TCppStructOps<FTutorialWidgetContent>);
	}
} ScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialWidgetContent;
	struct Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoFocus_MetaData[];
#endif
		static void NewProp_bAutoFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContentWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetAnchor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetAnchor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content that is displayed relative to a widget" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialWidgetContent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus_MetaData[] = {
		{ "Category", "Anchor" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "If this a node that can be focused (EG a blueprint node) should we auto focus on it" },
	};
#endif
	void Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus_SetBit(void* Obj)
	{
		((FTutorialWidgetContent*)Obj)->bAutoFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus = { "bAutoFocus", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTutorialWidgetContent), &Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_ContentWidth_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content width - text will be wrapped at this point" },
		{ "UIMax", "600.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_ContentWidth = { "ContentWidth", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialWidgetContent, ContentWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_ContentWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_ContentWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Custom offset from widget" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialWidgetContent, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialWidgetContent, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_VerticalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialWidgetContent, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_WidgetAnchor_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Anchor for content widget to highlight" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_WidgetAnchor = { "WidgetAnchor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialWidgetContent, WidgetAnchor), Z_Construct_UScriptStruct_FTutorialContentAnchor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_WidgetAnchor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_WidgetAnchor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content to associate with widget" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialWidgetContent, Content), Z_Construct_UScriptStruct_FTutorialContent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_ContentWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_WidgetAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Content,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialWidgetContent",
		sizeof(FTutorialWidgetContent),
		alignof(FTutorialWidgetContent),
		Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialWidgetContent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialWidgetContent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_IntroTutorials();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialWidgetContent"), sizeof(FTutorialWidgetContent), Get_Z_Construct_UScriptStruct_FTutorialWidgetContent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialWidgetContent_Hash() { return 3674978724U; }
class UScriptStruct* FTutorialContentAnchor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTROTUTORIALS_API uint32 Get_Z_Construct_UScriptStruct_FTutorialContentAnchor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialContentAnchor, Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialContentAnchor"), sizeof(FTutorialContentAnchor), Get_Z_Construct_UScriptStruct_FTutorialContentAnchor_Hash());
	}
	return Singleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialContentAnchor>()
{
	return FTutorialContentAnchor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialContentAnchor(FTutorialContentAnchor::StaticStruct, TEXT("/Script/IntroTutorials"), TEXT("TutorialContentAnchor"), false, nullptr, nullptr);
static struct FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialContentAnchor
{
	FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialContentAnchor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialContentAnchor")),new UScriptStruct::TCppStructOps<FTutorialContentAnchor>);
	}
} ScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialContentAnchor;
	struct Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OuterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GUIDString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GUIDString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabToFocusOrOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TabToFocusOrOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawHighlight_MetaData[];
#endif
		static void NewProp_bDrawHighlight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawHighlight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrapperIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WrapperIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "A way of identifying something to be highlighted by a tutorial" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialContentAnchor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_OuterName_MetaData[] = {
		{ "Category", "AnchorMeta|FBlueprintGraphNodeMetaData" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Name of the outer object - should be the blueprint that 'owns' the node" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_OuterName = { "OuterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContentAnchor, OuterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_OuterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_OuterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_GUIDString_MetaData[] = {
		{ "Category", "AnchorMeta|FBlueprintGraphNodeMetaData" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "The GUID string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_GUIDString = { "GUIDString", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContentAnchor, GUIDString), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_GUIDString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_GUIDString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "AnchorMeta|FBlueprintGraphNodeMetaData" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "User friendly name to display in the dialog" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContentAnchor, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_FriendlyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_TabToFocusOrOpen_MetaData[] = {
		{ "Category", "Anchor" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Tab on which to focus (EG 'My Blueprint' tab)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_TabToFocusOrOpen = { "TabToFocusOrOpen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContentAnchor, TabToFocusOrOpen), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_TabToFocusOrOpen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_TabToFocusOrOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight_MetaData[] = {
		{ "Category", "Anchor" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Whether to draw an animated highlight around the widget" },
	};
#endif
	void Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight_SetBit(void* Obj)
	{
		((FTutorialContentAnchor*)Obj)->bDrawHighlight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight = { "bDrawHighlight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTutorialContentAnchor), &Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Anchor" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "If reference is an asset, we use this to resolve it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContentAnchor, Asset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Asset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_WrapperIdentifier_MetaData[] = {
		{ "Category", "Anchor" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "If widget is in a wrapper widget, this is the wrapper widget name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_WrapperIdentifier = { "WrapperIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContentAnchor, WrapperIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_WrapperIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_WrapperIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Anchor" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContentAnchor, Type), Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_OuterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_GUIDString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_TabToFocusOrOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_WrapperIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialContentAnchor",
		sizeof(FTutorialContentAnchor),
		alignof(FTutorialContentAnchor),
		Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialContentAnchor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialContentAnchor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_IntroTutorials();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialContentAnchor"), sizeof(FTutorialContentAnchor), Get_Z_Construct_UScriptStruct_FTutorialContentAnchor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialContentAnchor_Hash() { return 1846716581U; }
class UScriptStruct* FTutorialContent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTROTUTORIALS_API uint32 Get_Z_Construct_UScriptStruct_FTutorialContent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialContent, Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialContent"), sizeof(FTutorialContent), Get_Z_Construct_UScriptStruct_FTutorialContent_Hash());
	}
	return Singleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialContent>()
{
	return FTutorialContent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialContent(FTutorialContent::StaticStruct, TEXT("/Script/IntroTutorials"), TEXT("TutorialContent"), false, nullptr, nullptr);
static struct FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialContent
{
	FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialContent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialContent")),new UScriptStruct::TCppStructOps<FTutorialContent>);
	}
} ScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialContent;
	struct Z_Construct_UScriptStruct_FTutorialContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcerptName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcerptName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content wrapper" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialContent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Localized text to use with this content" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContent, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_ExcerptName_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Excerpt name for UDN excerpt" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_ExcerptName = { "ExcerptName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContent, ExcerptName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_ExcerptName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_ExcerptName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content reference string, path etc." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContent, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "The type of this content" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContent, Type), Z_Construct_UEnum_IntroTutorials_ETutorialContent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_ExcerptName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialContent",
		sizeof(FTutorialContent),
		alignof(FTutorialContent),
		Z_Construct_UScriptStruct_FTutorialContent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialContent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialContent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_IntroTutorials();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialContent"), sizeof(FTutorialContent), Get_Z_Construct_UScriptStruct_FTutorialContent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialContent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialContent_Hash() { return 3225514618U; }
class UScriptStruct* FTutorialCategory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTROTUTORIALS_API uint32 Get_Z_Construct_UScriptStruct_FTutorialCategory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialCategory, Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialCategory"), sizeof(FTutorialCategory), Get_Z_Construct_UScriptStruct_FTutorialCategory_Hash());
	}
	return Singleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialCategory>()
{
	return FTutorialCategory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialCategory(FTutorialCategory::StaticStruct, TEXT("/Script/IntroTutorials"), TEXT("TutorialCategory"), false, nullptr, nullptr);
static struct FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialCategory
{
	FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialCategory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialCategory")),new UScriptStruct::TCppStructOps<FTutorialCategory>);
	}
} ScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialCategory;
	struct Z_Construct_UScriptStruct_FTutorialCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Category description" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialCategory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowedClasses", "Texture2D" },
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Texture for this tutorial, used when presented to the user in the tutorial browser." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialCategory, Texture), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Icon for this tutorial, used when presented to the user in the tutorial browser. Only used if there isn't a valid texture to use." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialCategory, Icon), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Icon_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Localized text to use to describe this category" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialCategory, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_SortOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Sort order, used by the tutorial browser - set in editor game-agnostic INI file" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialCategory, SortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_SortOrder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Title of the category" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialCategory, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Period-separated category name, e.g. \"Editor Quickstart.Level Editor\"" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialCategory, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Identifier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Identifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Identifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialCategory",
		sizeof(FTutorialCategory),
		alignof(FTutorialCategory),
		Z_Construct_UScriptStruct_FTutorialCategory_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialCategory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialCategory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_IntroTutorials();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialCategory"), sizeof(FTutorialCategory), Get_Z_Construct_UScriptStruct_FTutorialCategory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialCategory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialCategory_Hash() { return 2934050842U; }
	static FName NAME_UEditorTutorial_OnTutorialClosed = FName(TEXT("OnTutorialClosed"));
	void UEditorTutorial::OnTutorialClosed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorTutorial_OnTutorialClosed),NULL);
	}
	static FName NAME_UEditorTutorial_OnTutorialLaunched = FName(TEXT("OnTutorialLaunched"));
	void UEditorTutorial::OnTutorialLaunched()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorTutorial_OnTutorialLaunched),NULL);
	}
	static FName NAME_UEditorTutorial_OnTutorialStageEnded = FName(TEXT("OnTutorialStageEnded"));
	void UEditorTutorial::OnTutorialStageEnded(FName StageName)
	{
		EditorTutorial_eventOnTutorialStageEnded_Parms Parms;
		Parms.StageName=StageName;
		ProcessEvent(FindFunctionChecked(NAME_UEditorTutorial_OnTutorialStageEnded),&Parms);
	}
	static FName NAME_UEditorTutorial_OnTutorialStageStarted = FName(TEXT("OnTutorialStageStarted"));
	void UEditorTutorial::OnTutorialStageStarted(FName StageName)
	{
		EditorTutorial_eventOnTutorialStageStarted_Parms Parms;
		Parms.StageName=StageName;
		ProcessEvent(FindFunctionChecked(NAME_UEditorTutorial_OnTutorialStageStarted),&Parms);
	}
	void UEditorTutorial::StaticRegisterNativesUEditorTutorial()
	{
		UClass* Class = UEditorTutorial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTutorial", &UEditorTutorial::execBeginTutorial },
			{ "GetActorReference", &UEditorTutorial::execGetActorReference },
			{ "GetEngineFolderVisibilty", &UEditorTutorial::execGetEngineFolderVisibilty },
			{ "GoToNextTutorialStage", &UEditorTutorial::execGoToNextTutorialStage },
			{ "GoToPreviousTutorialStage", &UEditorTutorial::execGoToPreviousTutorialStage },
			{ "OpenAsset", &UEditorTutorial::execOpenAsset },
			{ "SetEngineFolderVisibilty", &UEditorTutorial::execSetEngineFolderVisibilty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics
	{
		struct EditorTutorial_eventBeginTutorial_Parms
		{
			UEditorTutorial* TutorialToStart;
			bool bRestart;
		};
		static void NewProp_bRestart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TutorialToStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_bRestart_SetBit(void* Obj)
	{
		((EditorTutorial_eventBeginTutorial_Parms*)Obj)->bRestart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_bRestart = { "bRestart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorTutorial_eventBeginTutorial_Parms), &Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_bRestart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_TutorialToStart = { "TutorialToStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorTutorial_eventBeginTutorial_Parms, TutorialToStart), Z_Construct_UClass_UEditorTutorial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_bRestart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_TutorialToStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Begin a tutorial. Note that this will end the current tutorial that is in progress, if any" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "BeginTutorial", sizeof(EditorTutorial_eventBeginTutorial_Parms), Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_BeginTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics
	{
		struct EditorTutorial_eventGetActorReference_Parms
		{
			FString PathToActor;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorTutorial_eventGetActorReference_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::NewProp_PathToActor = { "PathToActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorTutorial_eventGetActorReference_Parms, PathToActor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::NewProp_PathToActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Attempts to find the actor specified by PathToActor in the current editor world\n@param        PathToActor     The path to the actor (e.g. PersistentLevel.PlayerStart)\n@return       A reference to the actor, or none if it wasn't found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "GetActorReference", sizeof(EditorTutorial_eventGetActorReference_Parms), Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_GetActorReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics
	{
		struct EditorTutorial_eventGetEngineFolderVisibilty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorTutorial_eventGetEngineFolderVisibilty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorTutorial_eventGetEngineFolderVisibilty_Parms), &Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Returns the visibility of the engine folder in the content browser" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "GetEngineFolderVisibilty", sizeof(EditorTutorial_eventGetEngineFolderVisibilty_Parms), Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Advance to the next stage of a tutorial" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "GoToNextTutorialStage", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Advance to the previous stage of a tutorial" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "GoToPreviousTutorialStage", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Event fired when a tutorial is closed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "OnTutorialClosed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Event fired when a tutorial is launched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "OnTutorialLaunched", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::NewProp_StageName = { "StageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorTutorial_eventOnTutorialStageEnded_Parms, StageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::NewProp_StageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Event fired when a tutorial stage ends" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "OnTutorialStageEnded", sizeof(EditorTutorial_eventOnTutorialStageEnded_Parms), Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::NewProp_StageName = { "StageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorTutorial_eventOnTutorialStageStarted_Parms, StageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::NewProp_StageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Event fired when a tutorial stage begins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "OnTutorialStageStarted", sizeof(EditorTutorial_eventOnTutorialStageStarted_Parms), Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics
	{
		struct EditorTutorial_eventOpenAsset_Parms
		{
			UObject* Asset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorTutorial_eventOpenAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Open an asset for use by a tutorial\n@param       Asset   The asset to open" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "OpenAsset", sizeof(EditorTutorial_eventOpenAsset_Parms), Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_OpenAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics
	{
		struct EditorTutorial_eventSetEngineFolderVisibilty_Parms
		{
			bool bNewVisibility;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((EditorTutorial_eventSetEngineFolderVisibilty_Parms*)Obj)->bNewVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorTutorial_eventSetEngineFolderVisibilty_Parms), &Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Sets the visibility of the engine folder in the content browser" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "SetEngineFolderVisibilty", sizeof(EditorTutorial_eventSetEngineFolderVisibilty_Parms), Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorTutorial_NoRegister()
	{
		return UEditorTutorial::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTutorial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SearchTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideInBrowser_MetaData[];
#endif
		static void NewProp_bHideInBrowser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideInBrowser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetToUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetToUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStandalone_MetaData[];
#endif
		static void NewProp_bIsStandalone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStandalone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextTutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousTutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Stages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SummaryContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SummaryContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTutorial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorTutorial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorTutorial_BeginTutorial, "BeginTutorial" }, // 3382321473
		{ &Z_Construct_UFunction_UEditorTutorial_GetActorReference, "GetActorReference" }, // 3968733485
		{ &Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty, "GetEngineFolderVisibilty" }, // 3568749697
		{ &Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage, "GoToNextTutorialStage" }, // 2688721504
		{ &Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage, "GoToPreviousTutorialStage" }, // 3864983271
		{ &Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed, "OnTutorialClosed" }, // 1570207811
		{ &Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched, "OnTutorialLaunched" }, // 1483957868
		{ &Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded, "OnTutorialStageEnded" }, // 3292476519
		{ &Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted, "OnTutorialStageStarted" }, // 3271179049
		{ &Z_Construct_UFunction_UEditorTutorial_OpenAsset, "OpenAsset" }, // 2444994369
		{ &Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty, "SetEngineFolderVisibilty" }, // 114256775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "EditorTutorial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "An asset used to build a stage-by-stage tutorial in the editor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SearchTags_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Comma seperated list of tags the search will use to help find this tutorial" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SearchTags = { "SearchTags", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, SearchTags), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SearchTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SearchTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Hide this tutorial in the tutorials browser" },
	};
#endif
	void Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser_SetBit(void* Obj)
	{
		((UEditorTutorial*)Obj)->bHideInBrowser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser = { "bHideInBrowser", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorTutorial), &Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_ImportPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "The path this tutorial was imported from, if any." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, ImportPath), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_ImportPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_ImportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_AssetToUse_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Asset to open & attach the tutorial to. Non-widget-bound content will appear in the asset's window" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_AssetToUse = { "AssetToUse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, AssetToUse), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_AssetToUse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_AssetToUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "A standalone tutorial displays no navigation buttons and each content widget has a close button" },
	};
#endif
	void Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone_SetBit(void* Obj)
	{
		((UEditorTutorial*)Obj)->bIsStandalone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone = { "bIsStandalone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorTutorial), &Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_NextTutorial_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "MetaClass", "EditorTutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Tutorial to optionally chain onto after this tutorial completes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_NextTutorial = { "NextTutorial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, NextTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_NextTutorial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_NextTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_PreviousTutorial_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "MetaClass", "EditorTutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Tutorial to optionally chain back to if the \"back\" button is clicked on the first stage" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_PreviousTutorial = { "PreviousTutorial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, PreviousTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_PreviousTutorial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_PreviousTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages_MetaData[] = {
		{ "Category", "Stages" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "The various stages of this tutorial" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages = { "Stages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, Stages), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages_Inner = { "Stages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTutorialStage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SummaryContent_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content to be displayed for this tutorial when presented to the user in summary" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SummaryContent = { "SummaryContent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, SummaryContent), Z_Construct_UScriptStruct_FTutorialContent, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SummaryContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SummaryContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Category of this tutorial, used to organize tutorials when presented to the user" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, Category), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Texture for this tutorial, used when presented to the user in the tutorial browser." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Icon name for this tutorial, used when presented to the user in the tutorial browser. This is a name for the icon in the Slate editor style. Only used if there isn't a valid texture to use." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, Icon), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Icon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Sorting priority, used by the tutorial browser" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, SortOrder), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SortOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Title of this tutorial, used when presented to the user" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorial, Title), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SearchTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_ImportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_AssetToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_NextTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_PreviousTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SummaryContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Title,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTutorial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTutorial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorTutorial_Statics::ClassParams = {
		&UEditorTutorial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorTutorial_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTutorial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorTutorial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorTutorial, 1599777924);
	template<> INTROTUTORIALS_API UClass* StaticClass<UEditorTutorial>()
	{
		return UEditorTutorial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorTutorial(Z_Construct_UClass_UEditorTutorial, &UEditorTutorial::StaticClass, TEXT("/Script/IntroTutorials"), TEXT("UEditorTutorial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTutorial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TextureEditor/Classes/TextureEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureEditorSettings() {}
// Cross Module References
	TEXTUREEDITOR_API UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode();
	UPackage* Z_Construct_UPackage__Script_TextureEditor();
	TEXTUREEDITOR_API UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds();
	TEXTUREEDITOR_API UClass* Z_Construct_UClass_UTextureEditorSettings_NoRegister();
	TEXTUREEDITOR_API UClass* Z_Construct_UClass_UTextureEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* ETextureEditorVolumeViewMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode, Z_Construct_UPackage__Script_TextureEditor(), TEXT("ETextureEditorVolumeViewMode"));
		}
		return Singleton;
	}
	template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorVolumeViewMode>()
	{
		return ETextureEditorVolumeViewMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureEditorVolumeViewMode(ETextureEditorVolumeViewMode_StaticEnum, TEXT("/Script/TextureEditor"), TEXT("ETextureEditorVolumeViewMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Hash() { return 258706196U; }
	UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TextureEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureEditorVolumeViewMode"), 0, Get_Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TextureEditorVolumeViewMode_DepthSlices", (int64)TextureEditorVolumeViewMode_DepthSlices },
				{ "TextureEditorVolumeViewMode_VolumeTrace", (int64)TextureEditorVolumeViewMode_VolumeTrace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
				{ "TextureEditorVolumeViewMode_DepthSlices.DisplayName", "Depth Slices" },
				{ "TextureEditorVolumeViewMode_VolumeTrace.DisplayName", "Trace Into Volume" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TextureEditor,
				nullptr,
				"ETextureEditorVolumeViewMode",
				"ETextureEditorVolumeViewMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextureEditorBackgrounds_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds, Z_Construct_UPackage__Script_TextureEditor(), TEXT("ETextureEditorBackgrounds"));
		}
		return Singleton;
	}
	template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorBackgrounds>()
	{
		return ETextureEditorBackgrounds_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureEditorBackgrounds(ETextureEditorBackgrounds_StaticEnum, TEXT("/Script/TextureEditor"), TEXT("ETextureEditorBackgrounds"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Hash() { return 3111060614U; }
	UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TextureEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureEditorBackgrounds"), 0, Get_Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TextureEditorBackground_SolidColor", (int64)TextureEditorBackground_SolidColor },
				{ "TextureEditorBackground_Checkered", (int64)TextureEditorBackground_Checkered },
				{ "TextureEditorBackground_CheckeredFill", (int64)TextureEditorBackground_CheckeredFill },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
				{ "TextureEditorBackground_Checkered.DisplayName", "Checkered" },
				{ "TextureEditorBackground_CheckeredFill.DisplayName", "Checkered (Fill)" },
				{ "TextureEditorBackground_SolidColor.DisplayName", "Solid Color" },
				{ "ToolTip", "Enumerates background for the texture editor view port." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TextureEditor,
				nullptr,
				"ETextureEditorBackgrounds",
				"ETextureEditorBackgrounds",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTextureEditorSettings::StaticRegisterNativesUTextureEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UTextureEditorSettings_NoRegister()
	{
		return UTextureEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTextureEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureBorderEnabled_MetaData[];
#endif
		static void NewProp_TextureBorderEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TextureBorderEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureBorderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureBorderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FitToViewport_MetaData[];
#endif
		static void NewProp_FitToViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FitToViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckerSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CheckerSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckerColorTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckerColorTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckerColorOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckerColorOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeViewMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VolumeViewMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Background;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TextureEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TextureEditorSettings.h" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "If true, displays a border around the texture." },
	};
#endif
	void Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled_SetBit(void* Obj)
	{
		((UTextureEditorSettings*)Obj)->TextureBorderEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled = { "TextureBorderEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextureEditorSettings), &Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderColor_MetaData[] = {
		{ "Category", "TextureBorder" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "Color to use for the texture border, if enabled." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderColor = { "TextureBorderColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureEditorSettings, TextureBorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "Whether the texture should scale to fit the view port." },
	};
#endif
	void Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport_SetBit(void* Obj)
	{
		((UTextureEditorSettings*)Obj)->FitToViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport = { "FitToViewport", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextureEditorSettings), &Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerSize_MetaData[] = {
		{ "Category", "Background" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The size of the checkered background tiles." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerSize = { "CheckerSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureEditorSettings, CheckerSize), METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorTwo_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The second color of the checkered background." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorTwo = { "CheckerColorTwo", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureEditorSettings, CheckerColorTwo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorTwo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorOne_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The first color of the checkered background." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorOne = { "CheckerColorOne", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureEditorSettings, CheckerColorOne), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorOne_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "Background and foreground color used by Texture preview view ports." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureEditorSettings, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_BackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_VolumeViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The type of display when viewing volume textures." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_VolumeViewMode = { "VolumeViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureEditorSettings, VolumeViewMode), Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_VolumeViewMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_VolumeViewMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Background_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The type of background to draw in the texture editor view port." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureEditorSettings, Background), Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Background_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Background_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_BackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_VolumeViewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Background,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureEditorSettings_Statics::ClassParams = {
		&UTextureEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureEditorSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureEditorSettings, 29206273);
	template<> TEXTUREEDITOR_API UClass* StaticClass<UTextureEditorSettings>()
	{
		return UTextureEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureEditorSettings(Z_Construct_UClass_UTextureEditorSettings, &UTextureEditorSettings::StaticClass, TEXT("/Script/TextureEditor"), TEXT("UTextureEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

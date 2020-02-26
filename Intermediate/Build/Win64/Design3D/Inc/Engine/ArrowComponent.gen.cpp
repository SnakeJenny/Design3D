// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ArrowComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrowComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteCategoryInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UArrowComponent::StaticRegisterNativesUArrowComponent()
	{
		UClass* Class = UArrowComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetArrowColor", &UArrowComponent::execSetArrowColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics
	{
		struct ArrowComponent_eventSetArrowColor_Parms
		{
			FLinearColor NewColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArrowComponent_eventSetArrowColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Arrow" },
		{ "DisplayName", "SetArrowColor" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Updates the arrow's colour, and tells it to refresh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetArrowColor", sizeof(ArrowComponent_eventSetArrowColor_Parms), Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArrowComponent_NoRegister()
	{
		return UArrowComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArrowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInEditorScaling_MetaData[];
#endif
		static void NewProp_bUseInEditorScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInEditorScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLightAttachment_MetaData[];
#endif
		static void NewProp_bLightAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLightAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpriteCategoryName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatAsASprite_MetaData[];
#endif
		static void NewProp_bTreatAsASprite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatAsASprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScreenSizeScaled_MetaData[];
#endif
		static void NewProp_bIsScreenSizeScaled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScreenSizeScaled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrowColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArrowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArrowComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArrowComponent_SetArrowColor, "SetArrowColor" }, // 3222278594
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility Trigger" },
		{ "IncludePath", "Components/ArrowComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "A simple arrow rendered using lines. Useful for indicating which way an object is facing." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_MetaData[] = {
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale)" },
	};
#endif
	void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_SetBit(void* Obj)
	{
		((UArrowComponent*)Obj)->bUseInEditorScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling = { "bUseInEditorScaling", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "If true, this arrow component is attached to a light actor" },
	};
#endif
	void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_SetBit(void* Obj)
	{
		((UArrowComponent*)Obj)->bLightAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment = { "bLightAttachment", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Sprite category information regarding the arrow component, if being treated as a sprite." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo = { "SpriteInfo", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArrowComponent, SpriteInfo), Z_Construct_UScriptStruct_FSpriteCategoryInfo, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Sprite category that the arrow component belongs to, if being treated as a sprite. Value serves as a key into the localization file." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName = { "SpriteCategoryName", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArrowComponent, SpriteCategoryName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_MetaData[] = {
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "If true, don't show the arrow when EngineShowFlags.BillboardSprites is disabled." },
	};
#endif
	void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_SetBit(void* Obj)
	{
		((UArrowComponent*)Obj)->bTreatAsASprite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite = { "bTreatAsASprite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "The size on screen to limit this arrow to (in screen space)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArrowComponent, ScreenSize), METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_MetaData[] = {
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Set to limit the screen size of this arrow" },
	};
#endif
	void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_SetBit(void* Obj)
	{
		((UArrowComponent*)Obj)->bIsScreenSizeScaled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled = { "bIsScreenSizeScaled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize_MetaData[] = {
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArrowComponent, ArrowSize), METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor_MetaData[] = {
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor = { "ArrowColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArrowComponent, ArrowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArrowComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArrowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArrowComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArrowComponent_Statics::ClassParams = {
		&UArrowComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArrowComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArrowComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArrowComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArrowComponent, 2396320695);
	template<> ENGINE_API UClass* StaticClass<UArrowComponent>()
	{
		return UArrowComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArrowComponent(Z_Construct_UClass_UArrowComponent, &UArrowComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UArrowComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArrowComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/VREditorWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorWidgetComponent() {}
// Cross Module References
	VREDITOR_API UEnum* Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
// End Cross Module References
	static UEnum* EVREditorWidgetDrawingPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy, Z_Construct_UPackage__Script_VREditor(), TEXT("EVREditorWidgetDrawingPolicy"));
		}
		return Singleton;
	}
	template<> VREDITOR_API UEnum* StaticEnum<EVREditorWidgetDrawingPolicy>()
	{
		return EVREditorWidgetDrawingPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVREditorWidgetDrawingPolicy(EVREditorWidgetDrawingPolicy_StaticEnum, TEXT("/Script/VREditor"), TEXT("EVREditorWidgetDrawingPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Hash() { return 4075125508U; }
	UEnum* Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VREditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVREditorWidgetDrawingPolicy"), 0, Get_Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVREditorWidgetDrawingPolicy::Always", (int64)EVREditorWidgetDrawingPolicy::Always },
				{ "EVREditorWidgetDrawingPolicy::Hovering", (int64)EVREditorWidgetDrawingPolicy::Hovering },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "VREditorWidgetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VREditor,
				nullptr,
				"EVREditorWidgetDrawingPolicy",
				"EVREditorWidgetDrawingPolicy",
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
	void UVREditorWidgetComponent::StaticRegisterNativesUVREditorWidgetComponent()
	{
	}
	UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister()
	{
		return UVREditorWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasEverDrawn_MetaData[];
#endif
		static void NewProp_bHasEverDrawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasEverDrawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHovering_MetaData[];
#endif
		static void NewProp_bIsHovering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHovering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DrawingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawingPolicy_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "VREditorWidgetComponent.h" },
		{ "ModuleRelativePath", "VREditorWidgetComponent.h" },
		{ "ToolTip", "A specialized WidgetComponent for the VREditor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn_MetaData[] = {
		{ "ModuleRelativePath", "VREditorWidgetComponent.h" },
		{ "ToolTip", "Recorders if we've drawn at least once, that way we can always draw the first\nframe then go manual after that." },
	};
#endif
	void Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn_SetBit(void* Obj)
	{
		((UVREditorWidgetComponent*)Obj)->bHasEverDrawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn = { "bHasEverDrawn", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVREditorWidgetComponent), &Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering_MetaData[] = {
		{ "ModuleRelativePath", "VREditorWidgetComponent.h" },
		{ "ToolTip", "Controls if we draw, the VREditorWidget allows for manual enabling or\ndisabling of updating the slate widget." },
	};
#endif
	void Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering_SetBit(void* Obj)
	{
		((UVREditorWidgetComponent*)Obj)->bIsHovering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVREditorWidgetComponent), &Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy_MetaData[] = {
		{ "ModuleRelativePath", "VREditorWidgetComponent.h" },
		{ "ToolTip", "High level redrawing policy for the widget component." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy = { "DrawingPolicy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorWidgetComponent, DrawingPolicy), Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy, METADATA_PARAMS(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVREditorWidgetComponent_Statics::ClassParams = {
		&UVREditorWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVREditorWidgetComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVREditorWidgetComponent_Statics::PropPointers),
		0,
		0x04A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorWidgetComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVREditorWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVREditorWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVREditorWidgetComponent, 936598325);
	template<> VREDITOR_API UClass* StaticClass<UVREditorWidgetComponent>()
	{
		return UVREditorWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVREditorWidgetComponent(Z_Construct_UClass_UVREditorWidgetComponent, &UVREditorWidgetComponent::StaticClass, TEXT("/Script/VREditor"), TEXT("UVREditorWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

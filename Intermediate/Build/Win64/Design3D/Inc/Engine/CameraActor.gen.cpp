// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
// End Cross Module References
	void ACameraActor::StaticRegisterNativesACameraActor()
	{
		UClass* Class = ACameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAutoActivatePlayerIndex", &ACameraActor::execGetAutoActivatePlayerIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics
	{
		struct CameraActor_eventGetAutoActivatePlayerIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraActor_eventGetAutoActivatePlayerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AutoPlayerActivation" },
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
		{ "ToolTip", "Returns index of the player for whom we auto-activate, or INDEX_NONE (-1) if disabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraActor, nullptr, "GetAutoActivatePlayerIndex", sizeof(CameraActor_eventGetAutoActivatePlayerIndex_Parms), Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACameraActor_NoRegister()
	{
		return ACameraActor::StaticClass();
	}
	struct Z_Construct_UClass_ACameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[];
#endif
		static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoActivateForPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoActivateForPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex, "GetAutoActivatePlayerIndex" }, // 3995145403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "Camera/CameraActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A CameraActor is a camera viewpoint that can be placed in a level." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraActor, PostProcessSettings_DEPRECATED), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraActor, PostProcessBlendWeight_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraActor_Statics::NewProp_FOVAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_FOVAngle = { "FOVAngle", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraActor, FOVAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ACameraActor_Statics::NewProp_FOVAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::NewProp_FOVAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraActor_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraActor, AspectRatio_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ACameraActor_Statics::NewProp_AspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
#endif
	void Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
	{
		((ACameraActor*)Obj)->bConstrainAspectRatio_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ACameraActor), &Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraActor_Statics::NewProp_SceneComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraActor_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
		{ "ToolTip", "The camera component for this camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraActor, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraActor_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraActor_Statics::NewProp_AutoActivateForPlayer_MetaData[] = {
		{ "Category", "AutoPlayerActivation" },
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
		{ "ToolTip", "Specifies which player controller, if any, should automatically use this Camera when the controller is active." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_AutoActivateForPlayer = { "AutoActivateForPlayer", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraActor, AutoActivateForPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(Z_Construct_UClass_ACameraActor_Statics::NewProp_AutoActivateForPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::NewProp_AutoActivateForPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_FOVAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_AspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_AutoActivateForPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraActor_Statics::ClassParams = {
		&ACameraActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACameraActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraActor, 3584423325);
	template<> ENGINE_API UClass* StaticClass<ACameraActor>()
	{
		return ACameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraActor(Z_Construct_UClass_ACameraActor, &ACameraActor::StaticClass, TEXT("/Script/Engine"), TEXT("ACameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraActor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ACameraActor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

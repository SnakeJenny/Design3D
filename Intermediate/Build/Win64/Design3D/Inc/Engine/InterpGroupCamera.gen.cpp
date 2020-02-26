// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroupCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupCamera() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraPreviewInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupCamera();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
// End Cross Module References
class UScriptStruct* FCameraPreviewInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraPreviewInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraPreviewInfo, Z_Construct_UPackage__Script_Engine(), TEXT("CameraPreviewInfo"), sizeof(FCameraPreviewInfo), Get_Z_Construct_UScriptStruct_FCameraPreviewInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraPreviewInfo>()
{
	return FCameraPreviewInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraPreviewInfo(FCameraPreviewInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraPreviewInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraPreviewInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraPreviewInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraPreviewInfo")),new UScriptStruct::TCppStructOps<FCameraPreviewInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraPreviewInfo;
	struct Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSeq_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSeq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
		{ "ToolTip", "Preview APawn class for this track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraPreviewInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnInst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
		{ "ToolTip", "APawn Inst - CameraAnimInst doesn't really exist in editor *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnInst = { "PawnInst", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraPreviewInfo, PawnInst), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnInst_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "CameraPreviewInfo" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraPreviewInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "CameraPreviewInfo" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
		{ "ToolTip", "for now this is read-only. It has maintenance issue to be resolved if I enable this." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraPreviewInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_AnimSeq_MetaData[] = {
		{ "Category", "CameraPreviewInfo" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_AnimSeq = { "AnimSeq", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraPreviewInfo, AnimSeq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_AnimSeq_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_AnimSeq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnClass_MetaData[] = {
		{ "Category", "CameraPreviewInfo" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraPreviewInfo, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_AnimSeq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraPreviewInfo",
		sizeof(FCameraPreviewInfo),
		alignof(FCameraPreviewInfo),
		Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraPreviewInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraPreviewInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraPreviewInfo"), sizeof(FCameraPreviewInfo), Get_Z_Construct_UScriptStruct_FCameraPreviewInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraPreviewInfo_Hash() { return 885351817U; }
	void UInterpGroupCamera::StaticRegisterNativesUInterpGroupCamera()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroupCamera_NoRegister()
	{
		return UInterpGroupCamera::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroupCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressTolerance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnimInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnimInst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroupCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Matinee/InterpGroupCamera.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CompressTolerance_MetaData[] = {
		{ "Category", "InterpGroupCamera" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
		{ "ToolTip", "When compress, tolerance option *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CompressTolerance = { "CompressTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupCamera, CompressTolerance), METADATA_PARAMS(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CompressTolerance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CompressTolerance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "InterpGroupCamera" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
		{ "ToolTip", "this is interaction property info for CameraAnim\nthis information isn't really saved with it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupCamera, Target), Z_Construct_UScriptStruct_FCameraPreviewInfo, METADATA_PARAMS(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_Target_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CameraAnimInst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CameraAnimInst = { "CameraAnimInst", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupCamera, CameraAnimInst), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CameraAnimInst_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CameraAnimInst_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpGroupCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CompressTolerance,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_Target,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CameraAnimInst,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroupCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroupCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroupCamera_Statics::ClassParams = {
		&UInterpGroupCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpGroupCamera_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpGroupCamera_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroupCamera_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpGroupCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroupCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpGroupCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpGroupCamera, 1580191179);
	template<> ENGINE_API UClass* StaticClass<UInterpGroupCamera>()
	{
		return UInterpGroupCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroupCamera(Z_Construct_UClass_UInterpGroupCamera, &UInterpGroupCamera::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroupCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

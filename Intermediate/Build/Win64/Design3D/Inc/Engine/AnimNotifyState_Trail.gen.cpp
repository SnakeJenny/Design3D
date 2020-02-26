// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_Trail() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_Trail();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrailWidthMode();
// End Cross Module References
	static FName NAME_UAnimNotifyState_Trail_OverridePSTemplate = FName(TEXT("OverridePSTemplate"));
	UParticleSystem* UAnimNotifyState_Trail::OverridePSTemplate(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const
	{
		AnimNotifyState_Trail_eventOverridePSTemplate_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		const_cast<UAnimNotifyState_Trail*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Trail_OverridePSTemplate),&Parms);
		return Parms.ReturnValue;
	}
	void UAnimNotifyState_Trail::StaticRegisterNativesUAnimNotifyState_Trail()
	{
	}
	struct Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_Trail_eventOverridePSTemplate_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_Trail_eventOverridePSTemplate_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_Trail_eventOverridePSTemplate_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_MeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_Trail, nullptr, "OverridePSTemplate", sizeof(AnimNotifyState_Trail_eventOverridePSTemplate_Parms), Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister()
	{
		return UAnimNotifyState_Trail::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_Trail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderTessellation_MetaData[];
#endif
		static void NewProp_bRenderTessellation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderTessellation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderTangents_MetaData[];
#endif
		static void NewProp_bRenderTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderSpawnPoints_MetaData[];
#endif
		static void NewProp_bRenderSpawnPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderSpawnPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderGeometry_MetaData[];
#endif
		static void NewProp_bRenderGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderGeometry;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecycleSpawnedSystems_MetaData[];
#endif
		static void NewProp_bRecycleSpawnedSystems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecycleSpawnedSystems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidthScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthScaleMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WidthScaleMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FirstSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_Trail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyState_Trail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate, "OverridePSTemplate" }, // 1423472505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Trail" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "If true, render the tessellated path between spawned particles" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation_SetBit(void* Obj)
	{
		((UAnimNotifyState_Trail*)Obj)->bRenderTessellation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation = { "bRenderTessellation", nullptr, (EPropertyFlags)0x0010000800002011, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimNotifyState_Trail), &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "If true, render a line showing the tangent at each spawned particle point along the trail" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents_SetBit(void* Obj)
	{
		((UAnimNotifyState_Trail*)Obj)->bRenderTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents = { "bRenderTangents", nullptr, (EPropertyFlags)0x0010000800002011, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimNotifyState_Trail), &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "If true, render stars at each spawned particle point along the trail" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints_SetBit(void* Obj)
	{
		((UAnimNotifyState_Trail*)Obj)->bRenderSpawnPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints = { "bRenderSpawnPoints", nullptr, (EPropertyFlags)0x0010000800002011, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimNotifyState_Trail), &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "If true, render the trail geometry (this should typically be on)" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry_SetBit(void* Obj)
	{
		((UAnimNotifyState_Trail*)Obj)->bRenderGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry = { "bRenderGeometry", nullptr, (EPropertyFlags)0x0010000800002011, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimNotifyState_Trail), &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_SetBit(void* Obj)
	{
		((UAnimNotifyState_Trail*)Obj)->bRecycleSpawnedSystems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems = { "bRecycleSpawnedSystems", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimNotifyState_Trail), &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleCurve_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "Name of the curve to drive the width scale." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleCurve = { "WidthScaleCurve", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_Trail, WidthScaleCurve), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleMode_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "Controls the way width scale is applied. In each method a width scale of 1.0 will mean the width is unchanged from the position of the sockets. A width scale of 0.0 will cause a trail of zero width.\nFrom Centre = Trail width is scaled outwards from the centre point between the two sockets.\nFrom First = Trail width is scaled outwards from the position of the first socket.\nFrom Second = Trail width is scaled outwards from the position of the Second socket." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleMode = { "WidthScaleMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_Trail, WidthScaleMode), Z_Construct_UEnum_Engine_ETrailWidthMode, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_SecondSocketName_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "Name of the second socket defining this trail." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_SecondSocketName = { "SecondSocketName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_Trail, SecondSocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_SecondSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_SecondSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_FirstSocketName_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "Name of the first socket defining this trail." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_FirstSocketName = { "FirstSocketName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_Trail, FirstSocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_FirstSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_FirstSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_PSTemplate_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "The particle system to use for this trail." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_PSTemplate = { "PSTemplate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_Trail, PSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_PSTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_PSTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_Trail_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_SecondSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_FirstSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_PSTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_Trail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_Trail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::ClassParams = {
		&UAnimNotifyState_Trail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimNotifyState_Trail_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_Trail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyState_Trail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState_Trail, 159407006);
	template<> ENGINE_API UClass* StaticClass<UAnimNotifyState_Trail>()
	{
		return UAnimNotifyState_Trail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_Trail(Z_Construct_UClass_UAnimNotifyState_Trail, &UAnimNotifyState_Trail::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotifyState_Trail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_Trail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

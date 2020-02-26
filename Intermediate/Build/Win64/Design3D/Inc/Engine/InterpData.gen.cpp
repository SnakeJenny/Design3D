// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
// End Cross Module References
	void UInterpData::StaticRegisterNativesUInterpData()
	{
	}
	UClass* Z_Construct_UClass_UInterpData_NoRegister()
	{
		return UInterpData::StaticClass();
	}
	struct Z_Construct_UClass_UInterpData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllEventNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllEventNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AllEventNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedDirectorGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedDirectorGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBakeAndPrune_MetaData[];
#endif
		static void NewProp_bShouldBakeAndPrune_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBakeAndPrune;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdSectionEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdSectionEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdSectionStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdSectionStart;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultFilters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpFilters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpFilters_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveEdSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveEdSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpGroups;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathBuildTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathBuildTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpData.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Interpolation data, containing keyframe tracks, event tracks etc.\nThis does not contain any  AActor  references or state, so can safely be stored in\npackages, shared between multiple MatineeActors etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Unique names of all events contained across all event tracks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames = { "AllEventNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, AllEventNames), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames_Inner = { "AllEventNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_CachedDirectorGroup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Cached version of the director group, if any, for easy access while in game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_CachedDirectorGroup = { "CachedDirectorGroup", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, CachedDirectorGroup), Z_Construct_UClass_UInterpGroupDirector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_CachedDirectorGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_CachedDirectorGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune_MetaData[] = {
		{ "Category", "InterpData" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "If true, then the matinee should be baked and pruned at cook time." },
	};
#endif
	void Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune_SetBit(void* Obj)
	{
		((UInterpData*)Obj)->bShouldBakeAndPrune = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune = { "bShouldBakeAndPrune", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpData), &Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionEnd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Used in editor for defining sections to loop, stretch etc." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionEnd = { "EdSectionEnd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, EdSectionEnd), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionStart_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Used in editor for defining sections to loop, stretch etc." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionStart = { "EdSectionStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, EdSectionStart), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionStart_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Array of default filters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters = { "DefaultFilters", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, DefaultFilters), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters_Inner = { "DefaultFilters", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_SelectedFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "The currently selected filter." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_SelectedFilter = { "SelectedFilter", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, SelectedFilter), Z_Construct_UClass_UInterpFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_SelectedFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_SelectedFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Used for filtering which tracks are currently visible." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters = { "InterpFilters", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, InterpFilters), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters_Inner = { "InterpFilters", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_CurveEdSetup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Used for curve editor to remember curve-editing setup. Only loaded in editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_CurveEdSetup = { "CurveEdSetup", nullptr, (EPropertyFlags)0x0010000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, CurveEdSetup), Z_Construct_UClass_UInterpCurveEdSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_CurveEdSetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_CurveEdSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups_MetaData[] = {
		{ "Category", "InterpData" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Actual interpolation data. Groups of InterpTracks." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups = { "InterpGroups", nullptr, (EPropertyFlags)0x001000000000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, InterpGroups), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups_Inner = { "InterpGroups", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_PathBuildTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Position in Interp to move things to for path-building in editor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_PathBuildTime = { "PathBuildTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, PathBuildTime), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_PathBuildTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_PathBuildTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_InterpLength_MetaData[] = {
		{ "Category", "InterpData" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Duration of interpolation sequence - in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_InterpLength = { "InterpLength", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, InterpLength), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_CachedDirectorGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionStart,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_SelectedFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_CurveEdSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_PathBuildTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_InterpLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpData_Statics::ClassParams = {
		&UInterpData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpData, 2424980616);
	template<> ENGINE_API UClass* StaticClass<UInterpData>()
	{
		return UInterpData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpData(Z_Construct_UClass_UInterpData, &UInterpData::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

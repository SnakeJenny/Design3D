// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAnimPlaySpace();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* ECameraAnimPlaySpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraAnimPlaySpace"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraAnimPlaySpace::Type>()
	{
		return ECameraAnimPlaySpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraAnimPlaySpace(ECameraAnimPlaySpace_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraAnimPlaySpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraAnimPlaySpace_Hash() { return 995836157U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraAnimPlaySpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraAnimPlaySpace"), 0, Get_Z_Construct_UEnum_Engine_ECameraAnimPlaySpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraAnimPlaySpace::CameraLocal", (int64)ECameraAnimPlaySpace::CameraLocal },
				{ "ECameraAnimPlaySpace::World", (int64)ECameraAnimPlaySpace::World },
				{ "ECameraAnimPlaySpace::UserDefined", (int64)ECameraAnimPlaySpace::UserDefined },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CameraLocal.ToolTip", "This anim is applied in camera space." },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "UserDefined.ToolTip", "This anim is applied in a user-specified space (defined by UserPlaySpaceMatrix)." },
				{ "World.ToolTip", "This anim is applied in world space." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECameraAnimPlaySpace",
				"ECameraAnimPlaySpace::Type",
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
	static UEnum* ECameraProjectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraProjectionMode, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraProjectionMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraProjectionMode::Type>()
	{
		return ECameraProjectionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraProjectionMode(ECameraProjectionMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraProjectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraProjectionMode_Hash() { return 220747397U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraProjectionMode"), 0, Get_Z_Construct_UEnum_Engine_ECameraProjectionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraProjectionMode::Perspective", (int64)ECameraProjectionMode::Perspective },
				{ "ECameraProjectionMode::Orthographic", (int64)ECameraProjectionMode::Orthographic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "@TODO: Document" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECameraProjectionMode",
				"ECameraProjectionMode::Type",
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
class UScriptStruct* FMinimalViewInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMinimalViewInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalViewInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MinimalViewInfo"), sizeof(FMinimalViewInfo), Get_Z_Construct_UScriptStruct_FMinimalViewInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMinimalViewInfo>()
{
	return FMinimalViewInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMinimalViewInfo(FMinimalViewInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MinimalViewInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMinimalViewInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMinimalViewInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MinimalViewInfo")),new UScriptStruct::TCppStructOps<FMinimalViewInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMinimalViewInfo;
	struct Z_Construct_UScriptStruct_FMinimalViewInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffCenterProjectionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffCenterProjectionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFieldOfViewForLOD_MetaData[];
#endif
		static void NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFieldOfViewForLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[];
#endif
		static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalViewInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Off-axis / off-center projection offset as proportion of screen dimensions" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset = { "OffCenterProjectionOffset", nullptr, (EPropertyFlags)0x0010000000022805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, OffCenterProjectionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Post-process settings to use if PostProcessBlendWeight is non-zero." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Indicates if PostProcessSettings should be applied." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, PostProcessBlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The type of camera" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "If true, account for the field of view angle when computing which level of detail to use for meshes." },
	};
#endif
	void Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj)
	{
		((FMinimalViewInfo*)Obj)->bUseFieldOfViewForLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD = { "bUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMinimalViewInfo), &Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested." },
	};
#endif
	void Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
	{
		((FMinimalViewInfo*)Obj)->bConstrainAspectRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMinimalViewInfo), &Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Aspect Ratio (Width/Height); ignored unless bConstrainAspectRatio is true" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, AspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The far plane distance of the orthographic view (in world units)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane = { "OrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, OrthoFarClipPlane), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The near plane distance of the orthographic view (in world units)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane = { "OrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, OrthoNearClipPlane), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, OrthoWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "This is the originally desired field of view before any adjustments to account for different aspect ratios" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV = { "DesiredFOV", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, DesiredFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The field of view (in degrees) in perspective mode (ignored in Orthographic mode)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, FOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalViewInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MinimalViewInfo",
		sizeof(FMinimalViewInfo),
		alignof(FMinimalViewInfo),
		Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMinimalViewInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MinimalViewInfo"), sizeof(FMinimalViewInfo), Get_Z_Construct_UScriptStruct_FMinimalViewInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMinimalViewInfo_Hash() { return 158045426U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

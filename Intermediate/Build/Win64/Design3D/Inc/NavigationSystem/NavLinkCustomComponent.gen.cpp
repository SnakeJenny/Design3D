// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavLinkCustomComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkCustomComponent() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavRelevantComponent();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
// End Cross Module References
	void UNavLinkCustomComponent::StaticRegisterNativesUNavLinkCustomComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister()
	{
		return UNavLinkCustomComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavLinkCustomComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BroadcastChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BroadcastInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BroadcastRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleAreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObstacleAreaClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObstacleExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObstacleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateBoxObstacle_MetaData[];
#endif
		static void NewProp_bCreateBoxObstacle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateBoxObstacle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyWhenDisabled_MetaData[];
#endif
		static void NewProp_bNotifyWhenDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyWhenDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyWhenEnabled_MetaData[];
#endif
		static void NewProp_bNotifyWhenEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyWhenEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinkEnabled_MetaData[];
#endif
		static void NewProp_bLinkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinkEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinkDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkRelativeEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinkRelativeEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkRelativeStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinkRelativeStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledAreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DisabledAreaClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledAreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnabledAreaClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NavLinkUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLinkCustomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavRelevantComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavLinkCustomComponent.h" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "Encapsulates NavLinkCustomInterface interface, can be used with Actors not relevant for navigation\n\nAdditional functionality:\n- can be toggled\n- can create obstacle area for easier/forced separation of link end points\n- can broadcast state changes to nearby agents" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastChannel_MetaData[] = {
		{ "Category", "Broadcast" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "trace channel for state change broadcast" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastChannel = { "BroadcastChannel", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastInterval_MetaData[] = {
		{ "Category", "Broadcast" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "interval for state change broadcast (0 = single broadcast)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastInterval = { "BroadcastInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastInterval), METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastRadius_MetaData[] = {
		{ "Category", "Broadcast" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "radius of state change broadcast" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastRadius = { "BroadcastRadius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastRadius), METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleAreaClass_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "area class for simple box obstacle" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleAreaClass = { "ObstacleAreaClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleAreaClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleAreaClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleExtent_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "extent of simple box obstacle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleExtent = { "ObstacleExtent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleExtent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleOffset_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "offset of simple box obstacle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleOffset = { "ObstacleOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "if set, box obstacle area will be added to generation" },
	};
#endif
	void Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle_SetBit(void* Obj)
	{
		((UNavLinkCustomComponent*)Obj)->bCreateBoxObstacle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle = { "bCreateBoxObstacle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavLinkCustomComponent), &Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled_MetaData[] = {
		{ "Category", "Broadcast" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "should link notify nearby agents when it changes state to disabled" },
	};
#endif
	void Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled_SetBit(void* Obj)
	{
		((UNavLinkCustomComponent*)Obj)->bNotifyWhenDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled = { "bNotifyWhenDisabled", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavLinkCustomComponent), &Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled_MetaData[] = {
		{ "Category", "Broadcast" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "should link notify nearby agents when it changes state to enabled" },
	};
#endif
	void Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled_SetBit(void* Obj)
	{
		((UNavLinkCustomComponent*)Obj)->bNotifyWhenEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled = { "bNotifyWhenEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavLinkCustomComponent), &Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "is link currently in enabled state? (area class)" },
	};
#endif
	void Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled_SetBit(void* Obj)
	{
		((UNavLinkCustomComponent*)Obj)->bLinkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled = { "bLinkEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavLinkCustomComponent), &Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkDirection_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "direction of link" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkDirection = { "LinkDirection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, LinkDirection), Z_Construct_UEnum_Engine_ENavLinkDirection, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeEnd_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "end point, relative to owner" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeEnd = { "LinkRelativeEnd", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, LinkRelativeEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeStart_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "start point, relative to owner" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeStart = { "LinkRelativeStart", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, LinkRelativeStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_DisabledAreaClass_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "area class to use when link is disabled" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_DisabledAreaClass = { "DisabledAreaClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, DisabledAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_DisabledAreaClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_DisabledAreaClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_EnabledAreaClass_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "area class to use when link is enabled" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_EnabledAreaClass = { "EnabledAreaClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, EnabledAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_EnabledAreaClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_EnabledAreaClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_NavLinkUserId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "link Id assigned by navigation system" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_NavLinkUserId = { "NavLinkUserId", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkCustomComponent, NavLinkUserId), METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_NavLinkUserId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_NavLinkUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavLinkCustomComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleAreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_DisabledAreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_EnabledAreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_NavLinkUserId,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavLinkCustomInterface_NoRegister, (int32)VTABLE_OFFSET(UNavLinkCustomComponent, INavLinkCustomInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLinkCustomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkCustomComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::ClassParams = {
		&UNavLinkCustomComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavLinkCustomComponent_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLinkCustomComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavLinkCustomComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLinkCustomComponent, 4085536155);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkCustomComponent>()
	{
		return UNavLinkCustomComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkCustomComponent(Z_Construct_UClass_UNavLinkCustomComponent, &UNavLinkCustomComponent::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavLinkCustomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkCustomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

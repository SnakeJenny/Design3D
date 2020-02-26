// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/ViewportInteractionTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportInteractionTypes() {}
// Cross Module References
	VIEWPORTINTERACTION_API UEnum* Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement();
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FViewportActionKeyInput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
// End Cross Module References
	static UEnum* EViewportInteractionDraggingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode, Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("EViewportInteractionDraggingMode"));
		}
		return Singleton;
	}
	template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EViewportInteractionDraggingMode>()
	{
		return EViewportInteractionDraggingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EViewportInteractionDraggingMode(EViewportInteractionDraggingMode_StaticEnum, TEXT("/Script/ViewportInteraction"), TEXT("EViewportInteractionDraggingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Hash() { return 1867162158U; }
	UEnum* Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ViewportInteraction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EViewportInteractionDraggingMode"), 0, Get_Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EViewportInteractionDraggingMode::Nothing", (int64)EViewportInteractionDraggingMode::Nothing },
				{ "EViewportInteractionDraggingMode::TransformablesWithGizmo", (int64)EViewportInteractionDraggingMode::TransformablesWithGizmo },
				{ "EViewportInteractionDraggingMode::TransformablesAtLaserImpact", (int64)EViewportInteractionDraggingMode::TransformablesAtLaserImpact },
				{ "EViewportInteractionDraggingMode::AssistingDrag", (int64)EViewportInteractionDraggingMode::AssistingDrag },
				{ "EViewportInteractionDraggingMode::TransformablesFreely", (int64)EViewportInteractionDraggingMode::TransformablesFreely },
				{ "EViewportInteractionDraggingMode::World", (int64)EViewportInteractionDraggingMode::World },
				{ "EViewportInteractionDraggingMode::Interactable", (int64)EViewportInteractionDraggingMode::Interactable },
				{ "EViewportInteractionDraggingMode::Material", (int64)EViewportInteractionDraggingMode::Material },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AssistingDrag.ToolTip", "We're grabbing an object (or the world) that was already grabbed by the other hand" },
				{ "Interactable.ToolTip", "Moving a custom interactable" },
				{ "Material.ToolTip", "Dragging a material" },
				{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
				{ "Nothing.ToolTip", "Not dragging right now with this hand" },
				{ "ToolTip", "Methods of dragging objects around in VR" },
				{ "TransformablesAtLaserImpact.ToolTip", "Transformables locked to the impact point under the laser" },
				{ "TransformablesFreely.ToolTip", "Freely moving, rotating and scaling transformables with one or two hands" },
				{ "TransformablesWithGizmo.ToolTip", "Dragging transformables (e.g. actors, components, geometry elements) around using the transform gizmo" },
				{ "World.ToolTip", "Moving the world itself around (actually, moving the camera in such a way that it feels like you're moving the world)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ViewportInteraction,
				nullptr,
				"EViewportInteractionDraggingMode",
				"EViewportInteractionDraggingMode",
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
class UScriptStruct* FTransformGizmoHandlePlacement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIEWPORTINTERACTION_API uint32 Get_Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement, Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("TransformGizmoHandlePlacement"), sizeof(FTransformGizmoHandlePlacement), Get_Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Hash());
	}
	return Singleton;
}
template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<FTransformGizmoHandlePlacement>()
{
	return FTransformGizmoHandlePlacement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformGizmoHandlePlacement(FTransformGizmoHandlePlacement::StaticStruct, TEXT("/Script/ViewportInteraction"), TEXT("TransformGizmoHandlePlacement"), false, nullptr, nullptr);
static struct FScriptStruct_ViewportInteraction_StaticRegisterNativesFTransformGizmoHandlePlacement
{
	FScriptStruct_ViewportInteraction_StaticRegisterNativesFTransformGizmoHandlePlacement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformGizmoHandlePlacement")),new UScriptStruct::TCppStructOps<FTransformGizmoHandlePlacement>);
	}
} ScriptStruct_ViewportInteraction_StaticRegisterNativesFTransformGizmoHandlePlacement;
	struct Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "ToolTip", "Placement of a handle in pivot space" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformGizmoHandlePlacement>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		&NewStructOps,
		"TransformGizmoHandlePlacement",
		sizeof(FTransformGizmoHandlePlacement),
		alignof(FTransformGizmoHandlePlacement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViewportInteraction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformGizmoHandlePlacement"), sizeof(FTransformGizmoHandlePlacement), Get_Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Hash() { return 3489888615U; }
class UScriptStruct* FViewportActionKeyInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIEWPORTINTERACTION_API uint32 Get_Z_Construct_UScriptStruct_FViewportActionKeyInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewportActionKeyInput, Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("ViewportActionKeyInput"), sizeof(FViewportActionKeyInput), Get_Z_Construct_UScriptStruct_FViewportActionKeyInput_Hash());
	}
	return Singleton;
}
template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<FViewportActionKeyInput>()
{
	return FViewportActionKeyInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FViewportActionKeyInput(FViewportActionKeyInput::StaticStruct, TEXT("/Script/ViewportInteraction"), TEXT("ViewportActionKeyInput"), false, nullptr, nullptr);
static struct FScriptStruct_ViewportInteraction_StaticRegisterNativesFViewportActionKeyInput
{
	FScriptStruct_ViewportInteraction_StaticRegisterNativesFViewportActionKeyInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ViewportActionKeyInput")),new UScriptStruct::TCppStructOps<FViewportActionKeyInput>);
	}
} ScriptStruct_ViewportInteraction_StaticRegisterNativesFViewportActionKeyInput;
	struct Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInputCaptured_MetaData[];
#endif
		static void NewProp_bIsInputCaptured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInputCaptured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "ToolTip", "Represents a generic action" },
	};
#endif
	void* Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewportActionKeyInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "ToolTip", "True if this action owned by an interactor is \"captured\" for each possible action type, meaning that only the active captor should\n      handle input events until it is no longer captured.  It's the captors responsibility to set this using OnVRAction(), or clear it when finished with capturing." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured_SetBit(void* Obj)
	{
		((FViewportActionKeyInput*)Obj)->bIsInputCaptured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured = { "bIsInputCaptured", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FViewportActionKeyInput), &Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "ToolTip", "Input event" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FViewportActionKeyInput, Event), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_Event_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_Event_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_ActionType_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "ToolTip", "The name of this action" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FViewportActionKeyInput, ActionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_ActionType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_ActionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_ActionType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		&NewStructOps,
		"ViewportActionKeyInput",
		sizeof(FViewportActionKeyInput),
		alignof(FViewportActionKeyInput),
		Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FViewportActionKeyInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FViewportActionKeyInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViewportInteraction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ViewportActionKeyInput"), sizeof(FViewportActionKeyInput), Get_Z_Construct_UScriptStruct_FViewportActionKeyInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FViewportActionKeyInput_Hash() { return 1596366807U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

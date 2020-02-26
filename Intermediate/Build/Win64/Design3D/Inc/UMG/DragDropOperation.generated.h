// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDragDropOperation;
struct FPointerEvent;
#ifdef UMG_DragDropOperation_generated_h
#error "DragDropOperation.generated.h already included, missing '#pragma once' in DragDropOperation.h"
#endif
#define UMG_DragDropOperation_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_14_DELEGATE \
struct _Script_UMG_eventOnDragDropMulticast_Parms \
{ \
	UDragDropOperation* Operation; \
}; \
static inline void FOnDragDropMulticast_DelegateWrapper(const FMulticastScriptDelegate& OnDragDropMulticast, UDragDropOperation* Operation) \
{ \
	_Script_UMG_eventOnDragDropMulticast_Parms Parms; \
	Parms.Operation=Operation; \
	OnDragDropMulticast.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_RPC_WRAPPERS \
	virtual void Dragged_Implementation(FPointerEvent const& PointerEvent); \
	virtual void DragCancelled_Implementation(FPointerEvent const& PointerEvent); \
	virtual void Drop_Implementation(FPointerEvent const& PointerEvent); \
 \
	DECLARE_FUNCTION(execDragged) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dragged_Implementation(Z_Param_Out_PointerEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDragCancelled) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DragCancelled_Implementation(Z_Param_Out_PointerEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop_Implementation(Z_Param_Out_PointerEvent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Dragged_Implementation(FPointerEvent const& PointerEvent); \
	virtual void DragCancelled_Implementation(FPointerEvent const& PointerEvent); \
	virtual void Drop_Implementation(FPointerEvent const& PointerEvent); \
 \
	DECLARE_FUNCTION(execDragged) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dragged_Implementation(Z_Param_Out_PointerEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDragCancelled) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DragCancelled_Implementation(Z_Param_Out_PointerEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop_Implementation(Z_Param_Out_PointerEvent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_EVENT_PARMS \
	struct DragDropOperation_eventDragCancelled_Parms \
	{ \
		FPointerEvent PointerEvent; \
	}; \
	struct DragDropOperation_eventDragged_Parms \
	{ \
		FPointerEvent PointerEvent; \
	}; \
	struct DragDropOperation_eventDrop_Parms \
	{ \
		FPointerEvent PointerEvent; \
	};


#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDragDropOperation(); \
	friend struct Z_Construct_UClass_UDragDropOperation_Statics; \
public: \
	DECLARE_CLASS(UDragDropOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UDragDropOperation)


#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUDragDropOperation(); \
	friend struct Z_Construct_UClass_UDragDropOperation_Statics; \
public: \
	DECLARE_CLASS(UDragDropOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UDragDropOperation)


#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDragDropOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDragDropOperation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDragDropOperation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragDropOperation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDragDropOperation(UDragDropOperation&&); \
	NO_API UDragDropOperation(const UDragDropOperation&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDragDropOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDragDropOperation(UDragDropOperation&&); \
	NO_API UDragDropOperation(const UDragDropOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDragDropOperation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragDropOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDragDropOperation)


#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_40_PROLOG \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_EVENT_PARMS


#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DragDropOperation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UDragDropOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h


#define FOREACH_ENUM_EDRAGPIVOT(op) \
	op(EDragPivot::MouseDown) \
	op(EDragPivot::TopLeft) \
	op(EDragPivot::TopCenter) \
	op(EDragPivot::TopRight) \
	op(EDragPivot::CenterLeft) \
	op(EDragPivot::CenterCenter) \
	op(EDragPivot::CenterRight) \
	op(EDragPivot::BottomLeft) \
	op(EDragPivot::BottomCenter) \
	op(EDragPivot::BottomRight) 

enum class EDragPivot : uint8;
template<> UMG_API UEnum* StaticEnum<EDragPivot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

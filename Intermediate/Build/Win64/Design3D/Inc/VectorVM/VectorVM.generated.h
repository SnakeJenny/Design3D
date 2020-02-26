// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VECTORVM_VectorVM_generated_h
#error "VectorVM.generated.h already included, missing '#pragma once' in VectorVM.h"
#endif
#define VECTORVM_VectorVM_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_VectorVM_Public_VectorVM_h


#define FOREACH_ENUM_EVECTORVMOP(op) \
	op(EVectorVMOp::done) \
	op(EVectorVMOp::add) \
	op(EVectorVMOp::sub) \
	op(EVectorVMOp::mul) \
	op(EVectorVMOp::div) \
	op(EVectorVMOp::mad) \
	op(EVectorVMOp::lerp) \
	op(EVectorVMOp::rcp) \
	op(EVectorVMOp::rsq) \
	op(EVectorVMOp::sqrt) \
	op(EVectorVMOp::neg) \
	op(EVectorVMOp::abs) \
	op(EVectorVMOp::exp) \
	op(EVectorVMOp::exp2) \
	op(EVectorVMOp::log) \
	op(EVectorVMOp::log2) \
	op(EVectorVMOp::sin) \
	op(EVectorVMOp::cos) \
	op(EVectorVMOp::tan) \
	op(EVectorVMOp::asin) \
	op(EVectorVMOp::acos) \
	op(EVectorVMOp::atan) \
	op(EVectorVMOp::atan2) \
	op(EVectorVMOp::ceil) \
	op(EVectorVMOp::floor) \
	op(EVectorVMOp::fmod) \
	op(EVectorVMOp::frac) \
	op(EVectorVMOp::trunc) \
	op(EVectorVMOp::clamp) \
	op(EVectorVMOp::min) \
	op(EVectorVMOp::max) \
	op(EVectorVMOp::pow) \
	op(EVectorVMOp::round) \
	op(EVectorVMOp::sign) \
	op(EVectorVMOp::step) \
	op(EVectorVMOp::random) \
	op(EVectorVMOp::noise) \
	op(EVectorVMOp::cmplt) \
	op(EVectorVMOp::cmple) \
	op(EVectorVMOp::cmpgt) \
	op(EVectorVMOp::cmpge) \
	op(EVectorVMOp::cmpeq) \
	op(EVectorVMOp::cmpneq) \
	op(EVectorVMOp::select) \
	op(EVectorVMOp::addi) \
	op(EVectorVMOp::subi) \
	op(EVectorVMOp::muli) \
	op(EVectorVMOp::divi) \
	op(EVectorVMOp::clampi) \
	op(EVectorVMOp::mini) \
	op(EVectorVMOp::maxi) \
	op(EVectorVMOp::absi) \
	op(EVectorVMOp::negi) \
	op(EVectorVMOp::signi) \
	op(EVectorVMOp::randomi) \
	op(EVectorVMOp::cmplti) \
	op(EVectorVMOp::cmplei) \
	op(EVectorVMOp::cmpgti) \
	op(EVectorVMOp::cmpgei) \
	op(EVectorVMOp::cmpeqi) \
	op(EVectorVMOp::cmpneqi) \
	op(EVectorVMOp::bit_and) \
	op(EVectorVMOp::bit_or) \
	op(EVectorVMOp::bit_xor) \
	op(EVectorVMOp::bit_not) \
	op(EVectorVMOp::bit_lshift) \
	op(EVectorVMOp::bit_rshift) \
	op(EVectorVMOp::logic_and) \
	op(EVectorVMOp::logic_or) \
	op(EVectorVMOp::logic_xor) \
	op(EVectorVMOp::logic_not) \
	op(EVectorVMOp::f2i) \
	op(EVectorVMOp::i2f) \
	op(EVectorVMOp::f2b) \
	op(EVectorVMOp::b2f) \
	op(EVectorVMOp::i2b) \
	op(EVectorVMOp::b2i) \
	op(EVectorVMOp::inputdata_32bit) \
	op(EVectorVMOp::inputdata_noadvance_32bit) \
	op(EVectorVMOp::outputdata_32bit) \
	op(EVectorVMOp::acquireindex) \
	op(EVectorVMOp::external_func_call) \
	op(EVectorVMOp::exec_index) \
	op(EVectorVMOp::noise2D) \
	op(EVectorVMOp::noise3D) \
	op(EVectorVMOp::enter_stat_scope) \
	op(EVectorVMOp::exit_stat_scope) \
	op(EVectorVMOp::update_id) \
	op(EVectorVMOp::acquire_id) \
	op(EVectorVMOp::NumOpcodes) 

enum class EVectorVMOp : uint8;
template<> VECTORVM_API UEnum* StaticEnum<EVectorVMOp>();

#define FOREACH_ENUM_EVECTORVMOPERANDLOCATION(op) \
	op(EVectorVMOperandLocation::Register) \
	op(EVectorVMOperandLocation::Constant) \
	op(EVectorVMOperandLocation::Num) 

enum class EVectorVMOperandLocation : uint8;
template<> VECTORVM_API UEnum* StaticEnum<EVectorVMOperandLocation>();

#define FOREACH_ENUM_EVECTORVMBASETYPES(op) \
	op(EVectorVMBaseTypes::Float) \
	op(EVectorVMBaseTypes::Int) \
	op(EVectorVMBaseTypes::Bool) \
	op(EVectorVMBaseTypes::Num) 

enum class EVectorVMBaseTypes : uint8;
template<> VECTORVM_API UEnum* StaticEnum<EVectorVMBaseTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

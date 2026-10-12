// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums/State.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBERBASEBALL_State_generated_h
#error "State.generated.h already included, missing '#pragma once' in State.h"
#endif
#define NUMBERBASEBALL_State_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Enums_State_h


#define FOREACH_ENUM_ETURNSTATE(op) \
	op(ETurnState::NowTurn) \
	op(ETurnState::WaitTurn) 

enum class ETurnState : uint8;
template<> struct TIsUEnumClass<ETurnState> { enum { Value = true }; };
template<> NUMBERBASEBALL_API UEnum* StaticEnum<ETurnState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

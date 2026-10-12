// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NBBPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBERBASEBALL_NBBPlayerState_generated_h
#error "NBBPlayerState.generated.h already included, missing '#pragma once' in NBBPlayerState.h"
#endif
#define NUMBERBASEBALL_NBBPlayerState_generated_h

#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBBPlayerState(); \
	friend struct Z_Construct_UClass_ANBBPlayerState_Statics; \
public: \
	DECLARE_CLASS(ANBBPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumberBaseBall"), NO_API) \
	DECLARE_SERIALIZER(ANBBPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerTurn=NETFIELD_REP_START, \
		LeftTurnTime, \
		PlayerNameString, \
		CurrentGuessCount, \
		NETFIELD_REP_END=CurrentGuessCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBBPlayerState(ANBBPlayerState&&); \
	ANBBPlayerState(const ANBBPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBBPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBBPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBBPlayerState) \
	NO_API virtual ~ANBBPlayerState();


#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h_18_PROLOG
#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h_21_INCLASS_NO_PURE_DECLS \
	FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBERBASEBALL_API UClass* StaticClass<class ANBBPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

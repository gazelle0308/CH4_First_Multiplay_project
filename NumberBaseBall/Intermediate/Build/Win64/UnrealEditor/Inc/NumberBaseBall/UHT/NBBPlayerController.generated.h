// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NBBPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBERBASEBALL_NBBPlayerController_generated_h
#error "NBBPlayerController.generated.h already included, missing '#pragma once' in NBBPlayerController.h"
#endif
#define NUMBERBASEBALL_NBBPlayerController_generated_h

#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InputFString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InputFString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_22_CALLBACK_WRAPPERS
#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBBPlayerController(); \
	friend struct Z_Construct_UClass_ANBBPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANBBPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumberBaseBall"), NO_API) \
	DECLARE_SERIALIZER(ANBBPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameResult=NETFIELD_REP_START, \
		NETFIELD_REP_END=GameResult	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBBPlayerController(ANBBPlayerController&&); \
	ANBBPlayerController(const ANBBPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBBPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBBPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBBPlayerController) \
	NO_API virtual ~ANBBPlayerController();


#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_19_PROLOG
#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_22_CALLBACK_WRAPPERS \
	FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_22_INCLASS_NO_PURE_DECLS \
	FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBERBASEBALL_API UClass* StaticClass<class ANBBPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

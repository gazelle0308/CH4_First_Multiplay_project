// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/NBBGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBERBASEBALL_NBBGameStateBase_generated_h
#error "NBBGameStateBase.generated.h already included, missing '#pragma once' in NBBGameStateBase.h"
#endif
#define NUMBERBASEBALL_NBBGameStateBase_generated_h

#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_18_CALLBACK_WRAPPERS
#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBBGameStateBase(); \
	friend struct Z_Construct_UClass_ANBBGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ANBBGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumberBaseBall"), NO_API) \
	DECLARE_SERIALIZER(ANBBGameStateBase)


#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBBGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBBGameStateBase(ANBBGameStateBase&&); \
	ANBBGameStateBase(const ANBBGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBBGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBBGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANBBGameStateBase) \
	NO_API virtual ~ANBBGameStateBase();


#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_15_PROLOG
#define FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_18_CALLBACK_WRAPPERS \
	FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBERBASEBALL_API UClass* StaticClass<class ANBBGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

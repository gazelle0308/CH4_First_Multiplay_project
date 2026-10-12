// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/Player/NBBPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBBPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBBPlayerState();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBBPlayerState_NoRegister();
NUMBERBASEBALL_API UEnum* Z_Construct_UEnum_NumberBaseBall_ETurnState();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class ANBBPlayerState
void ANBBPlayerState::StaticRegisterNativesANBBPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBBPlayerState);
UClass* Z_Construct_UClass_ANBBPlayerState_NoRegister()
{
	return ANBBPlayerState::StaticClass();
}
struct Z_Construct_UClass_ANBBPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/NBBPlayerState.h" },
		{ "ModuleRelativePath", "Player/NBBPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTurn_MetaData[] = {
		{ "Category", "NBBPlayerState" },
		{ "ModuleRelativePath", "Player/NBBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftTurnTime_MetaData[] = {
		{ "Category", "NBBPlayerState" },
		{ "ModuleRelativePath", "Player/NBBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameString_MetaData[] = {
		{ "ModuleRelativePath", "Player/NBBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGuessCount_MetaData[] = {
		{ "ModuleRelativePath", "Player/NBBPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerTurn_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerTurn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftTurnTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNameString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGuessCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBBPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANBBPlayerState_Statics::NewProp_PlayerTurn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANBBPlayerState_Statics::NewProp_PlayerTurn = { "PlayerTurn", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBBPlayerState, PlayerTurn), Z_Construct_UEnum_NumberBaseBall_ETurnState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTurn_MetaData), NewProp_PlayerTurn_MetaData) }; // 3457090789
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBBPlayerState_Statics::NewProp_LeftTurnTime = { "LeftTurnTime", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBBPlayerState, LeftTurnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftTurnTime_MetaData), NewProp_LeftTurnTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANBBPlayerState_Statics::NewProp_PlayerNameString = { "PlayerNameString", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBBPlayerState, PlayerNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNameString_MetaData), NewProp_PlayerNameString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBBPlayerState_Statics::NewProp_CurrentGuessCount = { "CurrentGuessCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBBPlayerState, CurrentGuessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGuessCount_MetaData), NewProp_CurrentGuessCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBBPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBBPlayerState_Statics::NewProp_PlayerTurn_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBBPlayerState_Statics::NewProp_PlayerTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBBPlayerState_Statics::NewProp_LeftTurnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBBPlayerState_Statics::NewProp_PlayerNameString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBBPlayerState_Statics::NewProp_CurrentGuessCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBBPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBBPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBBPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBBPlayerState_Statics::ClassParams = {
	&ANBBPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBBPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBBPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBBPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBBPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBBPlayerState()
{
	if (!Z_Registration_Info_UClass_ANBBPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBBPlayerState.OuterSingleton, Z_Construct_UClass_ANBBPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBBPlayerState.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<ANBBPlayerState>()
{
	return ANBBPlayerState::StaticClass();
}
void ANBBPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PlayerTurn(TEXT("PlayerTurn"));
	static const FName Name_LeftTurnTime(TEXT("LeftTurnTime"));
	static const FName Name_PlayerNameString(TEXT("PlayerNameString"));
	static const FName Name_CurrentGuessCount(TEXT("CurrentGuessCount"));
	const bool bIsValid = true
		&& Name_PlayerTurn == ClassReps[(int32)ENetFields_Private::PlayerTurn].Property->GetFName()
		&& Name_LeftTurnTime == ClassReps[(int32)ENetFields_Private::LeftTurnTime].Property->GetFName()
		&& Name_PlayerNameString == ClassReps[(int32)ENetFields_Private::PlayerNameString].Property->GetFName()
		&& Name_CurrentGuessCount == ClassReps[(int32)ENetFields_Private::CurrentGuessCount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANBBPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBBPlayerState);
ANBBPlayerState::~ANBBPlayerState() {}
// End Class ANBBPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBBPlayerState, ANBBPlayerState::StaticClass, TEXT("ANBBPlayerState"), &Z_Registration_Info_UClass_ANBBPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBBPlayerState), 1710918596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h_2394459326(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

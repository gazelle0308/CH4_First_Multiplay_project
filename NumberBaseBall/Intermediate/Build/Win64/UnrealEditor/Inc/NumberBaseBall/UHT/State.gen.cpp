// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/Enums/State.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeState() {}

// Begin Cross Module References
NUMBERBASEBALL_API UEnum* Z_Construct_UEnum_NumberBaseBall_ETurnState();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Enum ETurnState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETurnState;
static UEnum* ETurnState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETurnState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETurnState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NumberBaseBall_ETurnState, (UObject*)Z_Construct_UPackage__Script_NumberBaseBall(), TEXT("ETurnState"));
	}
	return Z_Registration_Info_UEnum_ETurnState.OuterSingleton;
}
template<> NUMBERBASEBALL_API UEnum* StaticEnum<ETurnState>()
{
	return ETurnState_StaticEnum();
}
struct Z_Construct_UEnum_NumberBaseBall_ETurnState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Enums/State.h" },
		{ "NowTurn.DisplayName", "NowTurn" },
		{ "NowTurn.Name", "ETurnState::NowTurn" },
		{ "WaitTurn.DisplayName", "WaitTurn" },
		{ "WaitTurn.Name", "ETurnState::WaitTurn" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETurnState::NowTurn", (int64)ETurnState::NowTurn },
		{ "ETurnState::WaitTurn", (int64)ETurnState::WaitTurn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NumberBaseBall_ETurnState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NumberBaseBall,
	nullptr,
	"ETurnState",
	"ETurnState",
	Z_Construct_UEnum_NumberBaseBall_ETurnState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NumberBaseBall_ETurnState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NumberBaseBall_ETurnState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NumberBaseBall_ETurnState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NumberBaseBall_ETurnState()
{
	if (!Z_Registration_Info_UEnum_ETurnState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETurnState.InnerSingleton, Z_Construct_UEnum_NumberBaseBall_ETurnState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETurnState.InnerSingleton;
}
// End Enum ETurnState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Enums_State_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETurnState_StaticEnum, TEXT("ETurnState"), &Z_Registration_Info_UEnum_ETurnState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3457090789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Enums_State_h_1728636098(TEXT("/Script/NumberBaseBall"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Enums_State_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Enums_State_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

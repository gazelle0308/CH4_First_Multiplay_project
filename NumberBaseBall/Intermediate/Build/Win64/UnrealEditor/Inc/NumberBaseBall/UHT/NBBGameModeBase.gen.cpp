// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/Game/NBBGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBBGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBBGameModeBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBBGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class ANBBGameModeBase
void ANBBGameModeBase::StaticRegisterNativesANBBGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBBGameModeBase);
UClass* Z_Construct_UClass_ANBBGameModeBase_NoRegister()
{
	return ANBBGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ANBBGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/NBBGameModeBase.h" },
		{ "ModuleRelativePath", "Game/NBBGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBBGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBBGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBBGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBBGameModeBase_Statics::ClassParams = {
	&ANBBGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBBGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBBGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBBGameModeBase()
{
	if (!Z_Registration_Info_UClass_ANBBGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBBGameModeBase.OuterSingleton, Z_Construct_UClass_ANBBGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBBGameModeBase.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<ANBBGameModeBase>()
{
	return ANBBGameModeBase::StaticClass();
}
ANBBGameModeBase::ANBBGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBBGameModeBase);
ANBBGameModeBase::~ANBBGameModeBase() {}
// End Class ANBBGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBBGameModeBase, ANBBGameModeBase::StaticClass, TEXT("ANBBGameModeBase"), &Z_Registration_Info_UClass_ANBBGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBBGameModeBase), 2153471353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameModeBase_h_3224283979(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

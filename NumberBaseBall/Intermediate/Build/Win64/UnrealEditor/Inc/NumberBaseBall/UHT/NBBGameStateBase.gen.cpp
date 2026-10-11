// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/Game/NBBGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBBGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBBGameStateBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBBGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class ANBBGameStateBase Function MulticastRPCBroadcastLoginMessage
struct NBBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms
{
	FString InNameString;
};
static const FName NAME_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage = FName(TEXT("MulticastRPCBroadcastLoginMessage"));
void ANBBGameStateBase::MulticastRPCBroadcastLoginMessage(const FString& InNameString)
{
	NBBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms Parms;
	Parms.InNameString=InNameString;
	UFunction* Func = FindFunctionChecked(NAME_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/NBBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNameString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNameString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString = { "InNameString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms, InNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNameString_MetaData), NewProp_InNameString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBBGameStateBase, nullptr, "MulticastRPCBroadcastLoginMessage", nullptr, nullptr, Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers), sizeof(NBBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(NBBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBBGameStateBase::execMulticastRPCBroadcastLoginMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNameString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCBroadcastLoginMessage_Implementation(Z_Param_InNameString);
	P_NATIVE_END;
}
// End Class ANBBGameStateBase Function MulticastRPCBroadcastLoginMessage

// Begin Class ANBBGameStateBase
void ANBBGameStateBase::StaticRegisterNativesANBBGameStateBase()
{
	UClass* Class = ANBBGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastRPCBroadcastLoginMessage", &ANBBGameStateBase::execMulticastRPCBroadcastLoginMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBBGameStateBase);
UClass* Z_Construct_UClass_ANBBGameStateBase_NoRegister()
{
	return ANBBGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ANBBGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/NBBGameStateBase.h" },
		{ "ModuleRelativePath", "Game/NBBGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBBGameStateBase_MulticastRPCBroadcastLoginMessage, "MulticastRPCBroadcastLoginMessage" }, // 2088060542
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBBGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBBGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBBGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBBGameStateBase_Statics::ClassParams = {
	&ANBBGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBBGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBBGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBBGameStateBase()
{
	if (!Z_Registration_Info_UClass_ANBBGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBBGameStateBase.OuterSingleton, Z_Construct_UClass_ANBBGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBBGameStateBase.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<ANBBGameStateBase>()
{
	return ANBBGameStateBase::StaticClass();
}
ANBBGameStateBase::ANBBGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBBGameStateBase);
ANBBGameStateBase::~ANBBGameStateBase() {}
// End Class ANBBGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBBGameStateBase, ANBBGameStateBase::StaticClass, TEXT("ANBBGameStateBase"), &Z_Registration_Info_UClass_ANBBGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBBGameStateBase), 794709665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_3753109047(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Game_NBBGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

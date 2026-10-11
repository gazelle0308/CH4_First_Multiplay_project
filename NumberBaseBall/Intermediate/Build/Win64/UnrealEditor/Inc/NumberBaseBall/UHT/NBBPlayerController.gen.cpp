// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/Player/NBBPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBBPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBBPlayerController();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBBPlayerController_NoRegister();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_UNBBUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class ANBBPlayerController Function ClientRPCPrintChatMessageString
struct NBBPlayerController_eventClientRPCPrintChatMessageString_Parms
{
	FString InputFString;
};
static const FName NAME_ANBBPlayerController_ClientRPCPrintChatMessageString = FName(TEXT("ClientRPCPrintChatMessageString"));
void ANBBPlayerController::ClientRPCPrintChatMessageString(const FString& InputFString)
{
	NBBPlayerController_eventClientRPCPrintChatMessageString_Parms Parms;
	Parms.InputFString=InputFString;
	UFunction* Func = FindFunctionChecked(NAME_ANBBPlayerController_ClientRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/NBBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputFString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputFString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_InputFString = { "InputFString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBBPlayerController_eventClientRPCPrintChatMessageString_Parms, InputFString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputFString_MetaData), NewProp_InputFString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_InputFString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBBPlayerController, nullptr, "ClientRPCPrintChatMessageString", nullptr, nullptr, Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers), sizeof(NBBPlayerController_eventClientRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams) };
static_assert(sizeof(NBBPlayerController_eventClientRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBBPlayerController::execClientRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputFString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCPrintChatMessageString_Implementation(Z_Param_InputFString);
	P_NATIVE_END;
}
// End Class ANBBPlayerController Function ClientRPCPrintChatMessageString

// Begin Class ANBBPlayerController Function ServerRPCPrintChatMessageString
struct NBBPlayerController_eventServerRPCPrintChatMessageString_Parms
{
	FString InputFString;
};
static const FName NAME_ANBBPlayerController_ServerRPCPrintChatMessageString = FName(TEXT("ServerRPCPrintChatMessageString"));
void ANBBPlayerController::ServerRPCPrintChatMessageString(const FString& InputFString)
{
	NBBPlayerController_eventServerRPCPrintChatMessageString_Parms Parms;
	Parms.InputFString=InputFString;
	UFunction* Func = FindFunctionChecked(NAME_ANBBPlayerController_ServerRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/NBBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputFString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputFString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_InputFString = { "InputFString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBBPlayerController_eventServerRPCPrintChatMessageString_Parms, InputFString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputFString_MetaData), NewProp_InputFString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_InputFString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBBPlayerController, nullptr, "ServerRPCPrintChatMessageString", nullptr, nullptr, Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers), sizeof(NBBPlayerController_eventServerRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams) };
static_assert(sizeof(NBBPlayerController_eventServerRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBBPlayerController::execServerRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputFString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCPrintChatMessageString_Implementation(Z_Param_InputFString);
	P_NATIVE_END;
}
// End Class ANBBPlayerController Function ServerRPCPrintChatMessageString

// Begin Class ANBBPlayerController
void ANBBPlayerController::StaticRegisterNativesANBBPlayerController()
{
	UClass* Class = ANBBPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientRPCPrintChatMessageString", &ANBBPlayerController::execClientRPCPrintChatMessageString },
		{ "ServerRPCPrintChatMessageString", &ANBBPlayerController::execServerRPCPrintChatMessageString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBBPlayerController);
UClass* Z_Construct_UClass_ANBBPlayerController_NoRegister()
{
	return ANBBPlayerController::StaticClass();
}
struct Z_Construct_UClass_ANBBPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/NBBPlayerController.h" },
		{ "ModuleRelativePath", "Player/NBBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameResult_MetaData[] = {
		{ "Category", "NBBPlayerController" },
		{ "ModuleRelativePath", "Player/NBBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "NBBPlayerController" },
		{ "ModuleRelativePath", "Player/NBBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/NBBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameResultWidgetClass_MetaData[] = {
		{ "Category", "NBBPlayerController" },
		{ "ModuleRelativePath", "Player/NBBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameResultWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/NBBPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_GameResult;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameResultWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameResultWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBBPlayerController_ClientRPCPrintChatMessageString, "ClientRPCPrintChatMessageString" }, // 857705863
		{ &Z_Construct_UFunction_ANBBPlayerController_ServerRPCPrintChatMessageString, "ServerRPCPrintChatMessageString" }, // 3153733713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBBPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ANBBPlayerController_Statics::NewProp_GameResult = { "GameResult", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBBPlayerController, GameResult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameResult_MetaData), NewProp_GameResult_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANBBPlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBBPlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNBBUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBBPlayerController_Statics::NewProp_ChatInputWidgetInstance = { "ChatInputWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBBPlayerController, ChatInputWidgetInstance), Z_Construct_UClass_UNBBUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetInstance_MetaData), NewProp_ChatInputWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANBBPlayerController_Statics::NewProp_GameResultWidgetClass = { "GameResultWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBBPlayerController, GameResultWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameResultWidgetClass_MetaData), NewProp_GameResultWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBBPlayerController_Statics::NewProp_GameResultWidgetInstance = { "GameResultWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBBPlayerController, GameResultWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameResultWidgetInstance_MetaData), NewProp_GameResultWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBBPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBBPlayerController_Statics::NewProp_GameResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBBPlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBBPlayerController_Statics::NewProp_ChatInputWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBBPlayerController_Statics::NewProp_GameResultWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBBPlayerController_Statics::NewProp_GameResultWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBBPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBBPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBBPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBBPlayerController_Statics::ClassParams = {
	&ANBBPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANBBPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBBPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBBPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBBPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBBPlayerController()
{
	if (!Z_Registration_Info_UClass_ANBBPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBBPlayerController.OuterSingleton, Z_Construct_UClass_ANBBPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBBPlayerController.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<ANBBPlayerController>()
{
	return ANBBPlayerController::StaticClass();
}
void ANBBPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_GameResult(TEXT("GameResult"));
	const bool bIsValid = true
		&& Name_GameResult == ClassReps[(int32)ENetFields_Private::GameResult].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANBBPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBBPlayerController);
ANBBPlayerController::~ANBBPlayerController() {}
// End Class ANBBPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBBPlayerController, ANBBPlayerController::StaticClass, TEXT("ANBBPlayerController"), &Z_Registration_Info_UClass_ANBBPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBBPlayerController), 843678418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_2432439206(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_CH4_First_Multiplay_project_NumberBaseBall_Source_NumberBaseBall_Player_NBBPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

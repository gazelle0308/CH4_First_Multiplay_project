// 26/10/12 Copyright Jinho Song

// Base include
#include "Player/NBBPlayerController.h"

// Engine include
#include "EngineUtils.h"

// UI include
#include "UI/NBBUserWidget.h"

// KismetLibrary include
#include "Kismet/KismetSystemLibrary.h"

// Game Mode include
#include "Game/NBBGameModeBase.h"

// Game Statics include
#include "Kismet/GameplayStatics.h"

// PlayerState include
#include "Player/NBBPlayerState.h"

// Network include
#include "Net/UnrealNetwork.h"

// Project include
#include "NumberBaseBall/NumberBaseBall.h"



ANBBPlayerController::ANBBPlayerController()
{
	bReplicates = true;
}

void ANBBPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	if (IsLocalController() == false) {
		return;
	}

	if (IsValid(ChatInputWidgetClass) == true) {

		ChatInputWidgetInstance = CreateWidget<UNBBUserWidget>(this, ChatInputWidgetClass);

		if (IsValid(ChatInputWidgetInstance) == true) {
			ChatInputWidgetInstance->AddToViewport();
		}
	}

	if (IsValid(GameResultWidgetClass) == true)
	{
		GameResultWidgetInstance = CreateWidget<UUserWidget>(this, GameResultWidgetClass);
		if (IsValid(GameResultWidgetInstance) == true)
		{
			GameResultWidgetInstance->AddToViewport();
		}
	}
}

void ANBBPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, GameResult);
}

void ANBBPlayerController::SetChatMessageString(const FString& InputFString)
{
	ChatMessageString = InputFString;

	if (IsLocalController() == true)
	{
		ANBBPlayerState* NBBPS = GetPlayerState<ANBBPlayerState>();
		if (IsValid(NBBPS) == true)
		{
			FString CombinedMessageString = NBBPS->GetPlayerInfoString() + TEXT(": ") + InputFString;
			ServerRPCPrintChatMessageString(CombinedMessageString);
		}
	}
}

void ANBBPlayerController::PrintChatMessageString(const FString& InputFString)
{
	NBBFunctionLibrary::MyPrintString(this, InputFString, 10.f);
}

void ANBBPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InputFString)
{
	PrintChatMessageString(InputFString);
}

void ANBBPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InputFString)
{

	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (IsValid(GM) == true)
	{
		ANBBGameModeBase* NBBGM = Cast<ANBBGameModeBase>(GM);
		if (IsValid(NBBGM) == true)
		{
			NBBGM->PrintChatMessageString(this, InputFString);
		}
	}
}

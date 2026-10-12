// 26/10/12 Copyright Jinho Song

// Base include
#include "Game/NBBGameStateBase.h"

// GamePlayStatic include
#include "Kismet/GameplayStatics.h"

// Controller include
#include "Player/NBBPlayerController.h"

// GameMode include
#include "Game/NBBGameModeBase.h"

// Network include
#include "Net/UnrealNetwork.h"

void ANBBGameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString)
{
	if (HasAuthority() == false)
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (IsValid(PC) == true)
		{
			ANBBPlayerController* NBBPC = Cast<ANBBPlayerController>(PC);
			if (IsValid(NBBPC) == true)
			{
				FString NotificationString = InNameString + TEXT(" has joined the game.");
				NBBPC->PrintChatMessageString(NotificationString);
			}
		}
	}
}
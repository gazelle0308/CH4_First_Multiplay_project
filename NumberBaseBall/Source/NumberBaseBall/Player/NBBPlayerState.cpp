// 26/10/12 Copyright Jinho Song

// Base include
#include "Player/NBBPlayerState.h"


// Network include
#include "Net/UnrealNetwork.h"

ANBBPlayerState::ANBBPlayerState()
	: PlayerNameString(TEXT("None"))
	, CurrentGuessCount(0)
	, MaxGuessCount(3)
{
	bReplicates = true;
}

void ANBBPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, PlayerTurn);
	DOREPLIFETIME(ThisClass, LeftTurnTime);
	DOREPLIFETIME(ThisClass, PlayerNameString);
	DOREPLIFETIME(ThisClass, CurrentGuessCount);
}

FString ANBBPlayerState::GetPlayerInfoString()
{
	FString PlayerInfoString = PlayerNameString + TEXT("[") + FString::FromInt(CurrentGuessCount + 1) + TEXT("/") + FString::FromInt(MaxGuessCount) + TEXT("]");
	return PlayerInfoString;
}

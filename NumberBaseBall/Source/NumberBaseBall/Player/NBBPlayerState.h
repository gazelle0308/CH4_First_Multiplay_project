// 26/10/12 Copyright Jinho Song

#pragma once

// Core include
#include "CoreMinimal.h"

// Base include
#include "GameFramework/PlayerState.h"

// UHT include
#include "NBBPlayerState.generated.h"


UCLASS()
class NUMBERBASEBALL_API ANBBPlayerState : public APlayerState
{
	GENERATED_BODY()

	// Methods
public:
	ANBBPlayerState();

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	FString GetPlayerInfoString();

	// Properties
public:
	UPROPERTY(Replicated)
	FString PlayerNameString;

	UPROPERTY(Replicated)
	int32 CurrentGuessCount;

	int32 MaxGuessCount;
};

// 26/10/12 Copyright Jinho Song

#pragma once

// Core include
#include "CoreMinimal.h"

// Base include
#include "GameFramework/GameStateBase.h"

// UHT include
#include "NBBGameStateBase.generated.h"


UCLASS()
class NUMBERBASEBALL_API ANBBGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

	// Methods
public:
	UFUNCTION(NetMulticast, Reliable)
	void MulticastRPCBroadcastLoginMessage(const FString& InNameString = FString(TEXT("XXXXXXX")));

};

// 26/10/12 Copyright CJinho Song

#pragma once

// Core include
#include "CoreMinimal.h"

// UHT Header
#include "State.generated.h"

UENUM(BlueprintType)
enum class ETurnState : uint8
{
	NowTurn UMETA(DisplayName = "NowTurn"),
	WaitTurn UMETA(DisplayName = "WaitTurn"),
};
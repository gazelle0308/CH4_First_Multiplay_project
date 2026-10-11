// 26/10/12 Copyright Jinho Song

#pragma once

// Core include
#include "CoreMinimal.h"

// Base include
#include "GameFramework/GameModeBase.h"

// UHT include
#include "NBBGameModeBase.generated.h"


// Foward Declare

// Controller
class ANBBPlayerController;


UCLASS()
class NUMBERBASEBALL_API ANBBGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	// Methods
public:
	virtual void OnPostLogin(AController* NewPlayer) override;

	FString GenerateSecretNumber();

	bool IsGuessNumberString(const FString& InNumberString);

	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

	virtual void BeginPlay() override;

	void PrintChatMessageString(ANBBPlayerController* InChattingPlayerController, const FString& InChatMessageString);

	void IncreaseGuessCount(ANBBPlayerController* InChattingPlayerController);

	void ResetGame();

	void JudgeGame(ANBBPlayerController* InChattingPlayerController, int InStrikeCount);

	// Properties
protected:
	FString SecretNumberString;

	TArray<TObjectPtr<ANBBPlayerController>> AllPlayerControllers;

};

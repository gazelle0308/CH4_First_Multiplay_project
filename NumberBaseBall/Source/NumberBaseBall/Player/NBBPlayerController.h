// 26/10/12 Copyright Jinho Song

#pragma once

// Core include
#include "CoreMinimal.h"

// Base include
#include "GameFramework/PlayerController.h"

// UHT include
#include "NBBPlayerController.generated.h"

// Foward Declare

// UI
class UNBBUserWidget;

UCLASS()
class NUMBERBASEBALL_API ANBBPlayerController : public APlayerController
{
	GENERATED_BODY()

	// Methods
public:
	ANBBPlayerController();

	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;


	void SetChatMessageString(const FString& InputFString);

	void PrintChatMessageString(const FString& InputFString);

	UFUNCTION(Client, Reliable)
	void ClientRPCPrintChatMessageString(const FString& InputFString);

	UFUNCTION(Server, Reliable)
	void ServerRPCPrintChatMessageString(const FString& InputFString);

	// Properties
public:
	UPROPERTY(Replicated, BlueprintReadOnly)
	FText GameResult;

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UNBBUserWidget> ChatInputWidgetClass;

	UPROPERTY()
	TObjectPtr<UNBBUserWidget> ChatInputWidgetInstance;

	FString ChatMessageString;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> GameResultWidgetClass;

	UPROPERTY()
	TObjectPtr<UUserWidget> GameResultWidgetInstance;

};

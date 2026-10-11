// 26/10/12 Copyright Jinho Song

#pragma once

// Core include
#include "CoreMinimal.h"

// Base include
#include "Blueprint/UserWidget.h"

// UHT include
#include "NBBUserWidget.generated.h"

// Foward Declare

// Widget
class UEditableTextBox;

UCLASS()
class NUMBERBASEBALL_API UNBBUserWidget : public UUserWidget
{
	GENERATED_BODY()

	// Methods
public:
	virtual void NativeConstruct() override;

	virtual void NativeDestruct() override;

protected:
	UFUNCTION()
	void OnChatInputTextCommitted(const FText& Text,
		ETextCommit::Type CommitMethod);

	// Properties
public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> EditableTextBox_ChatInput;

};

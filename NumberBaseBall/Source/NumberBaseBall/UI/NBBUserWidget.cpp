// 26/10/12 Copyright Jinho Song

// Base include
#include "UI/NBBUserWidget.h"

// Controller include
#include "Player/NBBPlayerController.h"

// Edit Text Box include
#include "Components/EditableTextBox.h"


void UNBBUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == false) {

		EditableTextBox_ChatInput->OnTextCommitted.AddDynamic(this, &ThisClass::OnChatInputTextCommitted);

	}
}

void UNBBUserWidget::NativeDestruct()
{
	Super::NativeDestruct();

	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == true) {

		EditableTextBox_ChatInput->OnTextCommitted.RemoveDynamic(this, &ThisClass::OnChatInputTextCommitted);

	}

}

void UNBBUserWidget::OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter)
	{
		APlayerController* OwningPlayerController = GetOwningPlayer();
		if (IsValid(OwningPlayerController) == true)
		{
			ANBBPlayerController* OwningNBBPlayerController = Cast<ANBBPlayerController>(OwningPlayerController);
			if (IsValid(OwningNBBPlayerController) == true)
			{
				OwningNBBPlayerController->SetChatMessageString(Text.ToString());

				EditableTextBox_ChatInput->SetText(FText());
			}
		}
	}
}

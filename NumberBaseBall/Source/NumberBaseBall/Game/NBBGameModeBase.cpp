// 26/10/12 Copyright Jinho Song

// Base include
#include "Game/NBBGameModeBase.h"

// Engine include
#include "EngineUtils.h"

// GameState include
#include "Game/NBBGameStateBase.h"
#include "GameFramework/GameStateBase.h"

// PlayerState include
#include "Player/NBBPlayerState.h"

// Controller include
#include "Player/NBBPlayerController.h"

void ANBBGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	ANBBPlayerController* NBBPlayerController = Cast<ANBBPlayerController>(NewPlayer);
	if (IsValid(NBBPlayerController) == true)
	{
		NBBPlayerController->GameResult = FText::FromString(TEXT("Connected to the game server."));
		AllPlayerControllers.Add(NBBPlayerController);

		ANBBPlayerState* NBBPS = NBBPlayerController->GetPlayerState<ANBBPlayerState>();
		if (IsValid(NBBPS) == true)
		{
			NBBPS->PlayerNameString = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}

		ANBBGameStateBase* NBBGameStateBase = GetGameState<ANBBGameStateBase>();
		if (IsValid(NBBGameStateBase) == true)
		{
			NBBGameStateBase->MulticastRPCBroadcastLoginMessage(NBBPS->PlayerNameString);
		}
	}
}

FString ANBBGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) { return Num > 0; });

	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ANBBGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do {

		if (InNumberString.Len() != 3)
		{
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}

			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;

	} while (false);

	return bCanPlay;
}

FString ANBBGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0, BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void ANBBGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	SecretNumberString = GenerateSecretNumber();

	UE_LOG(LogTemp, Error, TEXT("%s"), *SecretNumberString);
}

void ANBBGameModeBase::PrintChatMessageString(ANBBPlayerController* InChattingPlayerController, const FString& InChatMessageString)
{
	FString ChatMessageString = InChatMessageString;
	int Index = InChatMessageString.Len() - 3;
	FString GuessNumberString = InChatMessageString.RightChop(Index);

	if (IsGuessNumberString(GuessNumberString) == true)
	{
		FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);

		IncreaseGuessCount(InChattingPlayerController);

		for (TActorIterator<ANBBPlayerController> It(GetWorld()); It; ++It)
		{
			ANBBPlayerController* NBBPlayerController = *It;
			if (IsValid(NBBPlayerController) == true)
			{
				FString CombinedMessageString = InChatMessageString + TEXT(" -> ") + JudgeResultString;
				NBBPlayerController->ClientRPCPrintChatMessageString(CombinedMessageString);

				int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
				JudgeGame(InChattingPlayerController, StrikeCount);
			}
		}
	}
	else
	{
		InChattingPlayerController->ClientRPCPrintChatMessageString(FString("Invalid input. Please try again."));
	}
}

void ANBBGameModeBase::IncreaseGuessCount(ANBBPlayerController* InChattingPlayerController)
{
	ANBBPlayerState* NBBPS = InChattingPlayerController->GetPlayerState<ANBBPlayerState>();
	if (IsValid(NBBPS) == true)
	{
		NBBPS->CurrentGuessCount++;
	}
}

void ANBBGameModeBase::ResetGame()
{
	SecretNumberString = GenerateSecretNumber();

	for (const auto& NBBPlayerController : AllPlayerControllers)
	{
		ANBBPlayerState* NBBPS = NBBPlayerController->GetPlayerState<ANBBPlayerState>();
		if (IsValid(NBBPS) == true)
		{
			NBBPS->CurrentGuessCount = 0;
		}
	}
}

void ANBBGameModeBase::JudgeGame(ANBBPlayerController* InChattingPlayerController, int InStrikeCount)
{
	if (3 == InStrikeCount)
	{
		ANBBPlayerState* NBBPS = InChattingPlayerController->GetPlayerState<ANBBPlayerState>();
		for (const auto& NBBPlayerController : AllPlayerControllers)
		{
			if (IsValid(NBBPS) == true)
			{
				FString CombinedMessageString = NBBPS->PlayerNameString + TEXT(" has won the game.");
				NBBPlayerController->GameResult = FText::FromString(CombinedMessageString);

				ResetGame();
			}
		}
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& NBBPlayerController : AllPlayerControllers)
		{
			ANBBPlayerState* NBBPS = NBBPlayerController->GetPlayerState<ANBBPlayerState>();
			if (IsValid(NBBPS) == true)
			{
				if (NBBPS->CurrentGuessCount < NBBPS->MaxGuessCount)
				{
					bIsDraw = false;
					break;
				}
			}
		}

		if (true == bIsDraw)
		{
			for (const auto& NBBPlayerController : AllPlayerControllers)
			{
				NBBPlayerController->GameResult = FText::FromString(TEXT("Draw..."));

				ResetGame();
			}
		}
	}
}

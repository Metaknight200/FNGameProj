#include "FortCommunityVotingCountdown.h"

UFortCommunityVotingCountdown::UFortCommunityVotingCountdown() : UUserWidget(FObjectInitializer::Get()) {
    this->Text_TimeRemaining = NULL;
}

void UFortCommunityVotingCountdown::SetDateTimeValue(const FDateTime& InDateTime, float InRefreshDelay) {
}



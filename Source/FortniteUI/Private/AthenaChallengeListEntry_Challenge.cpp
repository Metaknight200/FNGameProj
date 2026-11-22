#include "AthenaChallengeListEntry_Challenge.h"

UAthenaChallengeListEntry_Challenge::UAthenaChallengeListEntry_Challenge() {
    this->bHideProgressBar = false;
    this->RichText_ChallengeDesc = NULL;
    this->ChallengeProgress_ObjectivesCompleted = NULL;
}



int32 UAthenaChallengeListEntry_Challenge::GetChallengeWeight() const {
    return 0;
}




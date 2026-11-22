#include "FortTheaterSelect.h"

UFortTheaterSelect::UFortTheaterSelect() {
    this->OverlayMain = NULL;
    this->DefaultRequiredCompletedQuest = NULL;
}



bool UFortTheaterSelect::GetTheaterRecommendedRatingRange(const FString& UniqueId, int32& Minimum, int32& Maximum) const {
    return false;
}



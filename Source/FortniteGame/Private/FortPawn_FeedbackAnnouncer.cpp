#include "FortPawn_FeedbackAnnouncer.h"

AFortPawn_FeedbackAnnouncer::AFortPawn_FeedbackAnnouncer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->NetDormancy = DORM_Never;
    this->bRegisterWithAimAssist = false;
    this->bUsesStats = false;
    this->VocalChords.AddDefaulted(2);
    this->AnimUpdateRateVisibleMaxDistanceFactor.AddDefaulted(2);
}



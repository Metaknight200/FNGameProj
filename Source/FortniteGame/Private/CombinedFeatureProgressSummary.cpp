#include "CombinedFeatureProgressSummary.h"

FCombinedFeatureProgressSummary::FCombinedFeatureProgressSummary() {
    this->GameFeature = EFortGameFeature::EarlyStartup;
    this->CombinedProgress = 0.00f;
    this->bIsPaused = false;
    this->bCanBePaused = false;
    this->bIsFinished = false;
}


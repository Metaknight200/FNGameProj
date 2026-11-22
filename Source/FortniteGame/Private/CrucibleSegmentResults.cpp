#include "CrucibleSegmentResults.h"

FCrucibleSegmentResults::FCrucibleSegmentResults() {
    this->SegmentId = 0;
    this->CalculatedScore = 0.00f;
    this->CalculatedPenalty = 0.00f;
    this->CalculatedMissedTargets = 0;
    this->StartTime = 0.00f;
    this->FinishTime = 0.00f;
    this->CancelTime = 0.00f;
    this->NumAIElims = 0;
    this->NumTargetElims = 0;
}


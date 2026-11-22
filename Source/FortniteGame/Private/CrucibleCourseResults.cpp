#include "CrucibleCourseResults.h"

FCrucibleCourseResults::FCrucibleCourseResults() {
    this->CalculatedScore = 0.00f;
    this->CalculatedTotalPenalty = 0.00f;
    this->CalculatedMissedTargets = 0;
    this->CalculatedSpawnedTargets = 0;
    this->StartTime = 0.00f;
    this->FinishTime = 0.00f;
    this->CancelTime = 0.00f;
    this->bInputMethodWasKBMAtAnyPoint = false;
}


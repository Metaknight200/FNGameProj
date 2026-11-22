#include "CrucibleSegmentData.h"

FCrucibleSegmentData::FCrucibleSegmentData() {
    this->bRegistered = false;
    this->NumAI = 0;
    this->NumTargets = 0;
    this->MissedTargetPenalty = 0.00f;
    this->BackendStatType = EFortCrucibleStatType::CourseOverall;
}


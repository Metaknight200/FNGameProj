#include "PhaseInfo.h"

FPhaseInfo::FPhaseInfo() {
    this->PhaseActorClass = NULL;
    this->SequenceTime = 0.00f;
    this->RelevancyMode = ESpecialRelevancyMode::NormalRelevancy;
    this->NumOfSquadsInRelevancyGroup = 0;
    this->bStartNextPhaseOnPhaseFinished = false;
    this->PhaseActor = NULL;
}


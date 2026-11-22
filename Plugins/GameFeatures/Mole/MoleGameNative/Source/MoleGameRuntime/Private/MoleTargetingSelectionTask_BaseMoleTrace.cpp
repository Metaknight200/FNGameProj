#include "MoleTargetingSelectionTask_BaseMoleTrace.h"

UMoleTargetingSelectionTask_BaseMoleTrace::UMoleTargetingSelectionTask_BaseMoleTrace() {
    this->PawnTargetingSource = EFortAbilityTargetingSource::Camera;
    this->bIgnoreKnownSaboteurs = false;
    this->bIgnoreGhosts = false;
}



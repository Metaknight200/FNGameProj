#include "FortAthenaMutator_PlayerDamage.h"

AFortAthenaMutator_PlayerDamage::AFortAthenaMutator_PlayerDamage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bIsUsingHitResult = false;
    this->DamageMultiplier = 1.00f;
    this->DetectionType = EPlayerDamageHeightRatioDetectionType::None;
}



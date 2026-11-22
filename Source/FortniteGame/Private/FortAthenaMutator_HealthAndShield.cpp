#include "FortAthenaMutator_HealthAndShield.h"

AFortAthenaMutator_HealthAndShield::AFortAthenaMutator_HealthAndShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->NumericalMutatorOverride = EAthenaMutatorEvaluators::NoOverride;
    this->MaxHealth = 0.00f;
    this->StartingHealth = 0.00f;
    this->MaxShield = 0.00f;
    this->StartingShield = 0.00f;
}



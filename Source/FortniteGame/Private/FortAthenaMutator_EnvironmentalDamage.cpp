#include "FortAthenaMutator_EnvironmentalDamage.h"

AFortAthenaMutator_EnvironmentalDamage::AFortAthenaMutator_EnvironmentalDamage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
    this->DamageMultiplier = 1.00f;
    this->bExcludeActorsAddedToVolume = false;
    this->WorldActivationTime = 0.00f;
    this->TeamDamageFilter = EBuildingDamageTeamFilter::Default;
    this->EnvironmentDamageFilter = EEnvironmentDamageFilter::All;
}



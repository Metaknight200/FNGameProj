#include "FortGameStateBoss.h"

AFortGameStateBoss::AFortGameStateBoss(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDBNODeathEnabled = false;
}

void AFortGameStateBoss::BossSpawned() {
}

void AFortGameStateBoss::BossKilled(const AController* InstigatingController, const AActor* DamageCausingActor, const FGameplayTagContainer& DamageTags) {
}

void AFortGameStateBoss::AllPlayersDied() {
}



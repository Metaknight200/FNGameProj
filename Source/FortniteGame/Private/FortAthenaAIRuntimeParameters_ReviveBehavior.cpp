#include "FortAthenaAIRuntimeParameters_ReviveBehavior.h"

UFortAthenaAIRuntimeParameters_ReviveBehavior::UFortAthenaAIRuntimeParameters_ReviveBehavior() {
    this->bAllowReviveSquadmates = true;
    this->bAllowReviveSameFactionNPCs = false;
    this->bUseReviveToken = false;
    this->MaxDistanceToRevive = 0.00f;
}



#include "FortContextualTutorialDefinition_Consumable.h"

UFortContextualTutorialDefinition_Consumable::UFortContextualTutorialDefinition_Consumable() {
    this->RequirementsCheckDelay = 1.00f;
    this->bUseHealthRequirements = false;
    this->HealthRequirements = 0.00f;
    this->bUseShieldRequirements = false;
    this->ShieldRequirements = 0.00f;
    this->bUseCommitedCallback = true;
    this->bUseActivatedCallback = false;
    this->bOnlyInterruptibleHealingItem = true;
}



#include "FortAthenaMutator_OnDmgDamageSelf.h"

AFortAthenaMutator_OnDmgDamageSelf::AFortAthenaMutator_OnDmgDamageSelf(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->DamageToDeal = 0.00f;
    this->bRequiresNonZeroDamage = true;
    this->TargetQueryIndex = -1;
    this->WeaponQueryIndex = -1;
}



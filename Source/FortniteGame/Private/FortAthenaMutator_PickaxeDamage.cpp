#include "FortAthenaMutator_PickaxeDamage.h"

AFortAthenaMutator_PickaxeDamage::AFortAthenaMutator_PickaxeDamage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->PickaxeInstantDestroy = false;
}



#include "FortAthenaMutator_ModifyIncomingPawnDamage.h"

AFortAthenaMutator_ModifyIncomingPawnDamage::AFortAthenaMutator_ModifyIncomingPawnDamage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
}



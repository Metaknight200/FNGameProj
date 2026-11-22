#include "FortAthenaMutator_PerkSystemMutator.h"

AFortAthenaMutator_PerkSystemMutator::AFortAthenaMutator_PerkSystemMutator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->MinPerksToUnlock = 1;
    this->MaxPerksToUnlock = 3;
    this->bDelayedPerkSelection = false;
}



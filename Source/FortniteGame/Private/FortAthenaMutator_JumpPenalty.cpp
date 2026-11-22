#include "FortAthenaMutator_JumpPenalty.h"

AFortAthenaMutator_JumpPenalty::AFortAthenaMutator_JumpPenalty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bApplyJumpPenalty = true;
}

void AFortAthenaMutator_JumpPenalty::OnFortPawnChanged(AFortPawn* NewPawn) {
}



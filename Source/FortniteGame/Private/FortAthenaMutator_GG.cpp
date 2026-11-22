#include "FortAthenaMutator_GG.h"

AFortAthenaMutator_GG::AFortAthenaMutator_GG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->ScoreToWin = 0;
    this->CachedContext = NULL;
}

void AFortAthenaMutator_GG::OnGamePhaseChanged(EAthenaGamePhase Phase) {
}



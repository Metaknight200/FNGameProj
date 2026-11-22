#include "FortAthenaMutator_TDM.h"

AFortAthenaMutator_TDM::AFortAthenaMutator_TDM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsTwoTeamTDM = false;
    this->bShouldGrantInventoryToNewPlayers = true;
}

void AFortAthenaMutator_TDM::OnMutatorGenericIntegerUpdated(int32 GenericIntegerIndex, int32 NewIntegerValue) {
}



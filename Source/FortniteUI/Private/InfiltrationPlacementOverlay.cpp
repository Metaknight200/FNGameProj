#include "InfiltrationPlacementOverlay.h"
#include "FortAthenaMutator_Infiltration.h"

UInfiltrationPlacementOverlay::UInfiltrationPlacementOverlay() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Infiltration::StaticClass();
}

uint8 UInfiltrationPlacementOverlay::GetLocalPlayerTeam() const {
    return 0;
}

int32 UInfiltrationPlacementOverlay::GetIntelDownloaded() const {
    return 0;
}

int32 UInfiltrationPlacementOverlay::GetIntelCaptured() const {
    return 0;
}

uint8 UInfiltrationPlacementOverlay::GetDefendingTeam() const {
    return 0;
}

uint8 UInfiltrationPlacementOverlay::GetAttackingTeam() const {
    return 0;
}



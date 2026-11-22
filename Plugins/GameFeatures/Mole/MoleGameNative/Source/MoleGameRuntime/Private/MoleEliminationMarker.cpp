#include "MoleEliminationMarker.h"
#include "Net/UnrealNetwork.h"

AMoleEliminationMarker::AMoleEliminationMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RepresentedPlayer = NULL;
}


void AMoleEliminationMarker::OnRep_RepresentedPlayer() {
}

void AMoleEliminationMarker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMoleEliminationMarker, RepresentedPlayer);
}



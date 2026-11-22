#include "FortAthenaMutator_Valkyrie.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Valkyrie::AFortAthenaMutator_Valkyrie(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
}

void AFortAthenaMutator_Valkyrie::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Valkyrie, DefaultSpawnRangeStart);
    DOREPLIFETIME(AFortAthenaMutator_Valkyrie, DefaultSpawnRangeEnd);
}



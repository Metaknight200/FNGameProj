#include "FortAthenaMutator_InfiltrationRoundPlacard.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_InfiltrationRoundPlacard::AFortAthenaMutator_InfiltrationRoundPlacard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoundInfoInterfaceRedirectReplicationObject = NULL;
}

void AFortAthenaMutator_InfiltrationRoundPlacard::OnRep_RoundInfoInterfaceRedirectReplicationObject() {
}

void AFortAthenaMutator_InfiltrationRoundPlacard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_InfiltrationRoundPlacard, RoundInfoInterfaceRedirectReplicationObject);
}



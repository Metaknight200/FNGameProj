#include "FortGameplayMutator.h"
#include "Net/UnrealNetwork.h"

AFortGameplayMutator::AFortGameplayMutator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = false;
    this->MutatorEnabledMinigameStates = 62;
    this->bNetworkDormantWhenDeactivated = false;
}

void AFortGameplayMutator::SetMutatorActive(bool bEnable) {
}

void AFortGameplayMutator::OnRep_bMutatorActive() {
}

bool AFortGameplayMutator::IsMutatorActive() const {
    return false;
}


void AFortGameplayMutator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameplayMutator, bMutatorActive);
}



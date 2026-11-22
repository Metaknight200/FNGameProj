#include "FortAthenaMutator_SpyRumble.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_SpyRumble::AFortAthenaMutator_SpyRumble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumKillsForNextPerkUnlock = 0;
    this->KillCountCutOff = 1000;
}

void AFortAthenaMutator_SpyRumble::OnRep_NumKillsForNextPerkUnlock() {
}

void AFortAthenaMutator_SpyRumble::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_SpyRumble, NumKillsForNextPerkUnlock);
}



#include "FortGameStateComponent_AffiliationManager.h"
#include "Net/UnrealNetwork.h"

UFortGameStateComponent_AffiliationManager::UFortGameStateComponent_AffiliationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortGameStateComponent_AffiliationManager::OnRep_FactionInfos() {
}

void UFortGameStateComponent_AffiliationManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortGameStateComponent_AffiliationManager, FactionInfos);
}



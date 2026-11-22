#include "FortMinigameSpawnerComponent.h"
#include "Net/UnrealNetwork.h"

UFortMinigameSpawnerComponent::UFortMinigameSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortMinigameSpawnerComponent::OnRep_ToSpawnList() {
}

void UFortMinigameSpawnerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMinigameSpawnerComponent, ToSpawnList);
}



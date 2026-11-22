#include "PlayspaceControllerComponent_PlayerSpawning.h"
#include "Net/UnrealNetwork.h"

UPlayspaceControllerComponent_PlayerSpawning::UPlayspaceControllerComponent_PlayerSpawning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->SpawnCameraActor = NULL;
    this->bClientReadyForSpawning = false;
}

void UPlayspaceControllerComponent_PlayerSpawning::ServerMarkReadyForSpawning_Implementation() {
}
bool UPlayspaceControllerComponent_PlayerSpawning::ServerMarkReadyForSpawning_Validate() {
    return true;
}

void UPlayspaceControllerComponent_PlayerSpawning::OnRep_ReplicatedSpawnInfo() {
}

FReplicatedSpawnInfo UPlayspaceControllerComponent_PlayerSpawning::GetSpawnInfo() const {
    return FReplicatedSpawnInfo{};
}

void UPlayspaceControllerComponent_PlayerSpawning::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayspaceControllerComponent_PlayerSpawning, ReplicatedSpawnInfo);
}



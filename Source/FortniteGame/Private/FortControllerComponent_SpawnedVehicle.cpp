#include "FortControllerComponent_SpawnedVehicle.h"
#include "Net/UnrealNetwork.h"

UFortControllerComponent_SpawnedVehicle::UFortControllerComponent_SpawnedVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnedVehicle = NULL;
}

void UFortControllerComponent_SpawnedVehicle::OnRep_SpawnedVehicle() {
}

void UFortControllerComponent_SpawnedVehicle::HandleVehicleStateChanged(AFortPlayerPawn* PlayerPawn, AActor* NewVehicle, AActor* OldVehicle) {
}

void UFortControllerComponent_SpawnedVehicle::HandleTestStillAttached() {
}

void UFortControllerComponent_SpawnedVehicle::HandlePlayerDisconnectedChanged(AFortPlayerStateAthena* DisconnectingPlayerState, bool bIsDisconnected) {
}

void UFortControllerComponent_SpawnedVehicle::HandleDeferredExitSpawnVehicle(const FVector& FinalExitVelocity) {
}

void UFortControllerComponent_SpawnedVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_SpawnedVehicle, SpawnedVehicle);
}



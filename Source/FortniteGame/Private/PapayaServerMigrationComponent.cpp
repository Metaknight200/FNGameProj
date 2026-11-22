#include "PapayaServerMigrationComponent.h"
#include "Net/UnrealNetwork.h"

UPapayaServerMigrationComponent::UPapayaServerMigrationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bSubscribeToMeshNetwork = true;
    this->LastRequestedTimeForMigrationTimerPushback = 0.00f;
}

void UPapayaServerMigrationComponent::OnRep_LastRequestedTimeForMigrationTimerPushback() {
}

void UPapayaServerMigrationComponent::OnGameStateReady(AGameStateBase* GameState) {
}

void UPapayaServerMigrationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPapayaServerMigrationComponent, LastRequestedTimeForMigrationTimerPushback);
}



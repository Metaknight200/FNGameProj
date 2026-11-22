#include "BuildingGameplayActorCloneMachine.h"
#include "Net/UnrealNetwork.h"

ABuildingGameplayActorCloneMachine::ABuildingGameplayActorCloneMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CloneLocation = NULL;
    this->bRespawnCompleteAndSelfDestructing = false;
    this->OnDamagedNotifyPlayerSound = NULL;
    this->OnDestroyedNotifyPlayerSound = NULL;
    this->ActivationServerEndTime = -1.00f;
    this->RespawnServerEndTime = -1.00f;
}

void ABuildingGameplayActorCloneMachine::OnRep_RespawnServerEndTime() {
}

void ABuildingGameplayActorCloneMachine::OnRep_ActivationServerEndTime() {
}

void ABuildingGameplayActorCloneMachine::OnCloneMachineSpawnsPlayer_Implementation(AFortPlayerPawn* PlayerPawn) {
}

void ABuildingGameplayActorCloneMachine::OnCloneMachineRespawningBegins_Implementation() {
}

void ABuildingGameplayActorCloneMachine::OnCloneMachineActivationBegins_Implementation() {
}

void ABuildingGameplayActorCloneMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorCloneMachine, ActivationServerEndTime);
    DOREPLIFETIME(ABuildingGameplayActorCloneMachine, RespawnServerEndTime);
}



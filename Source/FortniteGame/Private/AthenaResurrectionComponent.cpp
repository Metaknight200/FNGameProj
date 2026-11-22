#include "AthenaResurrectionComponent.h"
#include "Net/UnrealNetwork.h"

UAthenaResurrectionComponent::UAthenaResurrectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClosestSpawnMachineIndex = -1;
    this->NotifyPlayerDamageThrottle = -1.00f;
}

void UAthenaResurrectionComponent::ServerOnInterruptResurrectionInteraction_Implementation(ABuildingGameplayActorSpawnMachine* SpawnMachine) {
}
bool UAthenaResurrectionComponent::ServerOnInterruptResurrectionInteraction_Validate(ABuildingGameplayActorSpawnMachine* SpawnMachine) {
    return true;
}

void UAthenaResurrectionComponent::ServerOnBeginResurrectionInteraction_Implementation(ABuildingGameplayActorSpawnMachine* SpawnMachine) {
}
bool UAthenaResurrectionComponent::ServerOnBeginResurrectionInteraction_Validate(ABuildingGameplayActorSpawnMachine* SpawnMachine) {
    return true;
}

void UAthenaResurrectionComponent::OnRep_PlayerIdsForResurrection() {
}

void UAthenaResurrectionComponent::ClientNotifyCloneMchineDestroyed_Implementation(const USoundCue* DestroyedSound) {
}

void UAthenaResurrectionComponent::ClientNotifyCloneMachineUnderAttack_Implementation(const USoundCue* DamageSound) {
}

void UAthenaResurrectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAthenaResurrectionComponent, PlayerIdsForResurrection);
    DOREPLIFETIME(UAthenaResurrectionComponent, CloneMachineRepData);
}



#include "BuildingGameplayActorSpawnChip.h"
#include "Net/UnrealNetwork.h"

ABuildingGameplayActorSpawnChip::ABuildingGameplayActorSpawnChip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerPlayerController = NULL;
    this->OwnerPlayerState = NULL;
    this->IndicatorClass = NULL;
    this->bAutoAcquireSpawnChip = false;
    this->SquadId = 0;
}

void ABuildingGameplayActorSpawnChip::PickUp(AFortPlayerControllerAthena* PickingUpController) {
}

void ABuildingGameplayActorSpawnChip::OnRep_RebootCardReplicatedState() {
}

void ABuildingGameplayActorSpawnChip::OnDestroyPickup_Implementation() {
}

void ABuildingGameplayActorSpawnChip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorSpawnChip, RebootCardReplicatedState);
    DOREPLIFETIME(ABuildingGameplayActorSpawnChip, SquadId);
}



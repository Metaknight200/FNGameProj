#include "FortVehicleSeatComponent.h"
#include "Net/UnrealNetwork.h"

UFortVehicleSeatComponent::UFortVehicleSeatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SeatSwitchCooldown = 0.00f;
    this->bHasAnyMountedWeaponSeats = false;
    this->bAlwaysAllowEntry = false;
}

void UFortVehicleSeatComponent::OnRep_PlayerSlots() {
}

void UFortVehicleSeatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVehicleSeatComponent, PlayerSlots);
}



#include "FortAthenaVehicleFuelComponent.h"
#include "Net/UnrealNetwork.h"

UFortAthenaVehicleFuelComponent::UFortAthenaVehicleFuelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldInitializeWithStartingFuel = true;
    this->OwnerVehicle = NULL;
    this->ServerFuel = 0.00f;
    this->OutOfFuelSound = NULL;
    this->LowFuelSound = NULL;
    this->LowFuelRepeatingPing = NULL;
}

void UFortAthenaVehicleFuelComponent::OnRep_ServerFuel(float PreviousFuel) {
}

void UFortAthenaVehicleFuelComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAthenaVehicleFuelComponent, ServerFuel);
}



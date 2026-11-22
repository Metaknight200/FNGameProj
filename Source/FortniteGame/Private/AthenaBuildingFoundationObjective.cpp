#include "AthenaBuildingFoundationObjective.h"
#include "Net/UnrealNetwork.h"

AAthenaBuildingFoundationObjective::AAthenaBuildingFoundationObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentHealth = -1.00f;
    this->MaxHealth = -1.00f;
}


void AAthenaBuildingFoundationObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaBuildingFoundationObjective, CurrentHealth);
    DOREPLIFETIME(AAthenaBuildingFoundationObjective, MaxHealth);
}



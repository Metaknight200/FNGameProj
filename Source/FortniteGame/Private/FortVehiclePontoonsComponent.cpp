#include "FortVehiclePontoonsComponent.h"
#include "Net/UnrealNetwork.h"

UFortVehiclePontoonsComponent::UFortVehiclePontoonsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerVehicle = NULL;
    this->WaterLineStartPontoonIndex = 0;
    this->WaterLineEndPontoonIndex = 0;
}

void UFortVehiclePontoonsComponent::OnRep_PontoonRadius(const TArray<float>& PrevPontoonRadiuses) {
}

void UFortVehiclePontoonsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVehiclePontoonsComponent, OverridePontoonRadiuses);
}



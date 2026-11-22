#include "BuildingCustomizableSpawnContainer.h"
#include "Net/UnrealNetwork.h"

ABuildingCustomizableSpawnContainer::ABuildingCustomizableSpawnContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ABuildingCustomizableSpawnContainer::ValidateSpawnItems() {
}

void ABuildingCustomizableSpawnContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingCustomizableSpawnContainer, SpawnItems);
}



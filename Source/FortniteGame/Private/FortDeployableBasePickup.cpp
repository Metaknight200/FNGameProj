#include "FortDeployableBasePickup.h"
#include "Net/UnrealNetwork.h"

AFortDeployableBasePickup::AFortDeployableBasePickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AFortDeployableBasePickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortDeployableBasePickup, AssociatedPlotOccupant);
}



#include "WorldTileFoundation.h"
#include "Net/UnrealNetwork.h"

AWorldTileFoundation::AWorldTileFoundation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumRotations = 255;
}

void AWorldTileFoundation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWorldTileFoundation, NumRotations);
}



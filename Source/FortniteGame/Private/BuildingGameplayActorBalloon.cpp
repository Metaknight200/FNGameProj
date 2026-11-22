#include "BuildingGameplayActorBalloon.h"
#include "Net/UnrealNetwork.h"

ABuildingGameplayActorBalloon::ABuildingGameplayActorBalloon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BalloonLocationSelection = 0;
    this->BalloonNoAim = 1.00f;
}

void ABuildingGameplayActorBalloon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorBalloon, BalloonLocationSelection);
}



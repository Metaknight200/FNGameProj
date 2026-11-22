#include "BuildingGameplayActorTransientQuest.h"

ABuildingGameplayActorTransientQuest::ABuildingGameplayActorTransientQuest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Initial;
    this->InteractionTextRefreshRate = 1.00f;
}

void ABuildingGameplayActorTransientQuest::StopUpdatingInteractionText(const AActor* TriggeredActor) {
}

void ABuildingGameplayActorTransientQuest::StartUpdatingInteractionText(const AActor* TriggeredActor) {
}


void ABuildingGameplayActorTransientQuest::MulticastSetInteractionText_Implementation(const TArray<FPawnBountyInteractionInfo>& PawnBountyInteractionInfo) {
}



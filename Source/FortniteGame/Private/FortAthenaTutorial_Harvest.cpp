#include "FortAthenaTutorial_Harvest.h"

AFortAthenaTutorial_Harvest::AFortAthenaTutorial_Harvest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HarvestMarker = NULL;
    this->DoorTargetAppearDelay = 2.00f;
    this->DoorTargetVisual = NULL;
    this->HarvestTriggerBox = NULL;
    this->BlockerHarvest = NULL;
    this->BuildingToDestroy = NULL;
}

void AFortAthenaTutorial_Harvest::OnBuildingDestroyed() {
}

void AFortAthenaTutorial_Harvest::OnBeginOverlapHarvestTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}



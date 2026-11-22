#include "FortAthenaTutorial_Chest.h"

AFortAthenaTutorial_Chest::AFortAthenaTutorial_Chest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Chest = NULL;
    this->ChestLookMarker = NULL;
    this->InteractButtonHighlightType = NULL;
    this->TriggerBox = NULL;
    this->ShowEasyInteractIconDelay = 2.00f;
}

void AFortAthenaTutorial_Chest::OnPlayerEntersTrigger(AActor* OverlappedActor, AActor* OtherActor) {
}



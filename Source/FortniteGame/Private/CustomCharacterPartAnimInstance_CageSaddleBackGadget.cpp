#include "CustomCharacterPartAnimInstance_CageSaddleBackGadget.h"

UCustomCharacterPartAnimInstance_CageSaddleBackGadget::UCustomCharacterPartAnimInstance_CageSaddleBackGadget() {
    this->SkeletalMeshComponent = NULL;
    this->PlayerPawn = NULL;
    this->RollAlpha = 0.00f;
    this->bHasTriggeredGCBurstLocal = false;
    this->InflationBlendWeight = 0.00f;
    this->MinDurationRemainingForGCBurstLocal = 1.20f;
    this->InflationCurveLong = NULL;
}



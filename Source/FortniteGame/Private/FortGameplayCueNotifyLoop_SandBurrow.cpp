#include "FortGameplayCueNotifyLoop_SandBurrow.h"
#include "FortLayeredAudioComponent.h"

AFortGameplayCueNotifyLoop_SandBurrow::AFortGameplayCueNotifyLoop_SandBurrow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LayeredAudioComp = CreateDefaultSubobject<UFortLayeredAudioComponent>(TEXT("LayeredAudioComp"));
    this->FXSpeedLinesComp = NULL;
    this->PlayerPawn = NULL;
    this->CurrentSpeed = 0.00f;
    this->bShouldShowTrailFX = false;
    this->bShouldShowSpeedLines = false;
    this->LayeredAudioComp->SetupAttachment(RootComponent);
}



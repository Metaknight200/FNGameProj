#include "FortGameplayCueNotifyLoop_ZiplineTravel.h"
#include "FortLayeredAudioComponent.h"

AFortGameplayCueNotifyLoop_ZiplineTravel::AFortGameplayCueNotifyLoop_ZiplineTravel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LayeredAudioComp = CreateDefaultSubobject<UFortLayeredAudioComponent>(TEXT("LayeredAudioComp"));
    this->PlayerPawn = NULL;
    this->LayeredAudioComp->SetupAttachment(RootComponent);
}



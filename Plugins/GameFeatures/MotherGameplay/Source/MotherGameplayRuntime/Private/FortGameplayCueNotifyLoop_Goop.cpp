#include "FortGameplayCueNotifyLoop_Goop.h"
#include "Components/AudioComponent.h"

AFortGameplayCueNotifyLoop_Goop::AFortGameplayCueNotifyLoop_Goop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InterpSpeed = 7.00f;
    this->LoopingAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("LoopingAudioComponent"));
}



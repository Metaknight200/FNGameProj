#include "AudioGameplayVolumeComponentBase.h"

UAudioGameplayVolumeComponentBase::UAudioGameplayVolumeComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0;
}

void UAudioGameplayVolumeComponentBase::SetPriority(int32 InPriority) {
}



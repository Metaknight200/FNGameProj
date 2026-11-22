#include "FortAudioToMPCComponent.h"

UFortAudioToMPCComponent::UFortAudioToMPCComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPushDataToMPC = true;
    this->bCacheDataForBlueprintUse = true;
    this->MaterialParameterCollection = NULL;
    this->bWasPlaying = false;
}


float UFortAudioToMPCComponent::GetCachedMagnitudeForChannel(int32 ChannelIndex) const {
    return 0.0f;
}

float UFortAudioToMPCComponent::GetCachedAverageMagnitude() const {
    return 0.0f;
}



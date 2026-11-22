#include "SubmixSendVolumeComponent.h"

USubmixSendVolumeComponent::USubmixSendVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void USubmixSendVolumeComponent::SetSubmixSendSettings(const TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings) {
}



#include "FortLayeredAudioComponent.h"
#include "Engine/EngineTypes.h"

UFortLayeredAudioComponent::UFortLayeredAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStopWhenOwnerDestroyed = false;
    this->bAutoManageAttachment = true;
    this->AutoAttachLocationRule = EAttachmentRule::SnapToTarget;
    this->AutoAttachRotationRule = EAttachmentRule::SnapToTarget;
    this->AutoAttachScaleRule = EAttachmentRule::SnapToTarget;
    this->bFadeWhenOwnerDestroyed = true;
    this->FadeTimeWhenOwnerDestroyed = 0.50f;
}

void UFortLayeredAudioComponent::StopAllAudio() {
}

void UFortLayeredAudioComponent::SetFloatParameterExt(FName Name, float Value) {
}



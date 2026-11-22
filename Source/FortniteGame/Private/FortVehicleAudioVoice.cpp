#include "FortVehicleAudioVoice.h"
#include "Engine/EngineTypes.h"

UFortVehicleAudioVoice::UFortVehicleAudioVoice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStopWhenOwnerDestroyed = false;
    this->bAutoManageAttachment = true;
    this->AutoAttachLocationRule = EAttachmentRule::SnapToTarget;
    this->AutoAttachRotationRule = EAttachmentRule::SnapToTarget;
    this->AutoAttachScaleRule = EAttachmentRule::SnapToTarget;
    this->LoopingSound = NULL;
    this->bFadeWhenOwnerDestroyed = true;
    this->FadeTimeWhenOwnerDestroyed = 0.50f;
    this->OneShotGateInterpSpeed = 10.00f;
}

void UFortVehicleAudioVoice::StopAllAudio() {
}

void UFortVehicleAudioVoice::SetParamRange(float Min, float Max) {
}

void UFortVehicleAudioVoice::SetParamExplicit(FName Name, float Param) {
}

void UFortVehicleAudioVoice::SetParam(float Param) {
}



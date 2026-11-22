#include "SkeletalAudioBoneConfig.h"

FSkeletalAudioBoneConfig::FSkeletalAudioBoneConfig() {
    this->SoundLoop = NULL;
    this->SoundMediumDelta = NULL;
    this->SoundHighDelta = NULL;
    this->ThresholdLoop = 0.00f;
    this->ThresholdMedium = 0.00f;
    this->ThresholdHigh = 0.00f;
    this->RetriggerDelay = 0.00f;
    this->TrackingSpace = ESkeletalAudioBoneSpace::Relative;
    this->VelocityTrackingType = ESkeletalAudioBoneVelocityType::Linear;
}


#include "FortSwimmingAudioBank.h"

UFortSwimmingAudioBank::UFortSwimmingAudioBank() {
    this->SwimmingAssets1P[0] = NULL;
    this->SwimmingAssets1P[1] = NULL;
    this->SwimmingAssets1P[2] = NULL;
    this->SwimmingAssets1P[3] = NULL;
    this->SwimmingAssets1P[4] = NULL;
    this->SwimmingAssets1P[5] = NULL;
    this->SwimmingAssets1P[6] = NULL;
    this->SwimmingAssets1P[7] = NULL;
    this->SwimmingAssets3P[0] = NULL;
    this->SwimmingAssets3P[1] = NULL;
    this->SwimmingAssets3P[2] = NULL;
    this->SwimmingAssets3P[3] = NULL;
    this->SwimmingAssets3P[4] = NULL;
    this->SwimmingAssets3P[5] = NULL;
    this->SwimmingAssets3P[6] = NULL;
    this->SwimmingAssets3P[7] = NULL;
    this->TeammateVolumeMultiplier = 0.50f;
    this->MaxSwimmingDistance = 3072.00f;
    this->RequiredImmersionDepth = 0.00f;
}

float UFortSwimmingAudioBank::GetTeammateVolumeMultiplier() {
    return TeammateVolumeMultiplier;
}

USoundBase* UFortSwimmingAudioBank::GetSoundAsset(bool bIsLocal, TEnumAsByte<EFortSwimmingAudioType::Type> SwimType) {
    return NULL;
}

float UFortSwimmingAudioBank::GetRequiredImmersionDepth() {
    return RequiredImmersionDepth;
}



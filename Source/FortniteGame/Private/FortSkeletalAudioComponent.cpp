#include "FortSkeletalAudioComponent.h"

UFortSkeletalAudioComponent::UFortSkeletalAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioAssetBank = NULL;
    this->bShouldIgnoreDilation = false;
    this->InterpSpeed = 50.00f;
    this->bShouldAttachOneShots = false;
    this->SkeletalMesh = NULL;
}

void UFortSkeletalAudioComponent::SetVolumeMultiplier(float Multiplier) {
}

void UFortSkeletalAudioComponent::SetSkeletalMesh(USkeletalMeshComponent* NewSkeletalMesh) {
}

void UFortSkeletalAudioComponent::SetCustomTrackedTransform(int32 Index, const FTransform& Transform) {
}

void UFortSkeletalAudioComponent::SetCanPlay(bool CanPlay) {
}



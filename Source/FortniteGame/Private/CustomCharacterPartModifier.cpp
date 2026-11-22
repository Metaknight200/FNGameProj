#include "CustomCharacterPartModifier.h"

ACustomCharacterPartModifier::ACustomCharacterPartModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoApplyVariants = false;
    this->IdleVFX = NULL;
    this->PartType = EFortCustomPartType::NumTypes;
}

bool ACustomCharacterPartModifier::UsesIdleVFXNativeCustomAttachment() const {
    return false;
}

void ACustomCharacterPartModifier::SetChildParticleComponentsVisible(bool bVisible) {
}

void ACustomCharacterPartModifier::SetChildMeshComponentsHidden(bool bHideChildComponents) {
}

void ACustomCharacterPartModifier::SetCharacterActiveVariant(const FGameplayTag& ChannelTag, const FGameplayTag& VariantTag) {
}


UMeshComponent* ACustomCharacterPartModifier::GetSkeletalMeshForAssociatedPlayerPawnPartType() const {
    return NULL;
}

UFXSystemComponent* ACustomCharacterPartModifier::GetIdleVFXComponent() const {
    return NULL;
}

FName ACustomCharacterPartModifier::GetIdleFXSocketName() const {
    return NAME_None;
}

TEnumAsByte<EFortCustomPartType::Type> ACustomCharacterPartModifier::GetCharacterPartType() const {
    return EFortCustomPartType::Head;
}

void ACustomCharacterPartModifier::ForceResetParticleSystems() {
}

void ACustomCharacterPartModifier::ApplyVariantsToTrackedComponents() {
}



#include "DynamicBackgroundDirector.h"

ADynamicBackgroundDirector::ADynamicBackgroundDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DynamicBackgroundKey = EDynamicBackgroudKey::Lobby;
}

void ADynamicBackgroundDirector::TryForceSetupDonutStore() {
}

void ADynamicBackgroundDirector::SetIsInDonutSequence(bool bIsInSequence) {
}

void ADynamicBackgroundDirector::ResetDonutShopSeen() {
}

void ADynamicBackgroundDirector::RequestDonutUIPlayAnim() {
}

void ADynamicBackgroundDirector::OnDonutSequenceInitiated() {
}

void ADynamicBackgroundDirector::MarkDonutSequenceSeen() {
}

TSoftObjectPtr<UTexture> ADynamicBackgroundDirector::GetLoadedTexture() {
    return NULL;
}

bool ADynamicBackgroundDirector::GetHasDonutShopSequenceBeenSeen() {
    return false;
}



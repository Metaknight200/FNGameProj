#include "FortReticle.h"
#include "Components/SlateWrapperTypes.h"

UFortReticle::UFortReticle() {
    this->bIsVolatile = true;
    this->Visibility = ESlateVisibility::HitTestInvisible;
    this->ReticleWeaponCooldownMI = NULL;
}

void UFortReticle::OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon) {
}

void UFortReticle::OnReticleColorChanged() {
}

void UFortReticle::OnPawnSet() {
}

void UFortReticle::OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState) {
}

void UFortReticle::OnContextualReticleChanged() {
}

void UFortReticle::OnActorEnteredVolume(APlayerState* PS, AFortVolume* Volume) {
}

void UFortReticle::HandleWeaponChanged() {
}



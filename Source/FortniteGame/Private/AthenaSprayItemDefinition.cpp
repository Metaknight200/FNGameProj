#include "AthenaSprayItemDefinition.h"

UAthenaSprayItemDefinition::UAthenaSprayItemDefinition() {
    this->bHolsterWeapon = false;
    this->bMovingEmote = true;
    this->bUseBannerAsTexture = false;
}

bool UAthenaSprayItemDefinition::ShouldUseBannerAsTexture() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UAthenaSprayItemDefinition::GetDecalTexture() const {
    return NULL;
}

TSoftObjectPtr<UMaterialInterface> UAthenaSprayItemDefinition::GetDecalMaterial() const {
    return NULL;
}



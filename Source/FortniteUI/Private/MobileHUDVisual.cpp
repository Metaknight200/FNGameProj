#include "MobileHUDVisual.h"

UMobileHUDVisual::UMobileHUDVisual() {
    this->Opacity = 1.00f;
}

FGameplayTag UMobileHUDVisual::GetVisualType() const {
    return FGameplayTag{};
}



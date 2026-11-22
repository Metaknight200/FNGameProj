#include "AthenaItemShopReactiveTileText.h"

UAthenaItemShopReactiveTileText::UAthenaItemShopReactiveTileText() {
    this->MaxCharacterCountBeforeScaling = 15;
    this->MaxScaleDownPercentage = 0.75f;
    this->bDebugScaling = false;
    this->InitialFontSize = 24.00f;
}

void UAthenaItemShopReactiveTileText::SetMaxCharacterCountBeforeScaling(int32 InMaxCharacterCountBeforeScaling) {
}

int32 UAthenaItemShopReactiveTileText::GetMaxCharacterCountBeforeScaling() const {
    return MaxCharacterCountBeforeScaling;
}



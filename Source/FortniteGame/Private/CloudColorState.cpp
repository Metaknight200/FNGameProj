#include "CloudColorState.h"

FCloudColorState::FCloudColorState() {
    // Initialize reflected value fields omitted by the dump.
    this->BottomEmissive = FLinearColor::Transparent;
    this->BottomLightning = FLinearColor::Transparent;
    this->InternalColor = FLinearColor::Transparent;
    this->TopEmissive = FLinearColor::Transparent;
    this->TopLightning = FLinearColor::Transparent;
}


#include "LightProperty_Color.h"

FLightProperty_Color::FLightProperty_Color() {
    // Initialize reflected value fields omitted by the dump.
    this->Color = FLinearColor::Transparent;
    this->bEnabled = false;
    this->bUsingSRGB = false;
}


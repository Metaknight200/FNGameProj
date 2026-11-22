#include "ContextPosition.h"

FContextPosition::FContextPosition() {
    // Initialize reflected value fields omitted by the dump.
    this->Position = FVector2D::ZeroVector;
    this->Platform = EContextPositionPlatform::NonMobile;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}


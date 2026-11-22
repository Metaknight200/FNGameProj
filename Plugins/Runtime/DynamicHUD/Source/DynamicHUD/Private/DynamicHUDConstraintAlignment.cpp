#include "DynamicHUDConstraintAlignment.h"

UDynamicHUDConstraintAlignment::UDynamicHUDConstraintAlignment() {
    this->HorizontalAlignment = HAlign_Center;
    this->VerticalAlignment = VAlign_Center;
    this->Anchor = EDynamicHUDAnchor::TopLeft;
}



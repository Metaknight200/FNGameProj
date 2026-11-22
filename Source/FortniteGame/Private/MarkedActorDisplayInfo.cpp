#include "MarkedActorDisplayInfo.h"

FMarkedActorDisplayInfo::FMarkedActorDisplayInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->PrimaryColor = FLinearColor::Transparent;
    this->CustomIndicatorClass = NULL;
    this->Sound = NULL;
    this->ScreenClamping = EFortMarkedActorScreenClamping::Default;
}


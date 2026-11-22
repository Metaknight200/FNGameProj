#include "HUDMessageData.h"

FHUDMessageData::FHUDMessageData() {
    this->Placement = EHUDMessagePlacement::None;
    this->PlayerState = NULL;
    this->MessageTargets = 0;
    this->TextTransformPolicy = ETextTransformPolicy::None;
    this->DisableChannel = 0;
}


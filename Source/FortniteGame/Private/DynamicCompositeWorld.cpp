#include "DynamicCompositeWorld.h"

FDynamicCompositeWorld::FDynamicCompositeWorld() {
    this->CameraOverride = EFrontEndCamera::Invalid;
    this->GetDefaultLevelTransitionTime = 0.00f;
    this->bStreamInOnDemand = false;
    this->bStreamInLevel = false;
    this->bLevelStreamedIn = false;
}


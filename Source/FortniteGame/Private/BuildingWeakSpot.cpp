#include "BuildingWeakSpot.h"

ABuildingWeakSpot::ABuildingWeakSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHit = false;
    this->bFadeOut = false;
    this->bActive = false;
    this->HitCount = 0;
    this->Level = 0;
    this->MaxLevel = 7;
    this->PhysicalSurfaceType = SurfaceType12;
}




void ABuildingWeakSpot::Deactivate() {
}



#include "FortSkyTube.h"
#include "Components/SplineComponent.h"

AFortSkyTube::AFortSkyTube(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->bExemptFromShutdown = false;
    this->Spline = (USplineComponent*)RootComponent;
    this->bEnabled = true;
    this->bShuttingDown = false;
}



bool AFortSkyTube::IsSkyTubeEnabled() const {
    return false;
}

bool AFortSkyTube::IsShuttingDown() const {
    return bShuttingDown;
}

bool AFortSkyTube::IsExemptFromShutdown() const {
    return bExemptFromShutdown;
}

float AFortSkyTube::GetDelayUntilDisabled() const {
    return 0.0f;
}

void AFortSkyTube::DeferredEnableOverlaps() {
}



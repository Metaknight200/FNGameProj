#include "FortCheckPointSplineActor.h"

AFortCheckPointSplineActor::AFortCheckPointSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSmoothSplineMesh = false;
    this->SplineMeshTension = 1.00f;
    this->bShowSplineMeshAtStartup = false;
    this->bDrawSplineMapUI = false;
    this->NumSplineMapUISegments = 100;
    this->SplineMapUIThickness = 4.00f;
    this->bSplineMapUIAntialias = true;
}

void AFortCheckPointSplineActor::ShowSplineMeshes(int32 SplineIndexStart, int32 SplineIndexEnd) {
}

void AFortCheckPointSplineActor::ShowMapUI(int32 SplineIndexStart, int32 SplineIndexEnd) {
}

void AFortCheckPointSplineActor::ShowFullMapUI() {
}

void AFortCheckPointSplineActor::HideSplineMeshes() {
}

void AFortCheckPointSplineActor::HideMapUI() {
}





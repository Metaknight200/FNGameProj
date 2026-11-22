#include "ProceduralPointCloudPoint.h"

FProceduralPointCloudPoint::FProceduralPointCloudPoint() {
    // Initialize reflected value fields omitted by the dump.
    this->SurfaceNormal = FVector::ZeroVector;
    this->SurfaceObject = NULL;
    this->Object = NULL;
    this->ObjectVariation = 0;
    this->CollisionRadius = 0.00f;
    this->SourcePointGeneratorIndex = 0.00f;
}


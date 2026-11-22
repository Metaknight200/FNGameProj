#include "ProceduralScatter2DPoint.h"

FProceduralScatter2DPoint::FProceduralScatter2DPoint() {
    // Initialize reflected value fields omitted by the dump.
    this->Location = FVector::ZeroVector;
    this->MaxAABB = FBox2D(ForceInit);
    this->Scale = 0.00f;
    this->ScatterSettings = NULL;
    this->CollisionRadius = 0.00f;
    this->bBlocker = false;
    this->RandomNumber = 0;
}


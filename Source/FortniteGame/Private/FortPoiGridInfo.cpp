#include "FortPoiGridInfo.h"

FFortPoiGridInfo::FFortPoiGridInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->WorldGridEnd = FVector2D::ZeroVector;
    this->WorldGridSpacing = FVector2D::ZeroVector;
    this->WorldGridStart = FVector2D::ZeroVector;
    this->WorldGridTotalSize = FVector2D::ZeroVector;
    this->GridCountX = 0;
    this->GridCountY = 0;
}


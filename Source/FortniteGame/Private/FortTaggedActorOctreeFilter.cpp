#include "FortTaggedActorOctreeFilter.h"

FFortTaggedActorOctreeFilter::FFortTaggedActorOctreeFilter() {
    // Initialize reflected value fields omitted by the dump.
    this->Bounds = FBoxSphereBounds(FVector::ZeroVector, FVector::ZeroVector, 0.0f);
    this->MinDistanceFromBoundsCenter = 0.00f;
    this->bHasAllTags = false;
}


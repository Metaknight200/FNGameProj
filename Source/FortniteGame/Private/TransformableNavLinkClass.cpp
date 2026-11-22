#include "TransformableNavLinkClass.h"

FTransformableNavLinkClass::FTransformableNavLinkClass() {
    // Initialize reflected value fields omitted by the dump.
    this->Rotation = FRotator::ZeroRotator;
    this->Translation = FVector::ZeroVector;
    this->NavigationLinksClass = NULL;
}


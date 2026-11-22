#include "TargetingSelectionTask_AOE.h"

UTargetingSelectionTask_AOE::UTargetingSelectionTask_AOE() {
    this->ShapeType = ETargetingAOEShape::Box;
    this->CollisionChannel = ECC_PhysicsBody;
    this->bIgnoreSourceActor = false;
    this->bIgnoreInstigatorActor = false;
}

FVector UTargetingSelectionTask_AOE::GetSourceOffset_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return FVector{};
}

FVector UTargetingSelectionTask_AOE::GetSourceLocation_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return FVector{};
}



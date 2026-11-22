#include "DynamicHUDConstraintComparison.h"

UDynamicHUDConstraintComparison::UDynamicHUDConstraintComparison() {
    this->Side = EDynamicHUDSide::Top;
    this->Offset = 0.00f;
    this->Comparison = EDynamicHUDComparison::Equal;
    this->TargetSide = EDynamicHUDSide::Top;
    this->TargetOffset = 0.00f;
    this->Strength = EDynamicHUDStrength::Strong;
}



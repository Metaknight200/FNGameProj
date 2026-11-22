#include "DynamicHUDConstraintEquation.h"

UDynamicHUDConstraintEquation::UDynamicHUDConstraintEquation() {
    this->Side = EDynamicHUDSide::Top;
    this->Operator = EDynamicHUDOperator::Addition;
    this->TargetSide = EDynamicHUDSide::Top;
    this->Comparison = EDynamicHUDComparison::Equal;
    this->Result = 0.00f;
    this->Strength = EDynamicHUDStrength::Strong;
}



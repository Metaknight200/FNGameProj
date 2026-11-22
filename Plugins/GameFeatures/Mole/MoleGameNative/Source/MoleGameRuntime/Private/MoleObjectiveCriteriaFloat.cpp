#include "MoleObjectiveCriteriaFloat.h"

FMoleObjectiveCriteriaFloat::FMoleObjectiveCriteriaFloat() {
    this->ValueType = EMoleObjectiveCriteriaFloatType::FloatValue;
    this->bCapValueByObjectiveTaskActorCount = false;
    this->bShowCapValueOption = false;
}


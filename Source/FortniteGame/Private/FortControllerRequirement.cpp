#include "FortControllerRequirement.h"

UFortControllerRequirement::UFortControllerRequirement() {
    this->bInverseCondition = false;
}

bool UFortControllerRequirement::IsRequirementMetInternal_Implementation(const FControllerRequirementTestContext& RequestContext) const {
    return false;
}

bool UFortControllerRequirement::IsRequirementMet(const FControllerRequirementTestContext& RequestContext) const {
    return false;
}



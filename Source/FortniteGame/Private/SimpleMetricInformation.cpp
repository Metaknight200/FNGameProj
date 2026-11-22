#include "SimpleMetricInformation.h"

FSimpleMetricInformation::FSimpleMetricInformation() {
    // Initialize reflected value fields omitted by the dump.
    this->Location = FVector::ZeroVector;
    this->NeighbourGroupCenter = FVector::ZeroVector;
    this->NormalizedGroupBudgetValue = 0.00f;
    this->GroupTotalBudget = 0;
}


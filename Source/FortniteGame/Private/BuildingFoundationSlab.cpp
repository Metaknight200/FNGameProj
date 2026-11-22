#include "BuildingFoundationSlab.h"
#include "EDynamicFoundationType.h"

ABuildingFoundationSlab::ABuildingFoundationSlab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DynamicFoundationType = EDynamicFoundationType::StartDisabled;
}



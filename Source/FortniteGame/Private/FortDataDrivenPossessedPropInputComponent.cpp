#include "FortDataDrivenPossessedPropInputComponent.h"

UFortDataDrivenPossessedPropInputComponent::UFortDataDrivenPossessedPropInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PossessedPropPlaceBindings.AddDefaulted(1);
    this->PossessedPropMakeNoiseBindings.AddDefaulted(1);
    this->PossessedPropCancelBindings.AddDefaulted(1);
}



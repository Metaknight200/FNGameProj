#include "FortBuildingAddStructuralSupportComponent.h"

UFortBuildingAddStructuralSupportComponent::UFortBuildingAddStructuralSupportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UFortBuildingAddStructuralSupportComponent::DestroyAddedStructuralBuildingActors() {
}



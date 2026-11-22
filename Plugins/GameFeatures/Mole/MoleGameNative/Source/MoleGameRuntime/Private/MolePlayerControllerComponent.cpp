#include "MolePlayerControllerComponent.h"

UMolePlayerControllerComponent::UMolePlayerControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoleCoreInputComp = NULL;
    this->MoleKBMInputSettings = NULL;
    this->MoleControllerInputSettings = NULL;
    this->BindingsDataTable = NULL;
}


